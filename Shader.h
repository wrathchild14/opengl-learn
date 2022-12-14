#pragma once

#include <string>
#include<glad/glad.h>

std::string GetFileContent(const char* filename);

class Shader
{
public:
    GLuint ID;
    Shader(const char* vertex_file, const char* fragment_file);

    void Activate() const;
    void Delete() const;

private:
    void CompileErrors(GLuint shader, const char* type);
};
