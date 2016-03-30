#pragma once
#include <stdlib.h>
#include <GL/glut.h>


//Clase encargada de dibujar el plano
class Plane
{
private:
    GLfloat * points;
    int     len;
    GLfloat offsetX;
    GLfloat offsetY;
    GLfloat offsetZ;
    GLfloat rotation;
    GLfloat colorR;
    GLfloat colorG;
    GLfloat colorB;

public:
    Plane(GLfloat *, int, GLfloat, GLfloat, GLfloat, GLfloat);
    void setColor(GLfloat, GLfloat, GLfloat);
    void draw();
};

Plane::Plane(GLfloat* points, int len,
             GLfloat offsetX, GLfloat offsetY, GLfloat offsetZ, GLfloat rotation)
{
    this->points   = points;
    this->len      = len;
    this->offsetX  = offsetX;
    this->offsetY  = offsetY;
    this->offsetZ  = offsetZ;
    this->rotation = rotation;

    //Color por default verde
    this->colorR   = 93.0;
    this->colorG   = 113.0;
    this->colorB   = 0.0;
}

void Plane::setColor(GLfloat colorR, GLfloat colorG, GLfloat colorB)
{
    this->colorR = colorR;
    this->colorG = colorG;
    this->colorB = colorB;
}


void Plane::draw()
{
    GLfloat colorM[] = { colorR / 255.0, colorG / 255.0, colorB / 255.0, 0.7 };

    glMaterialfv(GL_FRONT, GL_AMBIENT, colorM);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, colorM);
    glMaterialfv(GL_FRONT, GL_SPECULAR, colorM);
    glMaterialfv(GL_FRONT, GL_SHININESS, colorM);

    glPushMatrix();
        glRotatef(rotation, 1, 0, 0);
        glScalef(1, 1, 1);
        glTranslatef(offsetX, offsetY, offsetZ);

        glMap2f(GL_MAP2_VERTEX_3, 0, 1, 3, len,
                0, 1, len * 3, len, points);
        glEvalMesh2(GL_FILL, 0, 20, 0, 20);
    glPopMatrix();
}
