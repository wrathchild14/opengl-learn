#pragma once

#include<glad/glad.h>
#include<GLFW/glfw3.h>
#include<glm/glm.hpp>
#include<glm/gtc/matrix_transform.hpp>
#include<glm/gtc/type_ptr.hpp>
#include<glm/gtx/vector_angle.hpp>

#include"Shader.h"

class Camera
{
public:
    Camera(int width, int height, glm::vec3 position);

    glm::vec3 GetPosition() const;

    void Matrix(const Shader& shader, const char* uniform);
    void UpdateMatrix(float fov_deg, float near_plane, float far_plane);
    void Inputs(GLFWwindow* window);

private:
    int m_Width;
    int m_Height;

    glm::vec3 m_Position{};
    glm::vec3 m_Orientation = glm::vec3(0.0f, 0.0f, -1.0f);
    glm::vec3 m_Up = glm::vec3(0.0f, 1.0f, 0.0f);
    glm::mat4 m_CameraMatrix = glm::mat4(1.0f);

    float m_Speed = 0.005f;
    float m_Sensitivity = 50.0f;

    bool m_First_click = false;
};
