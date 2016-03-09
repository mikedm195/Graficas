/*
 *  
 * Miguel Alberto Del Moral González
 * A01015019
 *     
 */
#pragma once 

#include <GL/glut.h>
#include <stdlib.h>

class Extremidad{

    private:
        int rotacion;
        int revolucion;
        int torcion;
        double sx,sy,sz;//Scale in x,y,z
        double t1,t2,tz;//Primera y segunda traslacion en x y traslacion en z
        double r,g,b;//Para el color
    public:
        Extremidad();
        Extremidad(double sx,double sy,double sz,double t1, double t2, double tz,double r,double g, double b);
        void dibujar();//Dibuja la extremidad
        void rotar(int r);//Rota la extremidad
        void revolucionar(int r);//Revoluciona la extremidad
        void torcionar(int r);//Torciona la extremidad

};
Extremidad::Extremidad(){
    
}
Extremidad::Extremidad(double sx,double sy, double sz, double t1, double t2, double tz,double r,double g, double b){
    rotacion = 0;
    revolucion = 0;
    torcion = 0;
    this->sx = sx;
    this->sy = sy;
    this->sz = sz;
    this->t1 = t1;
    this->t2 = t2;
    this->tz = tz;
    this->r = r/255.0;
    this->g = g/255.0;
    this->b = b/255.0;
}

void Extremidad::dibujar(){
    
    GLfloat mat[] = { r, g, b, 1.0f };
    GLfloat mat_shininess[] = { 0.0f };

    glMaterialfv(GL_FRONT, GL_AMBIENT, mat);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);//color

    glTranslatef (t1, 0.0, tz);//traslada la extremidad
    //Las siguientes 3 lineas rotan la extremidad
    glRotatef ((GLfloat) rotacion, 0.0, 0.0, 1.0);
    glRotatef ((GLfloat) revolucion, 0.0, 1.0, 0.0);
    glRotatef ((GLfloat) torcion, 1.0, 0.0, 0.0);
    glTranslatef (t2, 0.0, 0.0);//Vuelve a trasladar la extremidad
    
    glPushMatrix(); 
        glScalef (sx, sy, sz);//Escala la extremidad
        glutSolidSphere (1.0,10,10);//Dibuja
    glPopMatrix();
}

void Extremidad::rotar(int r){
    rotacion = (rotacion + r) %360;
}

void Extremidad::revolucionar(int r){
    revolucion = (revolucion + r) %360;
}

void Extremidad::torcionar(int r){
    torcion = (torcion + r) %360;
}

