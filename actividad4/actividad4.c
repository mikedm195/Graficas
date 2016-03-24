/*
 * ITESM CSF
 * Miguel Alberto Del Moral González	A01015019
 * Gráficas computacionales
 * 03/02/2016
 * Actividad 3
*/
#include <stdlib.h>
#include <GL/glut.h>

static float posx = 1.0;
static float posy = 1.0;
static float posz = 2.5;
float r = 1.0;
float g = 1.0;
float b = 1.0;


void myinit(void){//Ilumincaion
    GLfloat light_ambient[] = { r, 0, 0, 1.0 };
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

void dibujaNave(){//Crea el circulo principal de la nave
	GLfloat mat_ambient[] = { 0.0f, 0.0f, 0.0f, 0.5f };
	GLfloat mat_diffuse[] = { 1.0f, 1.0f, 1.0f, 1.0f };
	GLfloat mat_specular[] = { 0.2f, 0.2f, 0.2f, 0.5f };
	GLfloat mat_shininess[] = { 100.0f };
	GLfloat no_mat[] = {0.0f,0.0f,0.0f,0.0f};

	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, no_mat);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);


    glutSolidSphere (0.75, 20, 20);
}

void dibujaVentana(){//Crea la ventana
	GLfloat mat_ambient[] = { 0.11f, 0.36f, 0.22f, 0.5f };
	GLfloat mat_diffuse[] = { 0.1f, 0.5f, 0.8f, 0.5f };
	GLfloat mat_specular[] = { 0.2f, 0.2f, 0.2f, 0.5f };
	GLfloat mat_shininess[] = { 10.0f };
	GLfloat no_mat[] = {0.0f,0.0f,0.0f,0.0f};

	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_shininess);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);

	glPushMatrix ();
		glTranslatef (0.0, 0.0, 3.0);
		glutSolidSphere(.65,8,8);
    glPopMatrix ();
}

void dibujaAlas(){//dibuja las alas
	GLfloat mat_ambient[] = { 1.0f, 0.3f, 0.0f };
	GLfloat mat_diffuse[] = { 0.1f, 0.5f, 0.8f, 0.5f };
	GLfloat mat_specular[] = { 0.2f, 0.2f, 0.2f, 0.5f };
	GLfloat mat_shininess[] = { 100.0f };
	GLfloat no_mat[] = {0.0f,0.0f,0.0f,0.0f};

	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, no_mat);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	
	glPushMatrix ();
         glTranslatef (2.0,0.0,0.0);
		 glScalef (0.2,2.5,1.0);
         glutSolidIcosahedron ();
    glPopMatrix ();
	
	glPushMatrix ();
         glTranslatef (-2.0,0.0,0.0);
		 glScalef (0.2,2.5,1.0);
         glutSolidIcosahedron ();
    glPopMatrix ();

}

void dibujaTorus(){//dibuja los torus
	GLfloat mat_ambient[] = { 0.0f, 0.0f, 0.1f, 0.5f };
	GLfloat mat_diffuse[] = { 0.1f, 0.5f, 0.8f, 0.5f };
	GLfloat mat_specular[] = { 0.2f, 0.2f, 0.2f, 0.5f };
	GLfloat mat_shininess[] = { 10.0f };
	GLfloat no_mat[] = {0.0f,0.0f,0.0f,0.0f};

	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, no_mat);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	
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

}

void dibujaCubos(){//Dibuja los cubos
	GLfloat mat_ambient[] = { 0.5f, 0.5f, 0.5f, 0.5f };
	GLfloat mat_diffuse[] = { 0.1f, 0.5f, 0.8f, 0.5f };
	GLfloat mat_specular[] = { 0.2f, 0.2f, 0.2f, 0.5f };
		GLfloat mat_shininess[] = { 10.0f };
	GLfloat no_mat[] = {0.0f,0.0f,0.0f,0.0f};

	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, no_mat);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	
	glRotatef(20,0,0,0);

	glPushMatrix ();
         glTranslatef (1.0,0.0, 0.0); 
		 glScalef (1.5,.4,0.6);
         glutSolidCube (1.0);
    glPopMatrix ();
	
	glPushMatrix ();
         glTranslatef (-1.0,0.0, 0.0); 
		 glScalef (1.5,.4,0.6);
         glutSolidCube (1.0);
    glPopMatrix ();

}

void dibujaConos(){//Dibuja los conos
	GLfloat mat_ambient[] = { 0.7f, 0.0f, 0.0f, 0.5f };
	GLfloat mat_diffuse[] = { 0.1f, 0.5f, 0.8f, 0.5f };
	GLfloat mat_specular[] = { 0.2f, 0.2f, 0.2f, 0.5f };
	GLfloat mat_shininess[] = { 100.0f };
	GLfloat no_mat[] = {0.0f,0.0f,0.0f,0.0f};

	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
	glMaterialfv(GL_FRONT, GL_SPECULAR, no_mat);
	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
	
	glPushMatrix ();
         glTranslatef (2.0, 0.0, 0.0); 
		 glScalef(0.3,1.0,1.0);
         glRotatef (-90.0, 0.0, 1.0, 0.0);
         glutSolidCone (1.0, 2.0, 15, 15);
    glPopMatrix ();
	
    glPushMatrix ();
         glTranslatef (-2.0, 0.0, 0.0); 
		 glScalef(0.3,1.0,1.0);
         glRotatef (90.0, 0.0, 1.0, 0.0);
         glutSolidCone (1.0, 2.0, 15, 15);
    glPopMatrix ();

}

void display(void){//Crea la nave

	GLfloat position[] = { posx, posy, posz, 0.0 };
	GLfloat colors[] ={0,0,0};

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);		
	myinit();
    glPushMatrix ();
     
	  glPushMatrix ();
	    glTranslated (posx, posy, posz);
		glLightfv (GL_LIGHT0, GL_AMBIENT, colors);
		glLightfv (GL_LIGHT0, GL_POSITION, position);

    	glDisable (GL_LIGHTING);
	    glColor3f (0.0, 1.0, 1.0);
        glutWireCube (0.1);
        glEnable (GL_LIGHTING);
      glPopMatrix ();

	  dibujaNave();
		
	  dibujaVentana();
	  
	  dibujaAlas();

	  dibujaTorus();

	  dibujaConos();

	  dibujaCubos();
	  
    glPopMatrix ();
    glFlush();
}

void myReshape(int w, int h){
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
	glOrtho (-2.5, 2.5, -2.5*(GLfloat)h/(GLfloat)w,2.5*(GLfloat)h/(GLfloat)w, -10.0, 10.0);
    glMatrixMode(GL_MODELVIEW);
}

void keyboard(unsigned char key, int x, int y){
	switch(key){
		case 27:
			exit(0);
		break;
		case 'a':
			posx--;
			glutPostRedisplay();
		break;
		case 'd':
			posx++;
			glutPostRedisplay();
		break;
		case 'w':
			posy++;
			glutPostRedisplay();
		break;
		case 's':
			posy--;
			glutPostRedisplay();
		break;
		case 'q':
			posz--;
			glutPostRedisplay();
		break;
		case 'e':
			posz++;
			glutPostRedisplay();
		break;
		case 'c':
			if(r == 1.0){
				r = 0.0;
			}else{
				r = 1.0;
			}
			myinit();
			glutPostRedisplay();
		break;

	}
}

int main(int argc, char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize (500, 500);
    glutCreateWindow (argv[0]);
    myinit();
    glutReshapeFunc (myReshape);
    glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;           
}
