#pragma once
#include <stdlib.h>
#include <GL/glut.h>
#include "glm.h"

//Clase encargada de dibujar el modelo
class Model
{
private:
    GLMmodel *model;
    GLfloat  offsetX;
    GLfloat  offsetY;
    GLfloat  offsetZ;

public:
    Model(char* name, GLfloat, GLfloat, GLfloat);
    void draw(double x, double y, double z, double scale, double R, double G, double B);
};

Model::Model(char* name,
             GLfloat offsetX, GLfloat offsetY, GLfloat offsetZ)
{
    this->model   = glmReadOBJ(name);
    this->offsetX = offsetX;
    this->offsetY = offsetY;
    this->offsetZ = offsetZ;
}


void Model::draw(double x, double y, double z, double scale, double R, double G, double B)
{
    GLfloat mat[]           = { R / 255, G / 255, B / 255, 1.0f };
    GLfloat mat_shininess[] = { 0.0f };

    glMaterialfv(GL_FRONT, GL_AMBIENT, mat);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess); //color

    glPushMatrix();
        glTranslatef(x, y, z);
        glScalef(scale, scale, scale);
        glmFacetNormals(model);
        glmVertexNormals(model, 90.0);
        glmDraw(model, GLM_SMOOTH);
    glPopMatrix();
}
