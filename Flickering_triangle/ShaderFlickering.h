#pragma once
#ifndef SHADER_H
#define SHADER_H

#include<glad/glad.h>

#include <iostream>
#include <fstream>
#include <sstream>

class ShaderFlickering
{
public:
	unsigned int ID;

	ShaderFlickering(const char* vertexShaderPath, const char* fragmentShaderPath);
	void use();

	void setBool(const std::string& name, bool value) const;

	void setInt(const std::string& name, int value) const;

	void setFloat(const std::string& name, float value) const;

	//void set4f(const std::string& name, vec4 value) const;

private:
	void checkCompileErrors(unsigned int shader, std::string type);
};

#endif 

