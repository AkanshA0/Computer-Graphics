#include<GL/glut.h>
#include<GL/gl.h>

void hut(void){

glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_LINES);
glColor3f(0,1,0);
glVertex2f(20,20);
glVertex2f(20,200);
glEnd();

glBegin(GL_LINES);
glColor3f(0,1,0);
glVertex2f(20,200);
glVertex2f(280,200);
glEnd();


glBegin(GL_LINES);
glColor3f(0,1,0);
glVertex2f(280,200);
glVertex2f(280,20);
glEnd();

glBegin(GL_LINES);
glColor3f(0,1,0);
glVertex2f(150,200);
glVertex2f(150,20);
glEnd();

glBegin(GL_LINES);
glColor3f(0,1,0);
glVertex2f(280,20);
glVertex2f(20,20);
glEnd();


glBegin(GL_LINES);
glColor3f(1,0,0);
glVertex2f(150,200);
glVertex2f(215,250);
glEnd();

glBegin(GL_LINES);
glColor3f(1,0,0);
glVertex2f(215,250);
glVertex2f(280,200);
glEnd();

glBegin(GL_LINES);
glColor3f(1,0,0);
glVertex2f(20,200);
glVertex2f(85,250);
glEnd();


glBegin(GL_LINES);
glColor3f(1,0,0);
glVertex2f(85,250);
glVertex2f(150,200);
glEnd();


glBegin(GL_LINES);
glColor3f(0,1,1);
glVertex2f(70,70);
glVertex2f(70,110);
glEnd();
//drawstring();

glBegin(GL_LINES);
glColor3f(0,1,1);
glVertex2f(70,110);
glVertex2f(100,110);
glEnd();
//drawstring();

glBegin(GL_LINES);
glColor3f(0,1,1);
glVertex2f(100,110);
glVertex2f(100,70);
glEnd();
//drawstring();

glBegin(GL_LINES);
glColor3f(0,1,1);
glVertex2f(100,70);
glVertex2f(70,70);
glEnd();
//drawstring();


glBegin(GL_LINES);
glColor3f(0,1,1);
glVertex2f(210,20);
glVertex2f(210,100);
glEnd();
glBegin(GL_LINES);
glColor3f(0,1,1);
glVertex2f(210,100);
glVertex2f(230,100);
glEnd();
glBegin(GL_LINES);
glColor3f(0,1,1);
glVertex2f(230,100);
glVertex2f(230,20);
glEnd();
glBegin(GL_LINES);
glColor3f(0,1,1);
glVertex2f(230,20);
glVertex2f(210,20);
glEnd();

glFlush();
}

int main(int argc,char** argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(1000,1000);
glutCreateWindow("HUT");
//init();
//glutDisplayFunc(drawstring);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,500,0,500);

glutDisplayFunc(hut);
glutMainLoop();

return 0;
}
