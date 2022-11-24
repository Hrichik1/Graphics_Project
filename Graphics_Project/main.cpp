#include<cstdio>
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846

//----dayRiver----
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

//------nightRiver---
void nightRiver(){
    //GL_QUADS
    glBegin(GL_QUADS);
	glColor3ub(21, 67, 96);

    glVertex2f(-1.0f, -0.4f);
	glVertex2f(-1.0f, 0.2f);
	glVertex2f(1.0f, 0.2f);
    glColor3ub(133, 193, 233); //color mixing
	glVertex2f(1.0f, -0.15f);

	glEnd();
}


void rainyRiver(){
    //GL_QUADS
    glBegin(GL_QUADS);
	glColor3ub(21, 67, 96);

    glVertex2f(-1.0f, -0.4f);
	glVertex2f(-1.0f, 0.2f);
        glColor3ub(153, 163, 164); //color mixing
	glVertex2f(1.0f, 0.2f);
	glVertex2f(1.0f, -0.15f);

	glEnd();
}

void eveningRiver(){
    //GL_QUADS
    glBegin(GL_QUADS);
	glColor3ub(191, 201, 202);

    glVertex2f(-1.0f, -0.4f);
        glColor3ub(93, 109, 126); //color mixing
	glVertex2f(-1.0f, 0.2f);
        glColor3ub(133, 146, 158); //color mixing
	glVertex2f(1.0f, 0.2f);
        glColor3ub(214, 234, 248); //color mixing
	glVertex2f(1.0f, -0.15f);

	glEnd();
}
