#include <GL/glut.h>
#include <stdlib.h>
#include "planeta.h"

int luna =0;

void init(void) 
{
   GLfloat mat_specular[] = { 1.0, 0.0, 0.0, 1.0 };
   GLfloat mat_ambient[] = {1.0,1.0,0.0,1.0};
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

void sol(){
    GLfloat mat_ambient[] = { .992, .721, .074, 0.0f };
    GLfloat mat_diffuse[] = { 0.0, 0.0, 0.0, 0.0f };
    GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0f };
    GLfloat mat_shininess[] = { 1.0f };

    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);

    glutSolidSphere(69.6, 20, 16);   /* draw sun */ 
}

Planeta mercurio(0.2440*5, -57.91/10,  1408.0, 88,      149,  59,  41);
Planeta venus   (0.6052*5, -108.0/10,  5832.0, 224,     180,  144, 94);
Planeta tierra  (0.6378*5, -150.0/10,  24.0,   365.0,   67,   53,  76);
Planeta marte   (0.3397*5, -228.0/10,  24.0,   686.0,   153,  80,  48);
Planeta jupiter (7.1492*5, -778.0/10,  10.0,   4329.0,  207,  142, 74);
Planeta saturno (6.0268*5,-1429.0/10, 11.0,   10491.0, 247,  190, 87);
Planeta urano   (2.5559*5,-2870.0/10, 17.0,   29911.0, 174,  254, 253);
Planeta neptuno (2.4746*5,-4501.3/10, 16.0,   58664.0, 6,    133, 109);

void display(void)
{
   glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
   glColor3f (1.0, 1.0, 1.0);

   glPushMatrix();
      //sol();
      mercurio.draw();
      venus.draw();
      tierra.draw();
      marte.draw();
      jupiter.draw();
      saturno.draw();
      urano.draw();
      neptuno.draw();

      glPushMatrix();
         glScalef(1.0,1.0,0.1);
         glutSolidTorus(0.1, 0.5, 10, 15);
      glPopMatrix();
      glPushMatrix();
         glTranslatef (0.3, 0.0, 0.0);
         glRotatef ((GLfloat) luna, 0.0, 1.0, 0.0);
         glutSolidSphere(0.03, 10, 8); 
      glPopMatrix();
   glPopMatrix();
   glutSwapBuffers();
}

void reshape (int w, int h)
{
   glViewport (0, 0, (GLsizei) w, (GLsizei) h); 
   glMatrixMode (GL_PROJECTION);
   glLoadIdentity ();
   gluPerspective(60.0, (GLfloat) w/(GLfloat) h, 1.0, 20000.0);
   //glRotatef(30,0,1,0);
   //glTranslatef(0,-200,-10000);
   // glRotatef(-90.0, 0.0, 1.0, 0.0);
   //glTranslatef(0,0,-500);

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
      case 27:
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
