#ifndef _SPHERE_H_
#define _SPHERE_H_

#include "Shader.h"
#include "Texture.h"
#include <string>
#include <glm/gtx/string_cast.hpp>

struct Vertex {
		glm::vec3 position;
		glm::vec3 normal;
		glm::vec2 texCoords;
};

struct Texture
{
		unsigned int id;
		std::string type;
};
class Ball
{
	/*unsigned int VAO;
	unsigned int VBO;
	unsigned int EBO;
	unsigned int indexCount;
	bool sphere;*/

	//std::vector<Tex> textures;
	//std::vector<glm::vec3> positions;
	//std::vector<glm::vec2> uv;
	//std::vector<glm::vec3> normals;
	//std::vector<unsigned int> indices;
	//std::vector<float> data;




public:

		std::vector<Vertex> vertices;
		std::vector<unsigned int> indices;
		std::vector<Texture> textures;
		Ball(std::vector<Vertex> vertices, std::vector<unsigned int> indices, std::vector<Texture> textures);
		void Draw(Shader shader);
		void MakeMesh();
		unsigned int VAO;
		unsigned int VBO;
		unsigned int EBO;
		Ball();

};

#endif
