#include "sky.h"
#include <iostream>


int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(WIDTH, HEIGHT);
	glutCreateWindow("stars of sky");
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45, 1, 0, 100);
	glutDisplayFunc(Draw);
	glutTimerFunc(33, FlyStars, 1);
	Initialization();
	glutMainLoop();
}