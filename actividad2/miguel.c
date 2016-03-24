/**
* Actividad evaluativa 2:
* Integrantes:
* - Miguel Alberto Del Moral Gonzáles (A01015019)
* - Erick Alberto Rivas Redonda (A01018087)
*/

#include <GL/glut.h>
#include <stdlib.h>

/**
* Dibuja una linea utilizando de parametros un par de coordenadas
* (xi,xf),(yi,yf)
*/

void dibujarLinea(float xi,float xf, float yi,float yf){
  glVertex2f( xi, yi);
  glVertex2f( xf, yf);
}

/**
* Dibuja una M
*/

void M(int x, int y){
  glPushMatrix();
     glTranslatef(x, y, 0.0 );
     glBegin(GL_LINES);
        dibujarLinea(0.0, 0.0, 0.0, -100);
        dibujarLinea(0.0, 50.0, 0.0, -30.0);
        dibujarLinea(50.0, 100.0, -30.0, 0.0);
        dibujarLinea(100.0, 100.0, 0.0, -100.0);
     glEnd();
  glPopMatrix();
}

/**
* Dibuja una I
*/

void I(int x, int y){
  glPushMatrix();
     glTranslatef(x, y, 0.0 );
     glBegin(GL_LINES);
        dibujarLinea(50.0, 50.0, 0.0, -100.0);
     glEnd();
  glPopMatrix();
}

/**
* Dibuja una G
*/

void G(int x, int y){
  glPushMatrix();
     glTranslatef(x, y, 0.0 );
     glBegin(GL_LINES);
        dibujarLinea(100.0, 0.0, 0.0, 0.0);
        dibujarLinea(0.0, 0.0, 0.0, -100.0);
        dibujarLinea(0.0, 100.0, -100.0, -100.0);
        dibujarLinea(100.0, 100.0, -100.0, -50.0);
        dibujarLinea(100.0, 50.0, -50.0, -50.0);
     glEnd();
  glPopMatrix();
}

/**
* Dibuja una U
*/

void U(int x, int y){
  glPushMatrix();
     glTranslatef(x, y, 0.0 );
     glBegin(GL_LINES);
        dibujarLinea(0.0, 0.0, 0.0, -100.0);
        dibujarLinea(0.0, 100.0, -100.0, -100.0);
        dibujarLinea(100.0, 100.0, -100.0, 0.0);
     glEnd();
  glPopMatrix();
}

/**
* Dibuja una E
*/

void E(int x, int y){
  glPushMatrix();
     glTranslatef(x, y, 0.0 );
     glBegin(GL_LINES);
        dibujarLinea(0.0, 100.0, 0.0, 0.0);
        dibujarLinea(0.0, 0.0, 0.0, -100.0);
        dibujarLinea(0.0, 100.0, -100.0, -100.0);
        dibujarLinea(0.0, 50.0, -50.0, -50.0);
     glEnd();
  glPopMatrix();
}
void L(int x, int y){
  glPushMatrix();
     glTranslatef(x, y, 0.0 );
     glBegin(GL_LINES);
        dibujarLinea(0.0, 0.0, 0.0, -100.0);
        dibujarLinea(0.0, 100.0, -100.0, -100.0);
     glEnd();
  glPopMatrix();
}

/**
* Dibuja una D
*/

void D(int x, int y){
  glPushMatrix();
     glTranslatef(x, y, 0.0 );
     glBegin(GL_LINES);
        dibujarLinea(0.0, 0.0, 0.0, -100.0);
        dibujarLinea(0.0, 100.0, 0.0, -50.0);
        dibujarLinea(0.0, 100.0, -100.0, -50.0);
     glEnd();
  glPopMatrix();
}

/**
* Dibuja una O
*/

void O(int x, int y){
  glPushMatrix();
     glTranslatef(x, y, 0.0 );
     glBegin(GL_LINES);
        dibujarLinea(0.0, 0.0, 0.0, -100.0);
        dibujarLinea(0.0, 100.0, -100.0, -100.0);
        dibujarLinea(100.0, 100.0, -100.0, 0.0);
        dibujarLinea(0.0, 100.0, 0.0, 0.0);
     glEnd();
  glPopMatrix();
}

/**
* Dibuja una Z
*/

void Z(int x, int y){
  glPushMatrix();
     glTranslatef(x, y, 0.0 );
     glBegin(GL_LINES);
        dibujarLinea(0.0, 100.0, -100.0, -100.0);
        dibujarLinea(0.0, 100.0, 0.0, 0.0);
        dibujarLinea(100.0, 0.0, 0.0, -100.0);
     glEnd();
  glPopMatrix();
}
/**
* Dibuja una C
*/

void C(int x, int y){
  glPushMatrix();
     glTranslatef(x, y, 0.0 );
     glBegin(GL_LINES);
        dibujarLinea(0.0, 0.0, 0.0, -100.0);
        dibujarLinea(0.0, 100.0, -100.0, -100.0);
        dibujarLinea(0.0, 100.0, 0.0, 0.0);
     glEnd();
  glPopMatrix();
}

/**
* Dibuja una R
*/

