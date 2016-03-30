/**
 * Integrantes:
 *  Erick Alberto Rivas Redonda A01018087
 *  Miguel Del Moral A01015019
 */

#include <stdlib.h>
#include <GL/glut.h>
#include "Landscape.h"

void initlights(void)
{
    //Inicializar luces
    GLfloat ambient[]       = { 0.4, 0.4, 0.2, 1.0 };
    GLfloat position[]      = { 10.0, -100.0, -10.0, 1.0 };
    GLfloat mat_diffuse[]   = { 0.8, 0.8, 0.6, 1.0 };
    GLfloat mat_specular[]  = { 1.0, 1.0, 1.0, 1.0 };
    GLfloat mat_shininess[] = { 50.0 };

    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);

    glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
    glLightfv(GL_LIGHT0, GL_POSITION, position);

    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //Dibuja el paisaje
    Landscape * landscape = new Landscape;
    landscape->draw();
    glFlush();
}

void init(void)
{
    //Color de fondo azul
    glClearColor(157.0 / 255.0, 198.0 / 255.0, 236.0 / 255.0, 1.0);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_MAP1_VERTEX_3);
    glEnable(GL_MAP2_VERTEX_3);
    glEnable(GL_AUTO_NORMAL);
    glEnable(GL_NORMALIZE);
    glMapGrid2f(20, 0.0, 1.0, 20, 0.0, 1.0);
    initlights();
}

void reshape(int w, int h)
{
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if (w <= h)
        glOrtho(-4.0, 4.0, -4.0 * (GLfloat)h / (GLfloat)w,
                4.0 * (GLfloat)h / (GLfloat)w, -4.0, 4.0);
    else
        glOrtho(-4.0 * (GLfloat)w / (GLfloat)h,
                4.0 * (GLfloat)w / (GLfloat)h, -4.0, 4.0, -4.0, 4.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow(argv[0]);
    init();
    glutReshapeFunc(reshape);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
