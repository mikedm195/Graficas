/*
 * ITESM CSF
 * Miguel Alberto Del Moral González	A01015019
 * Gráficas computacionales
 * 03/02/2016
 * Actividad 3
*/
#include <stdlib.h>
#include <GL/glut.h>

void myinit(void){//Ilumincaion
    GLfloat light_ambient[] = { 0.0, 0.0, 0.0, 1.0 };
    GLfloat light_diffuse[] = { 0.5, 0.5, 0.5, 1.0 };
    GLfloat light_specular[] = { 1.0, 1.0, 1.0, 1.0 };
    GLfloat light_position[] = { 1.0, 1.0, 1.0, 0.0 };

    glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, light_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_specular);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
}

void display(void){//Crea la nave
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	GLfloat mat_ambient[] = { 0.7f, 0.0f, 0.0f, 0.5f };
	GLfloat mat_diffuse[] = { 0.1f, 0.5f, 0.8f, 0.5f };
	GLfloat mat_specular[] = { 0.2f, 0.2f, 0.2f, 0.5f };
	GLfloat mat_shininess[] = { 100.0f };

	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	//glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	
    glPushMatrix ();
      
      glutSolidSphere (0.75, 20, 20);

	  glPushMatrix ();
         glTranslatef (0.0, 0.0, 3.0);
		 glutSolidSphere(.65,8,8);
      glPopMatrix ();

	  glRotatef (20.0, 1.0, 0.0, 0.0);

      glPushMatrix ();
         glRotatef (90.0, 0.0, 1.0, 0.0);
		 glTranslatef (0.0,0.0,0.7);
         glutSolidTorus (0.1,0.3, 15, 15);
      glPopMatrix ();

	  glPushMatrix ();
         glRotatef (90.0, 0.0, 1.0, 0.0);
		 glTranslatef (0.0,0.0,-0.7);
         glutSolidTorus (0.1,0.3, 15, 15);
      glPopMatrix ();

	  glPushMatrix ();
         glTranslatef (2.0,0.0,0.0);
		 glScalef (0.2,2.5,1.0);
         glutSolidIcosahedron ();
      glPopMatrix ();

      glPushMatrix ();
         glTranslatef (2.0, 0.0, 0.0); 
		 glScalef(0.3,1.0,1.0);
         glRotatef (-90.0, 0.0, 1.0, 0.0);
         glutSolidCone (1.0, 2.0, 15, 15);
      glPopMatrix ();

	  glPushMatrix ();
         glTranslatef (1.0,0.0, 0.0); 
		 glScalef (1.5,.4,0.6);
         glutSolidCube (1.0);
      glPopMatrix ();
	
 	  glPushMatrix ();
         glTranslatef (-2.0,0.0,0.0);
		 glScalef (0.2,2.5,1.0);
         glutSolidIcosahedron ();
      glPopMatrix ();

      glPushMatrix ();
         glTranslatef (-2.0, 0.0, 0.0); 
		 glScalef(0.3,1.0,1.0);
         glRotatef (90.0, 0.0, 1.0, 0.0);
         glutSolidCone (1.0, 2.0, 15, 15);
      glPopMatrix ();

	  glPushMatrix ();
         glTranslatef (-1.0,0.0, 0.0); 
		 glScalef (1.5,.4,0.6);
         glutSolidCube (1.0);
      glPopMatrix ();

    glPopMatrix ();
    glFlush();
}

void myReshape(int w, int h){
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if (w <= h) 
	glOrtho (-2.5, 2.5, -2.5*(GLfloat)h/(GLfloat)w, 
	    2.5*(GLfloat)h/(GLfloat)w, -10.0, 10.0);
    else 
	glOrtho (-2.5*(GLfloat)w/(GLfloat)h, 
	    2.5*(GLfloat)w/(GLfloat)h, -2.5, 2.5, -10.0, 10.0);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize (500, 500);
    glutCreateWindow (argv[0]);
    myinit();
    glutReshapeFunc (myReshape);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;           
}
