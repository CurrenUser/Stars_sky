#pragma once
#include "GL/glut.h"
#include <iostream>
#include <stdlib.h>

CONST int START_SIZE = 5000; // Count stars
static int WIDTH = 1366, HEIGHT = 705; // default window size 800x600
CONST float SPEED = 0.70;
CONST float DISTANCE = 3000;

struct star // star of sky
{
	float x;
	float y;
	float z;
};

void Initialization(); // init default opengl parametrs
void Draw(); // function drawing start sky
//void ResizeWindow(GLsizei width , GLsizei height); // function resize main window 
void FlyStars(int value);
