#pragma once

#include <glm/glm.hpp>

class Maths
{
public:
    static float radians(const float);
    static float norm(const glm::vec3);
    static glm::vec3 normalize(const glm::vec3);
    static glm::mat4 translate( const glm::vec3);
    static glm::mat4 scale( const glm::vec3);
    static glm::mat4 rotate( const float angle, const glm::vec3 vector);
};