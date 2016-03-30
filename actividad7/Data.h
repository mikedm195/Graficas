#pragma once
#include <stdlib.h>


//Clase encargada de almacenar los datos
class Data
{
public:

    //Puntos de control
    static GLfloat data_plane[30][30][3];
    static GLfloat data_plane2[4][4][3];
    static GLfloat data_letterW[7][3];
    static GLfloat data_letterI[2][3];
    static GLfloat data_letterN[4][3];
    static GLfloat data_letterD[7][3];
    static GLfloat data_letterO[5][3];
    static GLfloat data_letterS[6][3];
    static GLfloat data_letterX[5][3];
    static GLfloat data_letterP[7][3];
};

//Para generar el primer plano se utilizó un algoritmo de generación de ondas
GLfloat Data::data_plane[30][30][3] =
{
    {{0,0,0},{0,0,0},{0,0,0},{1,0,0},{1,0,0},{1,0,0},{2,0,0},{2,0,0},{2,0,0},{3,0,0},{3,0,0},{3,0,0},{4,0,0},{4,0,0},{4,0,0},{5,0,0},{5,0,0},{5,0,0},{6,0,0},{6,0,0},{6,0,0},{7,0,0},{7,0,0},{7,0,0},{8,0,0},{8,0,0},{8,0,0},{9,0,0},{9,0,0},{9,0,0}},
    {{0,0,0},{0,0,0},{0,1,0},{1,1,0},{1,1,0},{1,1,0},{2,0,0},{2,0,0},{2,0,0},{3,0,0},{3,0,0},{3,0,0},{4,0,0},{4,0,0},{4,1,0},{5,1,0},{5,1,0},{5,1,0},{6,0,0},{6,0,0},{6,0,0},{7,0,0},{7,0,0},{7,0,0},{8,0,0},{8,0,0},{8,1,0},{9,1,0},{9,1,0},{9,1,0}},
    {{0,0,0},{0,1,0},{0,1,0},{1,1,0},{1,1,0},{1,1,0},{2,0,0},{2,0,0},{2,0,0},{3,0,0},{3,0,0},{3,0,0},{4,0,0},{4,1,0},{4,1,0},{5,1,0},{5,1,0},{5,1,0},{6,0,0},{6,0,0},{6,0,0},{7,0,0},{7,0,0},{7,0,0},{8,0,0},{8,1,0},{8,1,0},{9,1,0},{9,1,0},{9,1,0}},
    {{0,0,1},{0,1,1},{0,1,1},{1,1,1},{1,1,1},{1,1,1},{2,1,1},{2,0,1},{2,0,1},{3,0,1},{3,0,1},{3,0,1},{4,0,1},{4,1,1},{4,1,1},{5,1,1},{5,1,1},{5,1,1},{6,1,1},{6,0,1},{6,0,1},{7,0,1},{7,0,1},{7,0,1},{8,0,1},{8,1,1},{8,1,1},{9,1,1},{9,1,1},{9,1,1}},
    {{0,0,1},{0,1,1},{0,1,1},{1,1,1},{1,1,1},{1,1,1},{2,0,1},{2,0,1},{2,0,1},{3,0,1},{3,0,1},{3,0,1},{4,0,1},{4,1,1},{4,1,1},{5,1,1},{5,1,1},{5,1,1},{6,0,1},{6,0,1},{6,0,1},{7,0,1},{7,0,1},{7,0,1},{8,0,1},{8,1,1},{8,1,1},{9,1,1},{9,1,1},{9,1,1}},
    {{0,0,1},{0,1,1},{0,1,1},{1,1,1},{1,1,1},{1,1,1},{2,0,1},{2,0,1},{2,0,1},{3,0,1},{3,0,1},{3,0,1},{4,0,1},{4,0,1},{4,1,1},{5,1,1},{5,1,1},{5,1,1},{6,0,1},{6,0,1},{6,0,1},{7,0,1},{7,0,1},{7,0,1},{8,0,1},{8,0,1},{8,1,1},{9,1,1},{9,1,1},{9,1,1}},
    {{0,0,2},{0,0,2},{0,0,2},{1,1,2},{1,0,2},{1,0,2},{2,0,2},{2,0,2},{2,0,2},{3,0,2},{3,0,2},{3,0,2},{4,0,2},{4,0,2},{4,0,2},{5,1,2},{5,0,2},{5,0,2},{6,0,2},{6,0,2},{6,0,2},{7,0,2},{7,0,2},{7,0,2},{8,0,2},{8,0,2},{8,0,2},{9,1,2},{9,0,2},{9,0,2}},
    {{0,0,2},{0,0,2},{0,0,2},{1,0,2},{1,0,2},{1,0,2},{2,0,2},{2,0,2},{2,-1,2},{3,-1,2},{3,-1,2},{3,-1,2},{4,0,2},{4,0,2},{4,0,2},{5,0,2},{5,0,2},{5,0,2},{6,0,2},{6,0,2},{6,-1,2},{7,-1,2},{7,-1,2},{7,-1,2},{8,0,2},{8,0,2},{8,0,2},{9,0,2},{9,0,2},{9,0,2}},
    {{0,0,2},{0,0,2},{0,0,2},{1,0,2},{1,0,2},{1,0,2},{2,0,2},{2,-1,2},{2,-1,2},{3,-1,2},{3,-1,2},{3,-1,2},{4,0,2},{4,0,2},{4,0,2},{5,0,2},{5,0,2},{5,0,2},{6,0,2},{6,-1,2},{6,-1,2},{7,-1,2},{7,-1,2},{7,-1,2},{8,0,2},{8,0,2},{8,0,2},{9,0,2},{9,0,2},{9,0,2}},
    {{0,0,3},{0,0,3},{0,0,3},{1,0,3},{1,0,3},{1,0,3},{2,0,3},{2,-1,3},{2,-1,3},{3,-1,3},{3,-1,3},{3,-1,3},{4,-1,3},{4,0,3},{4,0,3},{5,0,3},{5,0,3},{5,0,3},{6,0,3},{6,-1,3},{6,-1,3},{7,-1,3},{7,-1,3},{7,-1,3},{8,-1,3},{8,0,3},{8,0,3},{9,0,3},{9,0,3},{9,0,3}},
    {{0,0,3},{0,0,3},{0,0,3},{1,0,3},{1,0,3},{1,0,3},{2,0,3},{2,-1,3},{2,-1,3},{3,-1,3},{3,-1,3},{3,-1,3},{4,0,3},{4,0,3},{4,0,3},{5,0,3},{5,0,3},{5,0,3},{6,0,3},{6,-1,3},{6,-1,3},{7,-1,3},{7,-1,3},{7,-1,3},{8,0,3},{8,0,3},{8,0,3},{9,0,3},{9,0,3},{9,0,3}},
    {{0,0,3},{0,0,3},{0,0,3},{1,0,3},{1,0,3},{1,0,3},{2,0,3},{2,-1,3},{2,-1,3},{3,-1,3},{3,-1,3},{3,-1,3},{4,0,3},{4,0,3},{4,0,3},{5,0,3},{5,0,3},{5,0,3},{6,0,3},{6,0,3},{6,-1,3},{7,-1,3},{7,-1,3},{7,-1,3},{8,0,3},{8,0,3},{8,0,3},{9,0,3},{9,0,3},{9,0,3}},
    {{0,0,4},{0,0,4},{0,0,4},{1,0,4},{1,0,4},{1,0,4},{2,0,4},{2,0,4},{2,0,4},{3,-1,4},{3,0,4},{3,0,4},{4,0,4},{4,0,4},{4,0,4},{5,0,4},{5,0,4},{5,0,4},{6,0,4},{6,0,4},{6,0,4},{7,-1,4},{7,0,4},{7,0,4},{8,0,4},{8,0,4},{8,0,4},{9,0,4},{9,0,4},{9,0,4}},
    {{0,0,4},{0,0,4},{0,1,4},{1,1,4},{1,1,4},{1,0,4},{2,0,4},{2,0,4},{2,0,4},{3,0,4},{3,0,4},{3,0,4},{4,0,4},{4,0,4},{4,1,4},{5,1,4},{5,1,4},{5,1,4},{6,0,4},{6,0,4},{6,0,4},{7,0,4},{7,0,4},{7,0,4},{8,0,4},{8,0,4},{8,1,4},{9,1,4},{9,1,4},{9,1,4}},
    {{0,0,4},{0,1,4},{0,1,4},{1,1,4},{1,1,4},{1,1,4},{2,0,4},{2,0,4},{2,0,4},{3,0,4},{3,0,4},{3,0,4},{4,0,4},{4,1,4},{4,1,4},{5,1,4},{5,1,4},{5,1,4},{6,0,4},{6,0,4},{6,0,4},{7,0,4},{7,0,4},{7,0,4},{8,0,4},{8,1,4},{8,1,4},{9,1,4},{9,1,4},{9,1,4}},
    {{0,0,5},{0,1,5},{0,1,5},{1,1,5},{1,1,5},{1,1,5},{2,1,5},{2,0,5},{2,0,5},{3,0,5},{3,0,5},{3,0,5},{4,0,5},{4,1,5},{4,1,5},{5,1,5},{5,1,5},{5,1,5},{6,1,5},{6,0,5},{6,0,5},{7,0,5},{7,0,5},{7,0,5},{8,0,5},{8,1,5},{8,1,5},{9,1,5},{9,1,5},{9,1,5}},
    {{0,0,5},{0,1,5},{0,1,5},{1,1,5},{1,1,5},{1,1,5},{2,0,5},{2,0,5},{2,0,5},{3,0,5},{3,0,5},{3,0,5},{4,0,5},{4,1,5},{4,1,5},{5,1,5},{5,1,5},{5,1,5},{6,0,5},{6,0,5},{6,0,5},{7,0,5},{7,0,5},{7,0,5},{8,0,5},{8,1,5},{8,1,5},{9,1,5},{9,1,5},{9,1,5}},
    {{0,0,5},{0,1,5},{0,1,5},{1,1,5},{1,1,5},{1,1,5},{2,0,5},{2,0,5},{2,0,5},{3,0,5},{3,0,5},{3,0,5},{4,0,5},{4,1,5},{4,1,5},{5,1,5},{5,1,5},{5,1,5},{6,0,5},{6,0,5},{6,0,5},{7,0,5},{7,0,5},{7,0,5},{8,0,5},{8,0,5},{8,1,5},{9,1,5},{9,1,5},{9,1,5}},
    {{0,0,6},{0,0,6},{0,0,6},{1,1,6},{1,0,6},{1,0,6},{2,0,6},{2,0,6},{2,0,6},{3,0,6},{3,0,6},{3,0,6},{4,0,6},{4,0,6},{4,0,6},{5,1,6},{5,0,6},{5,0,6},{6,0,6},{6,0,6},{6,0,6},{7,0,6},{7,0,6},{7,0,6},{8,0,6},{8,0,6},{8,0,6},{9,1,6},{9,0,6},{9,0,6}},
    {{0,0,6},{0,0,6},{0,0,6},{1,0,6},{1,0,6},{1,0,6},{2,0,6},{2,0,6},{2,-1,6},{3,-1,6},{3,-1,6},{3,0,6},{4,0,6},{4,0,6},{4,0,6},{5,0,6},{5,0,6},{5,0,6},{6,0,6},{6,0,6},{6,-1,6},{7,-1,6},{7,-1,6},{7,-1,6},{8,0,6},{8,0,6},{8,0,6},{9,0,6},{9,0,6},{9,0,6}},
    {{0,0,6},{0,0,6},{0,0,6},{1,0,6},{1,0,6},{1,0,6},{2,0,6},{2,-1,6},{2,-1,6},{3,-1,6},{3,-1,6},{3,-1,6},{4,0,6},{4,0,6},{4,0,6},{5,0,6},{5,0,6},{5,0,6},{6,0,6},{6,-1,6},{6,-1,6},{7,-1,6},{7,-1,6},{7,-1,6},{8,0,6},{8,0,6},{8,0,6},{9,0,6},{9,0,6},{9,0,6}},
    {{0,0,7},{0,0,7},{0,0,7},{1,0,7},{1,0,7},{1,0,7},{2,0,7},{2,-1,7},{2,-1,7},{3,-1,7},{3,-1,7},{3,-1,7},{4,-1,7},{4,0,7},{4,0,7},{5,0,7},{5,0,7},{5,0,7},{6,0,7},{6,-1,7},{6,-1,7},{7,-1,7},{7,-1,7},{7,-1,7},{8,-1,7},{8,0,7},{8,0,7},{9,0,7},{9,0,7},{9,0,7}},
    {{0,0,7},{0,0,7},{0,0,7},{1,0,7},{1,0,7},{1,0,7},{2,0,7},{2,-1,7},{2,-1,7},{3,-1,7},{3,-1,7},{3,-1,7},{4,0,7},{4,0,7},{4,0,7},{5,0,7},{5,0,7},{5,0,7},{6,0,7},{6,-1,7},{6,-1,7},{7,-1,7},{7,-1,7},{7,-1,7},{8,0,7},{8,0,7},{8,0,7},{9,0,7},{9,0,7},{9,0,7}},
    {{0,0,7},{0,0,7},{0,0,7},{1,0,7},{1,0,7},{1,0,7},{2,0,7},{2,-1,7},{2,-1,7},{3,-1,7},{3,-1,7},{3,-1,7},{4,0,7},{4,0,7},{4,0,7},{5,0,7},{5,0,7},{5,0,7},{6,0,7},{6,-1,7},{6,-1,7},{7,-1,7},{7,-1,7},{7,-1,7},{8,0,7},{8,0,7},{8,0,7},{9,0,7},{9,0,7},{9,0,7}},
    {{0,0,8},{0,0,8},{0,0,8},{1,0,8},{1,0,8},{1,0,8},{2,0,8},{2,0,8},{2,0,8},{3,-1,8},{3,0,8},{3,0,8},{4,0,8},{4,0,8},{4,0,8},{5,0,8},{5,0,8},{5,0,8},{6,0,8},{6,0,8},{6,0,8},{7,-1,8},{7,0,8},{7,0,8},{8,0,8},{8,0,8},{8,0,8},{9,0,8},{9,0,8},{9,0,8}},
    {{0,0,8},{0,0,8},{0,1,8},{1,1,8},{1,1,8},{1,0,8},{2,0,8},{2,0,8},{2,0,8},{3,0,8},{3,0,8},{3,0,8},{4,0,8},{4,0,8},{4,1,8},{5,1,8},{5,1,8},{5,0,8},{6,0,8},{6,0,8},{6,0,8},{7,0,8},{7,0,8},{7,0,8},{8,0,8},{8,0,8},{8,1,8},{9,1,8},{9,1,8},{9,1,8}},
    {{0,0,8},{0,1,8},{0,1,8},{1,1,8},{1,1,8},{1,1,8},{2,0,8},{2,0,8},{2,0,8},{3,0,8},{3,0,8},{3,0,8},{4,0,8},{4,1,8},{4,1,8},{5,1,8},{5,1,8},{5,1,8},{6,0,8},{6,0,8},{6,0,8},{7,0,8},{7,0,8},{7,0,8},{8,0,8},{8,1,8},{8,1,8},{9,1,8},{9,1,8},{9,1,8}},
    {{0,0,9},{0,1,9},{0,1,9},{1,1,9},{1,1,9},{1,1,9},{2,1,9},{2,0,9},{2,0,9},{3,0,9},{3,0,9},{3,0,9},{4,0,9},{4,1,9},{4,1,9},{5,1,9},{5,1,9},{5,1,9},{6,1,9},{6,0,9},{6,0,9},{7,0,9},{7,0,9},{7,0,9},{8,0,9},{8,1,9},{8,1,9},{9,1,9},{9,1,9},{9,1,9}},
    {{0,0,9},{0,1,9},{0,1,9},{1,1,9},{1,1,9},{1,1,9},{2,0,9},{2,0,9},{2,0,9},{3,0,9},{3,0,9},{3,0,9},{4,0,9},{4,1,9},{4,1,9},{5,1,9},{5,1,9},{5,1,9},{6,0,9},{6,0,9},{6,0,9},{7,0,9},{7,0,9},{7,0,9},{8,0,9},{8,1,9},{8,1,9},{9,1,9},{9,1,9},{9,1,9}},
    {{0,0,9},{0,1,9},{0,1,9},{1,1,9},{1,1,9},{1,1,9},{2,0,9},{2,0,9},{2,0,9},{3,0,9},{3,0,9},{3,0,9},{4,0,9},{4,1,9},{4,1,9},{5,1,9},{5,1,9},{5,1,9},{6,0,9},{6,0,9},{6,0,9},{7,0,9},{7,0,9},{7,0,9},{8,0,9},{8,1,9},{8,1,9},{9,1,9},{9,1,9},{9,1,9}}
};

