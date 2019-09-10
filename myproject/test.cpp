#include <iostream>
#include <GL/glut.h>
#include "../include/utils.h"
using namespace std;

// g++  foo.cpp -o foo -lGL -lGLU -lglut

// The question is  why not is necessary 
// g++ -L /usr/lib/x86_64-linux-gnu/  foo.cpp -o foo -lGL -lGLU -lglut -l



void reshape(int w, int h)
{
  glViewport(0, 0, w, h);       /* Establish viewing area to cover entire window. */
  glMatrixMode(GL_PROJECTION);  /* Start modifying the projection matrix. */
  glLoadIdentity();             /* Reset project matrix. */
  glOrtho(0, w, 0, h, -1, 1);   /* Map abstract coords directly to window coords. */
  glScalef(1, -1, 1);           /* Invert Y axis so increasing Y goes down. */
  glTranslatef(0, -h, 0);       /* Shift origin up to upper-left corner. */
}


void display(void)
{
  glClear(GL_COLOR_BUFFER_BIT);
  glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.0, 1.0);  /* blue */
    glVertex2i(0, 0);
    glColor3f(0.0, 1.0, 0.0);  /* green */
    glVertex2i(200, 200);
    glColor3f(1.0, 0.0, 0.0);  /* red */
    glVertex2i(20, 200);
  glEnd();
  glFlush();  /* Single buffered, so needs a flush. */
}


int main(int argc, char *argv[])
{
	Cutils obj;	
	obj.printS("Hi");
	//cout << "Hi" << endl;


	glutInit(&argc, argv);
    glutCreateWindow("single triangle");
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();

	return 0;
}