void R(int x, int y){
  glPushMatrix();
     glTranslatef(x, y, 0.0 );
     glBegin(GL_LINES);
        dibujarLinea(0.0, 0.0, 0.0, -100.0);
        dibujarLinea(0.0, 100.0, 0.0, 0.0);
        dibujarLinea(100.0, 100.0, 0.0, -50.0);
        dibujarLinea(0.0, 100.0, -50.0, -50.0);
        dibujarLinea(50.0, 100.0, -50.0, -100.0);
     glEnd();
  glPopMatrix();
}

/**
* Dibuja una A
*/

void A(int x, int y){
  glPushMatrix();
     glTranslatef(x, y, 0.0 );
     glBegin(GL_LINES);
        dibujarLinea(0.0, 50.0, -100.0, 0.0);
        dibujarLinea(100.0, 50.0, -100.0, 0.0);
        dibujarLinea(25.0, 75.0, -50.0, -50.0);
     glEnd();
  glPopMatrix();
}

/**
* Dibuja una N
*/

void N(int x, int y){
  glPushMatrix();
     glTranslatef(x, y, 0.0 );
     glBegin(GL_LINES);
        dibujarLinea(0.0, 0.0, 0.0, -100.0);
        dibujarLinea(100.0, 100.0, 0.0, -100.0);
        dibujarLinea(0.0, 100.0, 00.0, -100.0);
     glEnd();
  glPopMatrix();
}

/**
* Dibuja una K
*/

void K(int x, int y){
  glPushMatrix();
     glTranslatef(x, y, 0.0 );
     glBegin(GL_LINES);
        dibujarLinea(0.0, 0.0, 0.0, -100.0);
        dibujarLinea(0.0, 100.0, -50.0, 0.0);
        dibujarLinea(0.0, 100.0, -50.0, -100.0);
     glEnd();
  glPopMatrix();
}

/**
* Dibuja una S
*/

void S(int x, int y){
  glPushMatrix();
     glTranslatef(x, y, 0.0 );
     glBegin(GL_LINES);
        dibujarLinea(0.0, 100.0, 0.0, 0.0);
        dibujarLinea(0.0, 100.0, -50.0, -50.0);
        dibujarLinea(0.0, 100.0, -100.0, -100.0);
        dibujarLinea(0.0, 0.0, 0.0, -50.0);
        dibujarLinea(100.0, 100.0, -50.0, -100.0);
     glEnd();
  glPopMatrix();
}

/**
* Dibuja una V
*/

void V(int x, int y){
  glPushMatrix();
     glTranslatef(x, y, 0.0 );
     glBegin(GL_LINES);
        dibujarLinea(0.0, 50.0, 0.0, -100.0);
        dibujarLinea(50.0, 100.0, -100.0, 0.0);
     glEnd();
  glPopMatrix();
}


/**
* Dibuja el nombre
*/

void display(void)
{
  //Reinicia el lienzo
   glClear(GL_COLOR_BUFFER_BIT);


   //Dibuja el nombre con las coordenadas adecuadas

   glColor3f(0.0, 0.0, 0.0);   M(-490,155);
   glColor3f(0.2, 0.0, 0.0);   I(-380,155);
   glColor3f(0.4, 0.0, 0.0);   G(-270,155);
   glColor3f(0.6, 0.0, 0.0);   U(-160,155);
   glColor3f(0.8, 0.0, 0.0);   E(-50,155);
   glColor3f(1.0, 0.0, 0.0);   L(60,155);

   glColor3f(.01, 0.0, 0.0);   D(-490,30);
   glColor3f(0.0, 0.125, 0.0); E(-380,30);
   glColor3f(0.0, 0.25, 0.0);  L(-270,30);

   glColor3f(0.0, 0.5, 0.0);   M(-50,30);
   glColor3f(0.0, 0.625, 0.0); O(60,30);
   glColor3f(0.0, 0.75, 0.0);  R(170,30);
   glColor3f(0.0, 0.875, 0.0); A(280,30);
   glColor3f(0.0, 1.0, 0.0);   L(390,30);

   glColor3f(.02, 0.0, 0.0);   G(-490,-95);
   glColor3f(0.0, 0.0, .14);   O(-380,-96);
   glColor3f(0.0, 0.0, .29);   N(-270,-96);
   glColor3f(0.0, 0.0, .43);   Z(-160,-96);
   glColor3f(0.0, 0.0, .57);   A(-50,-96);
   glColor3f(0.0, 0.0, .71);   L(60,-96);
   glColor3f(0.0, 0.0, .86);   E(170,-96);
   glColor3f(0.0, 0.0, 1.0);   Z(280,-96);

   glutSwapBuffers();
}


/**
* Metodos de inicialización de open GL
*/

void init(void)
{
   glClearColor (0.5, 0.5, 0.5, 0.0);
   glShadeModel (GL_FLAT);
}

void reshape(int w, int h)
{
   glViewport (0, 0, (GLsizei) w, (GLsizei) h);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   glOrtho(-500.0, 500.0, -200.0, 200.0, -100.0, 100.0);
   glMatrixMode(GL_MODELVIEW);
   glLoadIdentity();
}

int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
   glutInitWindowSize (1000, 400);
   glutInitWindowPosition (0, 0);
   glutCreateWindow (" Titulo de la ventana");
   init ();
   glutDisplayFunc(display);
   glutReshapeFunc(reshape);
   glutMainLoop();
   return 0;
}
