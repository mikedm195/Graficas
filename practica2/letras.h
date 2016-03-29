#pragma once

#include <GL/glut.h>
#include <stdlib.h>

class Letras{
    public:
    Letras();
    void dibujaD(double x, double y);
    void dibujaE(double x, double y);
    void dibujaL(double x, double y);
    void dibujaM(double x, double y);
    void dibujaO(double x, double y);
    void dibujaR(double x, double y);
    void dibujaA(double x, double y);
    void dibuja1(double x, double y);
    void dibuja9(double x, double y);
    void dibuja5(double x, double y);
};

Letras::Letras(){}

void Letras::dibujaD(double x, double y){
  GLfloat ctrlpoints2[7][3] = {
      { 2.0, -1.0, 0.0}, { 2.0, -3.0, 0.0}, 
      {-4.8, -3.0, 0.0}, {-4.8, 4.0, 0.0},
      {2.0, 4.0, 0.0}, {2.0, -8.0, 0.0}, {3.0, 5.0, 0.0}};
  int i;
  glPushMatrix();
    glMap1f(GL_MAP1_VERTEX_3, 0.0, 1.0, 3, 7, &ctrlpoints2[0][0]);
    glTranslatef(x, y, 0.0);
    glScalef(0.5, 0.5, 0.5);
    glBegin(GL_LINE_STRIP);
      for (i = 0; i <= 28; i++) 
         glEvalCoord1f((GLfloat) i/28.0);
    glEnd();
  glPopMatrix();

}
void Letras::dibujaE(double x, double y){
  GLfloat ctrlpoints2[8][3] = {
      { -2.0, 1.0, 0.0}, { -2.0, 3.0, 0.0}, 
      { 4.8, 3.0, 0.0}, { 4.8, -4.0, 0.0},
      {-2.0, -4.0, 0.0}, { -2.0, 8.0, 0.0}, { -3.0, -2.0, 0.0}, {3.0, -2.0, 0.0}};
  int i;
  glPushMatrix();
    glMap1f(GL_MAP1_VERTEX_3, 0.0, 1.0, 3, 8, &ctrlpoints2[0][0]);
    glTranslatef(x, y, 0.0);
    glScalef(0.5, 0.5, 0.5);
    glBegin(GL_LINE_STRIP);
      for (i = 0; i <= 28; i++) 
         glEvalCoord1f((GLfloat) i/28.0);
    glEnd();
  glPopMatrix();

}
void Letras::dibujaL(double x, double y){
  GLfloat ctrlpoints2[2][3] = {
      {0.0, 30.0, 0.0}, {0.0, -4.0, 0.0}};
  int i;
  glPushMatrix();
    glMap1f(GL_MAP1_VERTEX_3, 0.0, 1.0, 3, 2, &ctrlpoints2[0][0]);
    glTranslatef(x, y, 0.0);
    glScalef(0.1, 0.1, 0.1);
    glBegin(GL_LINE_STRIP);
      for (i = 0; i <= 28; i++) 
         glEvalCoord1f((GLfloat) i/28.0);
    glEnd();
  glPopMatrix();

}
void Letras::dibujaM(double x, double y){
  GLfloat ctrlpoints2[7][3] = {
      {-4.8, 0.0,  0.0}, {-4.8, 5.0, 0.0}, 
      { 0.0, 5.0, 0.0}, { 0.0, -5.0, 0.0},
      {0.0,  5.0, 0.0}, {4.8, 5.0, 0.0}, {4.8, 0.0, 0.0}};
  int i;
  glPushMatrix();
    glMap1f(GL_MAP1_VERTEX_3, 0.0, 1.0, 3, 7, &ctrlpoints2[0][0]);
    glTranslatef(x, y, 0.0);
    glScalef(0.5, 0.5, 0.5);
    glBegin(GL_LINE_STRIP);
      for (i = 0; i <= 28; i++) 
         glEvalCoord1f((GLfloat) i/28.0);
    glEnd();
  glPopMatrix();

}
void Letras::dibujaO(double x, double y){
  GLfloat ctrlpoints2[5][3] = {
      {-4.8, 0.0,  0.0}, { 0.0,-4.8, 0.0}, 
      { 4.8, 0.0, 0.0}, { 0.0,  4.8, 0.0},
      {-4.8, 0.0, 0.0}};
 int i;
  glPushMatrix();
    glMap1f(GL_MAP1_VERTEX_3, 0.0, 1.0, 3, 5, &ctrlpoints2[0][0]);
    glTranslatef(x, y, 0.0);
    glScalef(0.5, 0.5, 0.5);
    glBegin(GL_LINE_STRIP);
      for (i = 0; i <= 28; i++) 
         glEvalCoord1f((GLfloat) i/28.0);
    glEnd();
  glPopMatrix();

}
void Letras::dibujaR(double x, double y){
  GLfloat ctrlpoints2[3][3] = {
      {-4.8, -4.8,  0.0}, {-4.8, 0.0, 0.0}, 
      { 0.0, 0.0, 0.0}};//, { 2.0, 0.0, 0.0}};
  int i;
  glPushMatrix();
    glMap1f(GL_MAP1_VERTEX_3, 0.0, 1.0, 3, 3, &ctrlpoints2[0][0]);
    glTranslatef(x, y, 0.0);
    glScalef(0.5, 0.5, 0.5);
    glBegin(GL_LINE_STRIP);
      for (i = 0; i <= 28; i++) 
         glEvalCoord1f((GLfloat) i/28.0);
    glEnd();
  glPopMatrix();

}

