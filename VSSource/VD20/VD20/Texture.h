#ifndef  TEXTURE_H
#define TEXTURE_H

//#include <GLFW/glfw3.h>
#include <glad/glad.h>
class Texture
{
public:
	GLuint ID;
	Texture(const unsigned char* a_fileName, int a_width,int a_height,int a_nrChannel);
	void UseTexture(void);
};
#endif // ! 

