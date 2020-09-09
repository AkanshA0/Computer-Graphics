#include<GL/glut.h>
#include<GL/gl.h>
#include<cmath>

void drawstring()
{

//glClear(GL_COLOR_BUFFER_BIT);

char v='x';

 glRasterPos3f(405,20,0);
 glColor3f(1,1,1);
  glutBitmapCharacter(GLUT_BITMAP_9_BY_15,v);
 
v='y';

 glRasterPos3f(20,409,0);
 glColor3f(1,1,1);
  glutBitmapCharacter(GLUT_BITMAP_9_BY_15,v);

v='o';

 glRasterPos3f(12,12,0);
 glColor3f(1,1,1);
  glutBitmapCharacter(GLUT_BITMAP_9_BY_15,v);

v='>';
 
 glRasterPos3f(395,16,0);
 glColor3f(1,1,1);
  glutBitmapCharacter(GLUT_BITMAP_9_BY_15,v);
 
v='^';

glRasterPos3f(16,395,0);
 glColor3f(1,1,1);
  glutBitmapCharacter(GLUT_BITMAP_9_BY_15,v);
}

void bar(void){

glClear(GL_COLOR_BUFFER_BIT);
drawstring();
glBegin(GL_LINES);
glColor3f(1,1,1);
glVertex2f(20,20);
glVertex2f(20,400);
glEnd();

glBegin(GL_LINES);
glColor3f(1,1,1);
glVertex2f(20,20);
glVertex2f(400,20);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,0,0);
glVertex2f(40,20);
glVertex2f(40,300);
glVertex2f(60,300);
glVertex2f(60,20);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,1,0);
glVertex2f(80,20);
glVertex2f(80,250);
glVertex2f(100,250);
glVertex2f(100,20);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0,0,1);
glVertex2f(120,20);
glVertex2f(120,350);
glVertex2f(140,350);
glVertex2f(140,20);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0,1,1);
glVertex2f(160,20);
glVertex2f(160,200);
glVertex2f(180,200);
glVertex2f(180,20);
glEnd();

glFlush();
}

int main(int argc,char** argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(500,500);
glutCreateWindow("bar graph");
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,500,0,500);

glutDisplayFunc(bar);
glutMainLoop();

return 0;
}
