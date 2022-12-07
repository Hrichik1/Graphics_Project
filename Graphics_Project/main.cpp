#include<cstdio>
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846

 //----Day---------//

void dayRiver(){
	//GL_QUADS
    glBegin(GL_QUADS);
        glColor3ub(214, 234, 248);
    glVertex2f(-1.0f, -0.3f); //down left
        glColor3ub(36, 113, 163);
	glVertex2f(-1.0f, 0.2f); //top left
        glColor3ub(36, 113, 163);
	glVertex2f(1.0f, 0.2f); //top right
        glColor3ub(214, 234, 248);
	glVertex2f(1.0f, -0.08f); //down right

	glEnd();
}
void daySky(){
    //GL_QUADS
    glBegin(GL_QUADS);
        glColor3ub(84, 153, 199); //up left corner
    glVertex2f(-1.1f, 1.0f);
        glColor3ub(127, 179, 213); //up right corner
	glVertex2f(1.1f, 1.0f);
        glColor3ub(251, 252, 252); //color mixing
	glVertex2f(1.1f, -0.1f);
        glColor3ub(251, 252, 252); //color mixing
	glVertex2f(-1.1f, -0.4f);

	glEnd();
}
void dayBeach(){
	//GL_QUADS
    glBegin(GL_QUADS);
        glColor3ub(244, 236, 252);
    glVertex2f(-1.0f, -0.3f); //top left
        glColor3ub(214, 234, 248);
    glVertex2f(1.0f, -0.08f); //top right
        glColor3ub(246, 221, 204);
	glVertex2f(1.0f, -1.0f); //down right
        glColor3ub(246, 221, 204);
	glVertex2f(-1.0f, -1.0f); //down left

	glEnd();
}

void fornt(){
	//GL_QUADS
    glBegin(GL_QUADS);
	glColor3ub(238 ,238, 209);

	glVertex2f(-1.0f, -1.0f);
	glVertex2f(-1.0f, 0.0f);
	glVertex2f(1.0f, 0.0f);
        glColor3ub(215, 219, 221);
	glVertex2f(1.0f, -1.0f);

	glEnd();

}


void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void day() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    //fornt();
    daySky();


    //sun
    glColor3ub(245, 176, 65);
	int j;
	GLfloat x=-0.8f; GLfloat y=0.9f; GLfloat radius =.1f;
	int triangleAmount = 20; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y); // center of circle
		for(j = 0; j <= triangleAmount+1;j++) {
			glVertex2f(
		            x + (radius * cos(j *  twicePi / triangleAmount)),
			    y + (radius * sin(j * twicePi / triangleAmount))
			);
			glColor3ub(245, 249, 10);
		}
	glEnd();

	dayBeach();
    	dayRiver();

	glFlush();
}
 int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(900,600); // Set the window's initial width & height
	glutInitWindowPosition(50, 50);

	glutCreateWindow("Day:d , Evening:e ,Night:n ,RainyDay:r ,Start:s ,Stop:a");

    glutDisplayFunc(day);
    init();




	glutMainLoop();
	return 0;

}
