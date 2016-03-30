#pragma once
#include <stdlib.h>
#include <GL/glut.h>
#include "Plane.h"
#include "Letter.h"
#include "Model.h"
#include "Data.h"


//Clase encargada de dibujar el paisaje
class Landscape
{
private:
    Plane  * plane1;
    Plane  * plane2;
    Plane  * plane3;
    Model  * tree1;
    Model  * tree2;
    Model  * rabbit;
    Model  * butter;
    Model  * stable;
    Letter * letterW;
    Letter * letterI;
    Letter * letterN;
    Letter * letterD;
    Letter * letterO;
    Letter * letterS;
    Letter * letterX;
    Letter * letterP;

public:
    Landscape();
    void draw();
};

Landscape::Landscape()
{
    //Construye los objetos
    plane1 = new Plane(&Data::data_plane[0][0][0], 30, -7.0, -1.0, 0.0, 45);
    plane2 = new Plane(&Data::data_plane[0][0][0], 30, 1.5, -0.8, 0.0, 45);
    plane3 = new Plane(&Data::data_plane2[0][0][0], 4, -4, -3.0, 0.0, 6);
    plane3->setColor(20, 100, 255);

    tree1  = new Model("objs/tree.obj", 0.0, 0.0, 0.0);
    tree2  = new Model("objs/polytree.obj", 0.0, 0.0, 0.0);
    rabbit = new Model("objs/Rabbit.obj", 0.0, 0.0, 0.0);
    butter = new Model("objs/Butterfly.obj", 0.0, 0.0, 0.0);
    stable = new Model("objs/Stable.obj", 0.0, 0.0, 0.0);

    letterW = new Letter(&Data::data_letterW[0][0], 7, 0.0, 0.0, 0.0);
    letterI = new Letter(&Data::data_letterI[0][0], 2, 0.0, 0.0, 0.0);
    letterN = new Letter(&Data::data_letterN[0][0], 4, 0.0, 0.0, 0.0);
    letterD = new Letter(&Data::data_letterD[0][0], 7, 0.0, 0.0, 0.0);
    letterO = new Letter(&Data::data_letterO[0][0], 5, 0.0, 0.0, 0.0);
    letterS = new Letter(&Data::data_letterS[0][0], 6, 0.0, 0.0, 0.0);
    letterX = new Letter(&Data::data_letterX[0][0], 5, 0.0, 0.0, 0.0);
    letterP = new Letter(&Data::data_letterP[0][0], 7, 0.0, 0.0, 0.0);
}

void Landscape::draw()
{
    //Dibujar los objetos
    plane1->draw();
    plane2->draw();
    plane3->draw();

    tree1->draw(-5, -1, 2, .3, 33, 92, 21);
    tree2->draw(4, -3, 4, .01, 29, 162, 2);
    rabbit->draw(-4, -3.5, 3, 1.3, 255, 255, 255);
    butter->draw(-2, 0, 2, .01, 53, 35, 6);
    stable->draw(0.5, -2.5, 2, .0045, 140, 84, 21);

    letterW->draw(-30, 15);
    letterI->draw(-24, 15);
    letterN->draw(-18, 15);
    letterD->draw(-15, 15);
    letterO->draw(-8, 15);
    letterW->draw(0, 15);
    letterS->draw(7, 15);
    letterX->draw(22, 15);
    letterP->draw(30, 15);
}
