#include "shader.h"


void Shader::checkErrors(GLuint shader, std::string type)
{
		//checks for any shader compilation errors or shader linking errors
		GLint success;
		GLchar infoLog[1024];
		if (type != "PROGRAM")
		{
				glGetShaderiv(shader, GL_COMPILE_STATUS, &success);
				if (!success)
				{
						glGetShaderInfoLog(shader, 1024, NULL, infoLog);
						std::cout << "Shader Compilation Error of type: " << type << "\n" << infoLog << std::endl;
				}
		}
		else
		{
				glGetProgramiv(shader, GL_LINK_STATUS, &success);
				if (!success)
				{
						glGetProgramInfoLog(shader, 1024, NULL, infoLog);
						std::cout << " Program Linking Error of type: " << type << "\n" << infoLog << std::endl;
				}
		}
}

Shader::Shader(const char * vertPath, const char * fragPath, const char * geoPath)
{
		//opening shader files, converting them into string then linking them:
		// get the vertex and frament source code from filepath

		std::string vertCode;
		std::string fragCode;
		std::ifstream vShaderFile;
		std::ifstream fShaderFile;

		//makes sure ifstreams can throw exceptions
		vShaderFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);
		fShaderFile.exceptions(std::ifstream::failbit | std::ifstream::badbit);

		//Start opening and reading the files:
		try
		{
				//open the files
				vShaderFile.open(vertPath);
				fShaderFile.open(fragPath);
				//create stringstreams for vertex and fragment shader streams
				std::stringstream vShaderStream;
				std::stringstream fShaderStream;
				//read files buffer contents into the streams
				vShaderStream << vShaderFile.rdbuf();
				fShaderStream << fShaderFile.rdbuf();
				//close the files
				vShaderFile.close();
				fShaderFile.close();
				//take the streams taken from files and convert them into strings that the program can read
				vertCode = vShaderStream.str();
				fragCode = fShaderStream.str();

		}
		//error checking
		catch (std::ifstream::failure e)
		{
				std::cout << "cannot read shader" << std::endl;
		}
		//create a variable that will gold the shader characters and assign them from the strings
		const char* vshaderCode = vertCode.c_str();
		const char* fshaderCode = fragCode.c_str();
		//compile the shaders:
		unsigned int vert, frag;
		//starting with the vertex shader
		vert = glCreateShader(GL_VERTEX_SHADER);
		glShaderSource(vert, 1, &vshaderCode, NULL);
		glCompileShader(vert);
		checkErrors(vert, "VERTEX");
		//compile the fragment shader
		frag = glCreateShader(GL_FRAGMENT_SHADER);
		glShaderSource(frag, 1, &fshaderCode, NULL);
		glCompileShader(frag);
		checkErrors(frag, "FRAGMENT");
		//compile the shader program
		ID = glCreateProgram();
		glAttachShader(ID, vert);
		glAttachShader(ID, frag);
		glLinkProgram(ID);
		checkErrors(ID, "PROGRAM");
		//delete the shaders, they are no longer needed by themselves since they have been linked to the program
		glDeleteShader(vert);
		glDeleteShader(frag);
}

void Shader::useProg()
{
		glUseProgram(ID);
}

void Shader::setBool(const std::string & name, bool val) const
{
		glUniform1i(glGetUniformLocation(ID, name.c_str()), (int)val);
}

void Shader::setInt(const std::string & name, int val) const
{
		glUniform1i(glGetUniformLocation(ID, name.c_str()), val);
}

void Shader::setFloat(const std::string & name, float val) const
{
		glUniform1i(glGetUniformLocation(ID, name.c_str()), val);
}

void Shader::setVec2(const std::string & name, const glm::vec2 & val) const
{
		glUniform2fv(glGetUniformLocation(ID, name.c_str()),1, &val[0]);
}

void Shader::setVec2(const std::string & name, float x, float y) const
{
		glUniform2f(glGetUniformLocation(ID, name.c_str()), x, y);
}

void Shader::setVec3(const std::string & name, const glm::vec3 & val) const
{
		glUniform3fv(glGetUniformLocation(ID, name.c_str()), 1, &val[0]);
}

void Shader::setVec3(const std::string & name, float x, float y, float z) const
{
		glUniform3f(glGetUniformLocation(ID, name.c_str()), x, y, z);
}

void Shader::setVec4(const std::string & name, const glm::vec4 & val) const
{
		glUniform4fv(glGetUniformLocation(ID, name.c_str()), 1, &val[0]);
}

void Shader::setVec3(const std::string & name, float x, float y, float z, float w) const
{
		glUniform4f(glGetUniformLocation(ID, name.c_str()), x, y, z, w);
}

void Shader::setMat2(const std::string & name, const glm::mat2 & mat) const
{
		glUniformMatrix2fv(glGetUniformLocation(ID, name.c_str()), 1, GL_FALSE, &mat[0][0]);
}

void Shader::setMat3(const std::string & name, const glm::mat3 & mat) const
{
		glUniformMatrix3fv(glGetUniformLocation(ID, name.c_str()), 1, GL_FALSE, &mat[0][0]);
}

void Shader::setMat4(const std::string & name, const glm::mat4 & mat) const
{
		glUniformMatrix4fv(glGetUniformLocation(ID, name.c_str()), 1, GL_FALSE, &mat[0][0]);
}
