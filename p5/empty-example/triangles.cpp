#include <iostream>
using namespace std;

#include "vg1.h"
#include "LoadShaders.h"

enum VAO_IDs {Triangles, NumVAOs};
enum Buffer_IDs { ArrayBuffer, NumBuffers };
enum Attrib_IDs {vPosition = 0};

GLuint VAO[NumVAOs];
GLuint Buffers[NumBuffers];

const GLuint NumVertices = 6;

void init(void)
{
    glGenVertexArrays(NumVAOs, VAOs);
    glBindVertexArray(VAOs[Triangles]);

    GLfloat vertices[NumVertices][2] = {
      { -0.90, -0.90},
      {  0.85, -0.90},
      { -0.90,  0.85},
      {  0.90, -0.85},
      {  0.90,  0.90},
      { -0.85,  0.90}
    };

    glGenBuffers
}
