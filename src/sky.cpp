#include "sky.h"

star  *stars;

void Initialization()
{
	stars = new star[START_SIZE]; // create array szie const START_SIZE  

	for (int i = 0; i < START_SIZE; i++)
{
		stars[i].x = rand() % ( WIDTH + 1) - (WIDTH / 2);
		stars[i].y = rand() % ( HEIGHT + 1 ) - (HEIGHT / 2);
		stars[i].z = ( rand() % 2800 ) - DISTANCE;
		std::cout << "star x:" << stars[i].x << " y:" << stars[i].y << " z:" << stars[i].z << std::endl;
}
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
}


void FlyStars(int value)
{
	for (int i = 0; i < START_SIZE; i++)
	{
		if (stars[i].z > 0.5f)
			stars[i].z = (rand() % 800) - 1000;

		stars[i].z += SPEED;
	}
	glutPostRedisplay();
	glutTimerFunc(1, FlyStars, 0);
}

void Draw()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_LINES);
	glVertex3f(40.0, 0.0, -1.0); // line x
	glVertex3f(-40.0, 0.0, -1.0); // line -x
	glVertex3f(0.0f, 60.0, -1.0); // line y
	glVertex3f(0.0f, -60.0, -1.0); // line -y
	glEnd();


	glBegin(GL_LINES);
for (int i = 0; i < START_SIZE; i++)
{
	glVertex3f(stars[i].x, stars[i].y, stars[i].z);
	glVertex3f(stars[i].x, stars[i].y, stars[i].z + 10.0f);
}	
	glEnd();
	glutSwapBuffers();
}