#include "Camera.h"

//Camera::Camera()
//{
//	rotX = 0;
//	rotY = 0;
//	pos = glm::vec3(0, 0, 0);
//}
//
//glm::vec3 Camera::getPos()
//{
//	return pos;
//}
//
//void Camera::MoveCamR()
//{
	//glm::mat4 t(1.0f);
	//t = glm::rotate(t, glm::radians(rotX), glm::vec3(0, 1, 0));
	//t = glm::translate(t, glm::vec3(1, 0, 0));
	//goR = t * glm::vec4(0.0f, 0.0f, 0.0f, 1.0f);
	//goR = glm::normalize(goR);
	//const Uint32 mouse = SDL_GetMouseState(&mouseX, &mouseY);
	//if (mouseX > (windowWidth / 2))
	//{
	//	angleX -= rotspeed;
	//}
	//if (mouseX < (windowWidth / 2))
	//{
	//	angleX += rotspeed;
	//}
	//if (mouseY > (windowHeight / 2))
	//{
	//	angleY -= rotspeed;
	//}
	//if (mouseY < (windowHeight / 2))
	//{
	//	angleY += rotspeed;
	//}
	//std::cout << angleX << " " << angleY << std::endl;

	//const Uint8 *state = SDL_GetKeyboardState(NULL);
	//if (state[SDL_SCANCODE_D])
	//{
	//	pos += (right*movespeed);
	//}
	//if (state[SDL_SCANCODE_A])
	//{
	//	pos -= (right*movespeed);
	//}
	//if (state[SDL_SCANCODE_W])
	//{
	//	pos += (fwd*movespeed);
	//}
	//if (state[SDL_SCANCODE_S])
	//{
	//	pos -= (fwd*movespeed);
	//}
	//std::cout << getPos().x << " " << getPos().y << " " << getPos().x << std::endl;
//}//

//void Camera::MoveCamL()
//{
//		glm::mat4 t(1.0f);
//		t = glm::rotate(t, glm::radians(rotX), glm::vec3(0, 1, 0));
//		t = glm::translate(t, glm::vec3(1, 0, 0));
//		goL = t * glm::vec4(0.0f, 0.0f, 0.0f, 1.0f);
//		goL = glm::normalize(goL);
//}
//
//glm::mat4 Camera::getView()
//{
//	return glm::inverse(model);
//}
//
//glm::mat4 Camera::getProjection()
//{
//	//projection = glm::perspective(glm::radians(45.0f), (float)windowWidth / (float)windowHeight, 0.1f, 1000.f);
//	return projection;
//}

//glm::mat4 Camera::getMatrix()
//{
//	model = glm::mat4(1.0f);
//	model = glm::translate(model, pos);
//	model = glm::rotate(model, glm::radians(angleX), glm::vec3(0, 1, 0));
//	model = glm::rotate(model, glm::radians(angleY), glm::vec3(1, 0, 0));
//
//	return model;
//}
