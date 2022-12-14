#pragma once

#include<glad/glad.h>

#include"Shader.h"

class Texture
{
public:
    GLuint ID{};
    const char* type;

    Texture(const char* image, const char* tex_type, GLuint slot, GLenum format, GLenum pixel_type);

    void TexUnit(const Shader& shader, const char* uniform, GLuint unit);
    void Bind();
    void Unbind();
    void Delete();
private:
    GLuint m_Uint;
};
