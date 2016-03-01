#pragma once 

#include <GL/glut.h>
#include <stdlib.h>

class Planeta{
    private:
        double tamano;
        double distancia;
        double rotacion;
        double traslacion;
        double r;
        double g;
        double b;
        double dia;
        double anio;
        double angulo;
        int lunas;
        void anillos();
        void creaLuna();
    public:
        //void creaPlaneta();
        Planeta();
        Planeta(double tamano,double distancia,double rotacion,double traslacion,double r,double g,double b,double angulo,int lunas);
        void draw();
        
};

Planeta::Planeta(){
    tamano = 0;
    distancia = 0;
    rotacion = 0;
    traslacion = 0;
    r = 0;
    g = 0;
    b = 0;
    dia = 0;
    anio = 0;
    angulo = -1;
    lunas = 0;
}

Planeta::Planeta(double tamano,double distancia,double rotacion,double traslacion,double r,double g,double b,double angulo, int lunas){
    this->tamano = tamano;
    this->distancia = distancia;
    this->rotacion = rotacion;
    this->traslacion = traslacion;
    this->r = r/255;
    this->g = g/255;
    this->b = b/255;
    dia = 0;
    anio = 0;
    this->angulo = angulo;
    this->lunas = lunas;
}

void Planeta::draw(){
    GLfloat mat_ambient[] = { r, g, b, 0.0f };
    GLfloat mat_diffuse[] = { r, g, b, 0.0f };
    GLfloat mat_specular[] = { r, g, b, 0.0f };
    GLfloat mat_shininess[] = { 100.0f };

    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);

     dia += 1.0 / rotacion * 100.0;
     anio += 1.0 / traslacion * 100.0;
     glPushMatrix();
        glRotatef ((GLfloat) anio, 0.0, 1.0, 0.0);
        glTranslatef (0.0, 0.0, distancia);
        glRotatef ((GLfloat) dia, 0.0, 1.0, 0.0);
        glutSolidSphere(tamano, 10, 8);    /* draw smaller planet */
        creaLuna();
        if(angulo >=0)
            anillos();
    glPopMatrix();
   
}

void Planeta::anillos(){
    glPushMatrix();
        glScalef(1.0,1.0,0.1);
        glutSolidTorus(tamano+2, tamano+10, 10, 15);
    glPopMatrix();
}

void Planeta::creaLuna(){

    for(int i = 0;i<lunas;i++){
        glPushMatrix();
            glTranslatef (tamano+10, 0.0, 0.0);
            glRotatef ((GLfloat) dia, 0.0, 1.0, 0.0);
            glutSolidSphere(10.03, 10, 8); 
        glPopMatrix();
    }
}
