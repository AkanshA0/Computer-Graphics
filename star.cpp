#include<GL/glut.h>
#include<GL/gl.h>

void star(void){

glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_LINES);
glColor3f(0,1,0);
glVertex2f(0,1);
glVertex2f(0.5,-0.25);
glEnd();

glBegin(GL_LINES);
glColor3f(0,1,0);
glVertex2f(0.5,-0.25);
glVertex2f(-0.5,-0.25);
glEnd();

glBegin(GL_LINES);
glColor3f(0,1,0);
glVertex2f(-0.5,-0.25);
glVertex2f(0,1);
glEnd();

glBegin(GL_LINES);
glColor3f(1,0,0);
glVertex2f(-0.5,0.5);
glVertex2f(0.5,0.5);
glEnd();

glBegin(GL_LINES);
glColor3f(1,0,0);
glVertex2f(0.5,0.5);
glVertex2f(0,-0.5);
glEnd();

glBegin(GL_LINES);
glColor3f(1,0,0);
glVertex2f(0,-0.5);
glVertex2f(-0.5,0.5);
glEnd();

glBegin(GL_LINES);
glColor3f(0,0,1);
glVertex2f(0,0.5);
glVertex2f(0.25,0);
glEnd();
//drawstring();

glBegin(GL_LINES);
glColor3f(0,0,1);
glVertex2f(0.25,0);
glVertex2f(-0.25,0);
glEnd();
//drawstring();

glBegin(GL_LINES);
glColor3f(0,0,1);
glVertex2f(-0.25,0);
glVertex2f(0,0.5);
glEnd();
//drawstring();

glBegin(GL_LINES);
glColor3f(0,1,1);
glVertex2f(0.125,0.25);
glVertex2f(-0.125,0.25);
glEnd();
//drawstring();

glBegin(GL_LINES);
glColor3f(0,1,1);
glVertex2f(0.125,0.25);
glVertex2f(0,0);
glEnd();
//drawstring();

glBegin(GL_LINES);
glColor3f(0,1,1);
glVertex2f(0,0);
glVertex2f(-0.125,0.25);
glEnd();

//drawstring();
glFlush();
}

int main(int argc,char** argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(2000,2000);
glutCreateWindow("STAR");
glutDisplayFunc(star);
glutMainLoop();

return 0;
}
