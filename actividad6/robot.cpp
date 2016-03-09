/*
 *
 *Miguel Alberto Del Moral González
 *A01015019
 *
 */
#include <GL/glut.h>
#include <stdlib.h>
#include "extremidad.h"

static int shoulder = 0, elbow = 0, muneca = 0, dedos = 0;

Extremidad brazoIzq( 2.8, .4,1, 0.0, 1.75, 2.5, 127.0, 255.0, 127.0);
Extremidad brazoDer( 2.8, .4,1, 0.0, 1.75,-2.5, 127.0, 255.0, 127.0);

Extremidad anteBrazoIzq(3.1, 0.4, 1, 1.75, 2.6, 0.0, 227.0, 164.0, 121.0);
Extremidad anteBrazoDer(3.1, 0.4, 1, 1.75, 2.6, 0.0, 227.0, 164.0, 121.0);

Extremidad manoIzq(1.2, 0.4, 1, 2.6, .7, 0.0, 90.0, 90.0, 90.0);
Extremidad manoDer(1.2, 0.4, 1, 2.6, .7, 0.0, 90.0, 90.0, 90.0);

Extremidad piernaIzq( 2.8, .4,1, 0.0, 1.75, 1.5, 0.0, 0.0, 255.0);
Extremidad piernaDer( 2.8, .4,1, 0.0, 1.75,-1.5, 0.0, 0.0, 255.0);

Extremidad pierna2Izq(3.1, 0.4, 1, 1.75, 2.6, 0.0, 1.0, 9.0, 45.0);
Extremidad pierna2Der(3.1, 0.4, 1, 1.75, 2.6, 0.0, 1.0, 9.0, 45.0);

Extremidad tobilloIzq(1.2, 0.4, 1, 2.6, .7, 0.0, 45.0, 45.0, 45.0);
Extremidad tobilloDer(1.2, 0.4, 1, 2.6, .7, 0.0, 45.0, 45.0, 45.0);

Extremidad cuello(0.6, 0.4, 0.5, 0.0, .6, 0.0, 148.0, 103.0, 81.0);
Extremidad cabeza(1.5, 0.4, 1.5, 1.1, .7, 0.0, 247.0, 184.0, 141.0);

//inicializa la iluminacion
void init(void) 
{
   GLfloat mat_specular[] = { 0.6, 0.6, 0.6, 1.0 };
   GLfloat mat_ambient[] = {1.0,1.0,1.0,1.0};
   GLfloat mat_shininess[] = { 0.0 };
   GLfloat light_position[] = { 0.0, 5.0, 5.0, 1.0 };

   glClearColor (0.0, 0.0, 0.0, 1.0);
   glShadeModel (GL_SMOOTH);

   glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
   glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
   glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
   glLightfv(GL_LIGHT0, GL_POSITION, light_position);

   glEnable(GL_LIGHTING);
   glEnable(GL_LIGHT0);
   glEnable(GL_DEPTH_TEST);

}

//Dibuja los dos brazos
void dibujaBrazo()
{
    glPushMatrix();
        brazoIzq.dibujar();
        anteBrazoIzq.dibujar();
        manoIzq.dibujar();
    glPopMatrix();
    
    glPushMatrix();
        brazoDer.dibujar();
        anteBrazoDer.dibujar();
        manoDer.dibujar();
    glPopMatrix();

}

//Dibuja las piernas
void dibujaPierna()
{
    glPushMatrix();
        piernaIzq.dibujar();
        pierna2Izq.dibujar();
        tobilloIzq.dibujar();
    glPopMatrix();
    glPushMatrix();
        piernaDer.dibujar();
        pierna2Der.dibujar();
        tobilloDer.dibujar();
    glPopMatrix();

}

//Dibuja cuallo y cabeza
void dibujaCabeza(){
    glPushMatrix();
        cuello.dibujar();
        cabeza.dibujar();
    glPopMatrix();
}

//Se dibuja todo aqui
void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        
        Extremidad cuerpo(1.2,5.0,3,-3.5,0.0,0,255,0,0);
        glPushMatrix();
            cuerpo.dibujar();
        glPopMatrix();    
        
        glTranslatef(-3.5,2.0,0.0);
        
        dibujaBrazo();

        glPushMatrix();
            glTranslatef(0.0,-6.0,0);
            glRotatef(-90,0,0,1);
            dibujaPierna();
        glPopMatrix();

        glPushMatrix();
            glTranslatef(0.0, 2.5,0);
            glRotatef( 90,0,0,1);
            dibujaCabeza();
        glPopMatrix();

    glPopMatrix();
    glutSwapBuffers();
}

void reshape (int w, int h)
{
   glViewport (0, 0, (GLsizei) w, (GLsizei) h); 
   glMatrixMode (GL_PROJECTION);
   glLoadIdentity ();
   gluPerspective(65.0, (GLfloat) w/(GLfloat) h, 1.0, 200.0);
   
   glMatrixMode(GL_MODELVIEW);
   glLoadIdentity();
   glTranslatef (0.0, 0.0, -25.0);
   glRotatef (-35.0, 0.0, 1.0, 0.0);
}

void rotarCabeza(unsigned char key){
    switch(key){    
        //Cabeza y cuello
        case 't':
            cuello.rotar(5);
            glutPostRedisplay();
        break;
        case 'T':
            cuello.rotar(-5);
            glutPostRedisplay();
        break;
        case 'y':
            cuello.torcionar(5);
            glutPostRedisplay();
        break;
        case 'Y':
            cuello.torcionar(-5);
            glutPostRedisplay();
        break;
    }
}