void Letras::dibujaA(double x, double y){
  GLfloat ctrlpoints2[7][3] = {
      { 2.0, 1.0, 0.0}, { 2.0, 3.0, 0.0}, 
      {-4.8, 3.0, 0.0}, {-4.8, -4.0, 0.0},
      {2.0, -4.0, 0.0}, {2.0, 8.0, 0.0}, {3.0, -2.0, 0.0}};
  int i;
  glPushMatrix();
    glMap1f(GL_MAP1_VERTEX_3, 0.0, 1.0, 3, 7, &ctrlpoints2[0][0]);
    glTranslatef(x, y, 0.0);
    glScalef(0.5, 0.5, 0.5);
    glBegin(GL_LINE_STRIP);
      for (i = 0; i <= 28; i++) 
         glEvalCoord1f((GLfloat) i/28.0);
    glEnd();
  glPopMatrix();

}

void Letras::dibuja1(double x, double y){
  GLfloat ctrlpoints2[3][3] = {
      {-5.0, 25.0, 0.0}, {0.0, 30.0, 0.0}, {0.0, -2.0, 0.0}};
  int i;
  glPushMatrix();
    glMap1f(GL_MAP1_VERTEX_3, 0.0, 1.0, 3, 3, &ctrlpoints2[0][0]);
    glTranslatef(x, y, 0.0);
    glScalef(0.1, 0.1, 0.1);
    glBegin(GL_LINE_STRIP);
      for (i = 0; i <= 28; i++) 
         glEvalCoord1f((GLfloat) i/28.0);
    glEnd();
  glPopMatrix();

}
void Letras::dibuja9(double x, double y){
  GLfloat ctrlpoints2[7][3] = {
      { 2.0, 1.0, 0.0}, { 2.0, 3.0, 0.0}, 
      {-4.8, 3.0, 0.0}, {-4.8, -4.0, 0.0},
      {2.0, -4.0, 0.0}, {2.0, 8.0, 0.0}, {3.0, -5.0, 0.0}};
  int i;
  glPushMatrix();
    glMap1f(GL_MAP1_VERTEX_3, 0.0, 1.0, 3, 7, &ctrlpoints2[0][0]);
    glTranslatef(x, y, 0.0);
    glScalef(0.5, 0.5, 0.5);
    glBegin(GL_LINE_STRIP);
      for (i = 0; i <= 28; i++) 
         glEvalCoord1f((GLfloat) i/28.0);
    glEnd();
  glPopMatrix();

}
void Letras::dibuja5(double x, double y){
  GLfloat ctrlpoints2[7][3] = {
	{ -3.0, -4.0, 0.0}, { 4.0, -3.0, 0.0}, 
	{4.0, 0.0, 0.0}, {-4.0, -3.0, 0.0},
        {-4.0, 3.0, 0.0},{-4.0, 3.0, 0.0}, {3.0, 4.0, 0.0}};

  int i;
  glPushMatrix();
    glMap1f(GL_MAP1_VERTEX_3, 0.0, 1.0, 3, 7, &ctrlpoints2[0][0]);
    glTranslatef(x, y, 0.0);
    glScalef(0.5, 0.5, 0.5);
    glBegin(GL_LINE_STRIP);
      for (i = 0; i <= 28; i++) 
         glEvalCoord1f((GLfloat) i/28.0);
    glEnd();
  glPopMatrix();

}

