#include "ResourceManager.h"

 std::map<std::string, Shader*>  ResourceManager::shaders;
 std::map<std::string, Texture*> ResourceManager::textures;

 Shader* ResourceManager::GetShader(std::string shaderName)
{
	auto shader = shaders.at(shaderName);
	
	return shader;
}

 Texture* ResourceManager::GetTexture(std::string textureName)
{
	auto textureFound = textures.at(textureName);
	
	return textureFound;
}

bool ResourceManager::LoadShader(const char* vertFilename, const char* fragFileName,std::string shaderName)
{
	bool bResult = false;
	Shader* createdShader = nullptr;
	std::string vertexCode;
	std::string fragmentCode;
	
	std::ifstream vertShaderFile;
	std::ifstream fragShaderFile;

	vertShaderFile.exceptions(std::ifstream::failbit || std::ifstream::badbit);
	fragShaderFile.exceptions(std::ifstream::failbit || std::ifstream::badbit);

	try
	{
		vertShaderFile.open(vertFilename);
		fragShaderFile.open(fragFileName);

		std::stringstream vShaderStream, fragShaderStream;
		vShaderStream << vertShaderFile.rdbuf();
		fragShaderStream << fragShaderFile.rdbuf();

		vertShaderFile.close();
		fragShaderFile.close();

		vertexCode = vShaderStream.str();
		fragmentCode = fragShaderStream.str();
		bResult = true;
	}
	catch (std::ifstream::failure e)
	{
		std::cout << "ERROR::SHADER::FILE_NOT_SUCCESFULLY_READ" << std::endl;
		bResult = false;
	}

	const char* vShaderCode = vertexCode.c_str();
	const char* fShaderCode = fragmentCode.c_str();

	if (!bResult)
	{
		return false;
    }

	Shader* created_shader = new Shader();
	bResult = created_shader->LoadShader(vShaderCode,fShaderCode);
	if(bResult == true)
	{
		shaders.insert(std::pair<std::string, Shader*>(shaderName, created_shader));
	}
	else
	{
		std::cout << "ERROR::SHADER::Compliation/linking failure" << std::endl;

	}
	return bResult;
	 
}

bool ResourceManager::LoadTexture(const char* texFileLocation)
{
	Texture* createdTexture = nullptr;
	return createdTexture;
	return false;
}
