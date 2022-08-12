#ifndef COMMON_H
#define COMMON_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "Core/External/glm/glm/glm.hpp"
#include "Core/External/glm/glm/gtc/matrix_transform.hpp"
#include "Core/External/glm/glm/gtc/type_ptr.hpp"


struct Transform
{
	glm::vec3 pos{ 0.0f,0.0f,0.0f };
	glm::vec3 rot{ 0.0f,0.0f,0.0f };
	glm::vec3 scale{1.0f,1.0f,1.0f };
};

#endif