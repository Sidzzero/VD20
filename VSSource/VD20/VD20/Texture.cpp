#include "Texture.h"

Texture::Texture(const unsigned char* a_data, int a_width, int a_height, int a_nrChannel)
{
	glGenTextures(1, &ID);
	glBindTexture(GL_TEXTURE_2D, ID);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, a_width, a_height, 0, GL_RGB, GL_UNSIGNED_BYTE, a_data);
	glGenerateMipmap(GL_TEXTURE_2D);
}

void Texture::UseTexture()
{
	glBindTexture(GL_TEXTURE_2D,ID);
}
