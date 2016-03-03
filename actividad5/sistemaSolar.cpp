/*
 *
 *Miguel Alberto Del Moral González
 *A01015019
 *
 */
#include <GL/glut.h>
#include <stdlib.h>
#include "planeta.h"

int luna =0;

void init(void) 
{
   GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };//Crea luz especular blanca
   GLfloat mat_ambient[] = {1.0,1.0,0.0,1.0};//Crea luz ambiental amarilla
   GLfloat mat_shininess[] = { 1000.0 };
   GLfloat light_position[] = { 0.0, 0.0, 0.0, 1.0 };

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

/*Estos son los valores reales pero para cuestiones de que se vea todo se modificaron
Planeta mercurio(0.2440, -57.91/5,  1408.0, 88,      149,  59,  41);
Planeta venus   (0.6052, -108.0/5,  5832.0, 224,     180,  144, 94);
Planeta tierra  (0.6378, -150.0/5,  24.0,   365.0,   67,   53,  76);
Planeta marte   (0.3397, -228.0/5,  24.0,   686.0,   153,  80,  48);
Planeta jupiter (7.1492, -778.0/5,  10.0,   4329.0,  207,  142, 74);
Planeta saturno (6.0268,-1429.0/5, 11.0,   10491.0, 247,  190, 87);
Planeta urano   (2.5559,-2870.0/5, 17.0,   29911.0, 174,  254, 253);
Planeta neptuno (2.4746,-4501.3/5, 16.0,   58664.0, 6,    133, 109);
*/
Planeta sol     (69.6,      0,        0,      0,       252,  184, 19, -1, 0); 
Planeta mercurio(0.2440*5, -550.91/5, 1408.0, 88,      149,  59,  41, -1, 0);
Planeta venus   (0.6052*5, -650.0/5,  5832.0, 224,     180,  144, 94, -1, 0);
Planeta tierra  (0.6378*5, -720.0/5,  24.0,   365.0,   67,   53,  76, -1, 1);
Planeta marte   (0.3397*5, -800.0/5,  24.0,   686.0,   153,  80,  48, -1, 1);
Planeta jupiter (7.1492*5, -1500.0/5, 10.0,   4329.0,  207,  142, 74, -1, 2);
Planeta saturno (6.0268*5,-2409.0/5,  11.0,   10491.0, 247,  190, 87, 60, 1);
Planeta urano   (2.5559*5,-3270.0/5,  17.0,   29911.0, 174,  254, 253, 0, 1);
Planeta neptuno (2.4746*5,-4501.3/5,  16.0,   58664.0, 6,    133, 109,90, 1);

void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3f (1.0, 1.0, 1.0);

    glPushMatrix();
        //Dibuja todos los planetas
        sol.draw();
        mercurio.draw();
        venus.draw();
        tierra.draw();
        marte.draw();
        jupiter.draw();
        saturno.draw();
        urano.draw();
        neptuno.draw();

    glPopMatrix();
    glutSwapBuffers();
}

void reshape (int w, int h)
{
   glViewport (0, 0, (GLsizei) w, (GLsizei) h); 
   glMatrixMode (GL_PROJECTION);
   glLoadIdentity ();
   gluPerspective(60.0, (GLfloat) w/(GLfloat) h, 1.0, 20000.0);

   glMatrixMode(GL_MODELVIEW);
   glLoadIdentity();
   gluLookAt (0.0, 1000.0, 500.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
}

void simulacion()
{
    glutPostRedisplay();
}

/* ARGSUSED1 */
void keyboard (unsigned char key, int x, int y)
{
   switch (key) {
      case 27://Para salir del sistema solar
         exit(0);
         break;
      default:
         break;
   }
}

int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
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
