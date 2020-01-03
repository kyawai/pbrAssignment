//
//#include "code/Camera.h"
//#include "code/Shader.h"
//
//#include "code/Sphere.h"
//

//
//#include <iostream>
////#include <memory>
//#include <SDL2/SDL.h>
//#include <GL/glew.h>
//#include <exception>
//#include <glm/glm.hpp>
//#include <vector>
//#include <glm/ext.hpp>
//#include <glm/gtc/matrix_transform.hpp>
//#include <iostream>
//#include <random>
//#include <time.h>
//
//#define windowWidth 640
//#define windowHeight 640
//
//
int main()
{
		return 0;
}
//int main(int argc, char *argv[])
//{
//
//		float lastTime = 0.0f;
//		float time = 0.0f;
//		float diff = 0.0f;
//		float deltaTime = 0.0f;
//		Camera left;
//		Camera right;
//
//		/*float vertices[] = { 0.5f, -0.5f, 0.0f,
//		-0.5f, -0.5f,0.0f,
//		0.0f,0.5f,0.0f };
//
//		unsigned int VBO, VAO;
//		glGenVertexArrays(1, &VAO);
//		glGenBuffers(1, &VBO);
//		glBindVertexArray(VAO);
//		glBindBuffer(GL_ARRAY_BUFFER, VBO);
//		glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//		glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
//		glEnableVertexAttribArray(0);
//		glBindVertexArray(VAO);*/
//
//
//	if (SDL_Init(SDL_INIT_VIDEO) < 0)
//	{
//		throw std::exception();
//	}
//	
//	SDL_Window *window = SDL_CreateWindow("pbr",
//		SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
//		windowWidth, windowHeight, SDL_WINDOW_RESIZABLE | SDL_WINDOW_OPENGL);
//	if (!SDL_GL_CreateContext(window))
//	{
//		throw std::exception();
//	}
//	if (glewInit() != GLEW_OK)
//	{
//		throw std::exception();
//	}
//
//	float vertices[] = {
//		 0.5f, -0.5f, 0.0f,  // bottom right
//		-0.5f, -0.5f, 0.0f,  // bottom left
//		 0.0f,  0.5f, 0.0f   // top 
//	};
//
//	unsigned int VBO, VAO;
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//	// bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
//	glBindVertexArray(VAO);
//
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
//	glEnableVertexAttribArray(0);
//	glBindBuffer(GL_ARRAY_BUFFER, 0);
//	glBindVertexArray(VAO);
//
//	Shader usingShader;
//	Ball makingMesh;
//	SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
//
//	glEnable(GL_CULL_FACE);
//	glEnable(GL_DEPTH_TEST);
//	bool quit = false;
//	while (!quit)
//	{
//		time = SDL_GetTicks();
//		diff = time - lastTime;
//		deltaTime = diff / 1000;
//
//
//		SDL_Event event = { 0 };
//		while (SDL_PollEvent(&event))
//		{
//			if (event.type == SDL_QUIT)
//			{
//				quit = true;
//			}
//			if (event.type == SDL_KEYDOWN)
//			{
//					switch (event.key.keysym.sym)
//					{
//					case SDLK_d:
//							right.MoveCamR();
//							break;
//					case SDLK_a:
//							left.MoveCamL();
//							break;
//					}
//			}
//		}
//		
//		glClearColor(0.0f, 1.0f, 0.0f, 1.0f);
//		glClear(GL_COLOR_BUFFER_BIT);
//		usingShader.setActiveShader();
//		glUseProgram(usingShader.shaderProg);
//
//	//	int vertexColorLocation = glGetUniformLocation(usingShader.shaderProg, "ourColor");
//    //glUniform4f(vertexColorLocation, 1.0f, 0.0f, 0.0f, 1.0f);
//	//	makingMesh.MakeMesh();
//		glBindVertexArray(VAO);
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//
//
//		SDL_GL_SwapWindow(window);
//	}
//	SDL_DestroyRenderer(renderer);
//	SDL_DestroyWindow(window);
//	SDL_Quit();
//	return 0;
//}