void rotarBrazos(unsigned char key){
    switch(key){    
        //brazo Izquierdo
        case 'q':
            brazoIzq.rotar(5);
            glutPostRedisplay();
        break;
        case 'Q':
            brazoIzq.rotar(-5);
            glutPostRedisplay();
        break;
        case 'w':
            brazoIzq.revolucionar(5);
            glutPostRedisplay();
        break;
        case 'W':
            brazoIzq.revolucionar(-5);
            glutPostRedisplay();
        break;
        //Brazo Derecho
        case 'p':
            brazoDer.rotar(5);
            glutPostRedisplay();
        break;
        case 'P':
            brazoDer.rotar(-5);
            glutPostRedisplay();
        break;
        case 'o':
            brazoDer.revolucionar(5);
            glutPostRedisplay();
        break;
        case 'O':
            brazoDer.revolucionar(-5);
            glutPostRedisplay();
        break;
    }
}
void rotarAnteBrazos(unsigned char key){
    switch(key){
        //Antebrazo Izquierdo
        case 'e':
            anteBrazoIzq.rotar(5);
            glutPostRedisplay();
        break;
        case 'E':
            anteBrazoIzq.rotar(-5);
            glutPostRedisplay();
        break;
        case 'r':
            anteBrazoIzq.torcionar(5);
            glutPostRedisplay();
        break;
        case 'R':
            anteBrazoIzq.torcionar(-5);
            glutPostRedisplay();
        break;
        //Antebrazo Derecho
        case 'i':
            anteBrazoDer.rotar(5);
            glutPostRedisplay();
        break;
        case 'I':
            anteBrazoDer.rotar(-5);
            glutPostRedisplay();
        break;
        case 'u':
            anteBrazoDer.torcionar(5);
            glutPostRedisplay();
        break;
        case 'U':
            anteBrazoDer.torcionar(-5);
            glutPostRedisplay();
        break;

    }
}
void rotarManos(unsigned char key){
    switch(key){
        //Mano Izquierda
        case 'a':
            manoIzq.rotar(5);
            glutPostRedisplay();
        break;
        case 'A':
            manoIzq.rotar(-5);
        glutPostRedisplay();
        break;
        case 's':
            manoIzq.revolucionar(5);
            glutPostRedisplay();
        break;
        case 'S':
            manoIzq.revolucionar(-5);
        glutPostRedisplay();
        break;
        //Mano Derecha
        case 'l':
            manoDer.rotar(5);
            glutPostRedisplay();
        break;
        case 'L':
            manoDer.rotar(-5);
        glutPostRedisplay();
        break;
        case 'k':
            manoDer.revolucionar(5);
            glutPostRedisplay();
        break;
        case 'K':
            manoDer.revolucionar(-5);
        glutPostRedisplay();
        break;

    }
}

void rotarPiernas(unsigned char key){
    switch(key){
        //Pierna Izquierda
        case 'd':
            piernaIzq.rotar(5);
            glutPostRedisplay();
        break;
        case 'D':
            piernaIzq.rotar(-5);
        glutPostRedisplay();
        break;
        case 'f':
            piernaIzq.revolucionar(5);
            glutPostRedisplay();
        break;
        case 'F':
            piernaIzq.revolucionar(-5);
        glutPostRedisplay();
        break;

        //Pierna Derecha
        case 'j':
            piernaDer.rotar(5);
            glutPostRedisplay();
        break;
        case 'J':
            piernaDer.rotar(-5);
        glutPostRedisplay();
        break;
        case 'h':
            piernaDer.revolucionar(5);
            glutPostRedisplay();
        break;
        case 'H':
            piernaDer.revolucionar(-5);
        glutPostRedisplay();
        break;
    }
}

void rotarPiernas2(unsigned char key){
    switch(key){
        //Pierna2 Izquierda
        case 'z':
            pierna2Izq.rotar(5);
            glutPostRedisplay();
        break;
        case 'Z':
            pierna2Izq.rotar(-5);
        glutPostRedisplay();
        break;
        //Pierna2 Derecha
        case 'm':
            pierna2Der.rotar(5);
            glutPostRedisplay();
        break;
        case 'M':
            pierna2Der.rotar(-5);
        glutPostRedisplay();
        break;
    }
}

void rotarTobillos(unsigned char key){
    switch(key){
        //Tobillo Izquierdo
        case 'x':
            tobilloIzq.rotar(5);
            glutPostRedisplay();
        break;
        case 'X':
            tobilloIzq.rotar(-5);
        glutPostRedisplay();
        break;
        //Tobillo Derecha
        case 'n':
            tobilloDer.rotar(5);
            glutPostRedisplay();
        break;
        case 'N':
            tobilloDer.rotar(-5);
        glutPostRedisplay();
        break;
    }
}

void keyboard (unsigned char key, int x, int y)
{
    rotarBrazos(key);
    rotarAnteBrazos(key);
    rotarManos(key);
    rotarPiernas(key);
    rotarPiernas2(key);
    rotarTobillos(key);
    rotarCabeza(key);
    switch (key) {
        case 27:
            exit(0);
        break;
        default:
        break;
   }
}

void simulacion()
{
    glutPostRedisplay();
}

int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH );
   glutInitWindowSize (500, 500); 
   glutInitWindowPosition (100, 100);
   glutCreateWindow (argv[0]);
   init ();
   glutDisplayFunc(display); 
   glutReshapeFunc(reshape);
   glutKeyboardFunc(keyboard);
   glutIdleFunc(simulacion);
   glutMainLoop();
   return 0;
}