GLfloat Data::data_plane2[4][4][3] =
{
    {{-1.5, 1.0,  1.5},  {-0.5, 1.0, 1.5 }, {0.5, 1.0,  1.5 },   {1.5, 1.0, 1.5}},
    {{-1.5, 1.0,  0.5},  {-0.5, -2.0, 0.5 }, {0.5, -2.0,  0.5 },   {1.5, 1.0, 0.5}},
    {{-1.5, 1.0, -0.5},  {-0.5, -2.0,-0.5 }, {0.5, -2.0, -0.5 },   {1.5, 1.0,-0.5}},
    {{-1.5, 1.0, -1.5},  {-0.5, 1.0,-1.5 }, {0.5, 1.0, -1.5 },   {1.5, 1.0,-1.5}}

};

GLfloat Data::data_letterW[7][3] = {
      {-4.8, 0.0,  0.0}, {-4.8, -5.0, 0.0},
      { 0.0, -5.0, 0.0}, { 0.0, 5.0, 0.0},
      {0.0,  -5.0, 0.0}, {4.8, -5.0, 0.0}, {4.8, 0.0, 0.0}
};
GLfloat Data::data_letterI[2][3] = {
      {0.0,  1.0, 0.0}, {0.0, -4.0, 0.0}
};
GLfloat Data::data_letterN[4][3] = {
      {-4.8, -3.0,  0.0}, {-4.8,  2.0, 0.0},
      { 0.0,  2.0, 0.0}, { 0.0,-3.0, 0.0}
};
GLfloat Data::data_letterD[7][3] = {
      { 2.0, -1.0, 0.0}, { 2.0, -3.0, 0.0},
      {-4.8, -3.0, 0.0}, {-4.8, 4.0, 0.0},
      {2.0, 4.0, 0.0}, {2.0, -8.0, 0.0}, {3.0, 5.0, 0.0}
};
GLfloat Data::data_letterO[5][3] = {
      {-4.8, 0.0,  0.0}, { 0.0,-4.8, 0.0},
      { 4.8, 0.0, 0.0}, { 0.0,  4.8, 0.0},
      {-4.8, 0.0, 0.0}
};
GLfloat Data::data_letterS[6][3] = {
	{ -3.0, -4.0, 0.0}, { 4.0, -3.5, 0.0},
	{4.0,-2.0, 0.0}, {-4.0, -2.0, 0.0},
        {-4.0,-0.5, 0.0}, {3.0, 0.0, 0.0}
};
GLfloat Data::data_letterX[5][3] = {
      {-5.0, 3.0, 0.0}, {15.0,-9.0, 0.0},
      {-8.0, 6.0, 0.0}, {15.0, 9.0, 0.0},
      {-5.0,-3.0, 0.0}
};
GLfloat Data::data_letterP[7][3] = {
      {-2.0, 1.0, 0.0}, {-2.0, 3.0, 0.0},
      { 4.8, 3.0, 0.0}, { 4.8, -4.0, 0.0},
      {-2.0, -4.0, 0.0}, {-2.0, 8.0, 0.0}, {-3.0, -5.0, 0.0}
};