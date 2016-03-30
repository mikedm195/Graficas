#pragma once
#include <stdlib.h>
#include <GL/glut.h>

//Clase encargada de dibujar una letra
class Letter
{
private:
    GLfloat * points;
    int     lenP;
    GLfloat offsetX;
    GLfloat offsetY;
    GLfloat offsetZ;

public:
    Letter(GLfloat *, int, GLfloat, GLfloat, GLfloat);
    void draw(double x, double y);
};

Letter::Letter(GLfloat* points, int lenP,
               GLfloat offsetX, GLfloat offsetY, GLfloat offsetZ)
{
    this->points  = points;
    this->lenP    = lenP;
    this->offsetX = offsetX;
    this->offsetY = offsetY;
    this->offsetZ = offsetZ;
}


void Letter::draw(double x, double y)
{
    GLfloat mat[]           = { 255.0 / 255, 160.0 / 255.0, 0 / 255, 1.0f };
    GLfloat mat_shininess[] = { 0.0f };

    glMaterialfv(GL_FRONT, GL_AMBIENT, mat);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess); //color

    glPushMatrix();
        glScalef(.125, .125, .125);
        glColor3f(1.0,0.0,1.0);
        glTranslatef(x, y, 0);

        //Dibuja la letra 15 veces conjuntamente para aumentar el ancho
        for (int it = 0; it < 15; ++it){
            glTranslatef(0.05, 0.05, 0.05);
            glMap1f(GL_MAP1_VERTEX_3, 0.0, 1.0, 3, lenP, points);
            glBegin(GL_LINE_STRIP);
            for (int i = 0; i <= 28; i++)
                glEvalCoord1f((GLfloat)i / 28.0);
            glEnd();
        }

    glPopMatrix();
}
