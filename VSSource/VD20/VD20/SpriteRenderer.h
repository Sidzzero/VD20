#ifndef SPRITE_RENDERER_H
#define SPRITE_RENDERER_H

#include "Core/common.h"

#include "Core/shader.h"
#include "Texture.h"
class SpriteRenderer
{
public:
	Transform transform;
	glm::vec3 tintColor;
	SpriteRenderer(Texture a_texture);
	void Draw(Shader shader);

	static float verticesWithTexture[];
private :
	GLuint vao;
	GLuint vbo;
	GLuint ebo;
	Texture texture;
	
	


};
#endif


