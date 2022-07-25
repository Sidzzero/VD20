#ifndef  RESOURCE_MANAGER
#define RESOURCE_MANAGER
#include <iostream>
#include <string>
#include <iterator>
#include <map>

#include "Core/shader.h"
#include "Texture.h"



/// <summary>
/// This class takes care of loading and storing all the resources like textures
/// shaders for easy loading,access
/// </summary>
class ResourceManager
{
public:
	static std::map<std::string, Shader*>  shaders;
	static std::map<std::string, Texture*> textures;

	static Shader*  GetShader(std::string shaderName);
	static Texture* GetTexture(std::string textureName);

	static bool LoadShader(const char* vertFilename,
		            const char* fragFileName, std::string shaderName);

	static bool LoadTexture(const char* texFileLocation, std::string shaderName);

private:
	ResourceManager();//as everything else is static dont want anyone creating this...


};
#endif

