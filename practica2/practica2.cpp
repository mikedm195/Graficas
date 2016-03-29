#include <stdlib.h>
#include <GL/glut.h>
#include "letras.h"

GLfloat ctrlpoints[6][3] = {
	{ -3.0, -4.0, 0.0}, { 4.0, -3.0, 0.0}, 
	{4.0, 0.0, 0.0}, {-4.0, 0.0, 0.0},
        {-4.0, 3.0, 0.0}, {3.0, 4.0, 0.0}};
GLfloat ctrlpoints2[7][3] = {
	{ 2.0, 1.0, 0.0}, { 2.0, 3.0, 0.0}, 
	{-4.8, 3.0, 0.0}, {-4.8, -4.0, 0.0},
        {2.0, -4.0, 0.0}, {2.0, 8.0, 0.0}, {3.0, -2.0, 0.0}};

void init(void)
{
   glClearColor(0.0, 0.0, 0.0, 0.0);
   glShadeModel(GL_FLAT);
   glEnable(GL_MAP1_VERTEX_3);
}

void display(void)
{
   Letras letras;

   glClear(GL_COLOR_BUFFER_BIT);
   glColor3f(1.0, 1.0, 1.0);

   letras.dibujaD(-4,0);
   letras.dibujaE(-1,0);
   letras.dibujaL(2.5,0);

   letras.dibuja1(-5,4);
   letras.dibuja9(-3,6);
   letras.dibuja9(1,6);
   letras.dibuja5(5,6);

   letras.dibujaM(-7,-5);
   letras.dibujaO(-2,-5);
   letras.dibujaR(2,-3.5);
   letras.dibujaA(4,-5);
   letras.dibujaL(7,-5);
   glFlush();
}

void reshape(int w, int h)
{
   glViewport(0, 0, (GLsizei) w, (GLsizei) h);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   if (w <= h)
      glOrtho(-5.0, 5.0, -5.0*(GLfloat)h/(GLfloat)w, 
               5.0*(GLfloat)h/(GLfloat)w, -5.0, 5.0);
   else
      glOrtho(-5.0*(GLfloat)w/(GLfloat)h, 
               5.0*(GLfloat)w/(GLfloat)h, -5.0, 5.0, -5.0, 5.0);
   glScalef(.5,.5,.5);
   glMatrixMode(GL_MODELVIEW);
   glLoadIdentity();
}

/* ARGSUSED1 */
void keyboard(unsigned char key, int x, int y)
{
   switch (key) {
      case 27:
         exit(0);
         break;
   }
}

int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
   glutInitWindowSize (500, 500);
   glutInitWindowPosition (100, 100);
   glutCreateWindow (argv[0]);
   init ();
   glutDisplayFunc(display);
   glutReshapeFunc(reshape);
   glutKeyboardFunc (keyboard);
   glutMainLoop();
   return 0;
}
