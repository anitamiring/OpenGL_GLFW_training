#pragma once

#ifndef SHADER_H
#define SHADER_H

#include <glad/glad.h>

#include <iostream>
#include <fstream>
#include <sstream>

class ShaderTexture
{
public:
	unsigned int ID;
	ShaderTexture(const char* vertexShader, const char* fragmentShader);

	void use();

	void setBool(const std::string& name, bool value) const;

	void setInt(const std::string& name, int value) const;

	void setFloat(const std::string& name, float value) const;
private:
	void checkCompileErrors(unsigned int shader, std::string type);

};

#endif;

