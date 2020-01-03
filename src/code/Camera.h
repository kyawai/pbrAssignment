#ifndef _CAMERA_H_
#define _CAMERA_H_
#include "SDL2/SDL.h"
#include <GL/glew.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

class Camera
{

		glm::vec3 pos;
		glm::mat4 view;
		glm::mat4 projection;
		float angle;
		glm::vec3 camPos;
		glm::vec3 camRot;
		float rotY;
		float rotX;
		glm::vec3 goR;
		glm::vec3 goL;
		glm::mat4 model;

public:
		Camera();
		void CamIni(float _angle);
		glm::mat4 getView();
		glm::vec3 getPos();
		glm::mat4 getProjection();
		void AddRotCam(float _rotY, float _rotX, float _rotZ);
		void MoveCamR();
		void MoveCamL();

};


#endif