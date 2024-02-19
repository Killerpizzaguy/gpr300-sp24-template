#pragma once
#include "../ew/external/glad.h"
#include "../ew/camera.h"

namespace wr {
struct Light : ew::Camera{
	//ew::Camera lightCam;
	glm::vec3 lightColor = glm::vec3(1.0f);
	

	inline glm::mat4 lightMatrix()
	{
		return viewMatrix() * projectionMatrix();
	}

	void initOrtho(float nearPlane, float farPlane, float orthoHeight)
	{
		orthographic = true;
		this->nearPlane = nearPlane;
		this->farPlane = farPlane;
		this->orthoHeight = orthoHeight;
		aspectRatio = 1;
	}
};
}
