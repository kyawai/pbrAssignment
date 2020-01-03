#ifndef _SHADER_H_
#define _SHADER_H_

#include <string>
#include <glm/glm.hpp>
#include <GL/glew.h>
#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

class Shader
{
		void checkErrors(GLuint shader, std::string type);
public:
		unsigned int ID;
		Shader(const char* vertPath, const char* fragPath, const char* geoPath = nullptr);
		void useProg();
		void setBool(const std::string &name, bool val) const;
		void setInt(const std::string &name, int val) const;
		void setFloat(const std::string &name, float val) const;
		void setVec2(const std::string &name, const glm::vec2 &val) const;
		void setVec2(const std::string &name, float x, float y) const;
		void setVec3(const std::string &name, const glm::vec3 &val) const;
		void setVec3(const std::string &name, float x, float y, float z) const;
		void setVec4(const std::string &name, const glm::vec4 &val) const;
		void setVec3(const std::string &name, float x, float y, float z, float w) const;
		void setMat2(const std::string &name, const glm::mat2 &mat) const;
		void setMat3(const std::string &name, const glm::mat3 &mat) const;
		void setMat4(const std::string &name, const glm::mat4 &mat) const;



};


#endif 