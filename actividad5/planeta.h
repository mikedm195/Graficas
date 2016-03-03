/*
 *
 *Miguel Alberto Del Moral González
 *A01015019
 *
 */
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
        int traslacionLuna = 0;
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
    traslacionLuna = 0;
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
    traslacionLuna = 0;
    this->angulo = angulo;
    this->lunas = lunas;
}

void Planeta::draw(){
    GLfloat mat[] = { r, g, b, 0.0f };
    GLfloat mat_shininess[] = { 100.0f };

    glMaterialfv(GL_FRONT, GL_AMBIENT, mat);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);//pone los colores a los planetas
     if(rotacion!=0)
     dia += 1.0 / rotacion * 100.0;//calcula el tiempo de rotacion
     if(traslacion != 0)
     anio += 1.0 / traslacion * 100.0;//calcula el tiempo de rotacion
     glPushMatrix();
        glRotatef ((GLfloat) anio, 0.0, 1.0, 0.0);//rota con respecto al año
        glTranslatef (0.0, 0.0, distancia);//mueve el planeta a su posicion
        glRotatef ((GLfloat) dia, 0.0, 1.0, 0.0);//rota al planeta respecto al dia
        glutSolidSphere(tamano, 20,20);    /* Dibuja un planeta */

        creaLuna();
        if(angulo >=0)
            anillos();
    glPopMatrix();
}

void Planeta::anillos(){//Crea los anillos
    glPushMatrix();
        glRotatef(angulo,1.0,0.0,0.0);
        glScalef(1.0,1.0,0.1);
        glutSolidTorus(tamano+2, tamano+10, 10, 15);
    glPopMatrix();
}

void Planeta::creaLuna(){//crea las lunas    
    int pos = -tamano-10;
    for(int i = 0;i<lunas;i++){
        glPushMatrix();
            Planeta luna(tamano * .25,pos ,24,10,155,155,155,-1,0);
            pos*=-1;
            luna.draw();
        glPopMatrix();
    }
}
