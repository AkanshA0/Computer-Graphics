#include<GL/glut.h>
#include<GL/gl.h>
#include<cmath>
#include<iostream>
using namespace std;

void scale_draw(void){

glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1,1,1);
 glBegin(GL_TRIANGLES);
  glVertex2f(100,100);
  glVertex2f(200,150);
  glVertex2f(100,200);

 glEnd();

glScalef(2,2,0);

glColor3f(1,0,0);
 glBegin(GL_TRIANGLES);
  glVertex2f(100,100);
  glVertex2f(200,150);
  glVertex2f(100,200);

 glEnd();

glFlush();
}

void rotate_draw(void){

glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1,1,1);
 glBegin(GL_TRIANGLES);
  glVertex2f(100,100);
  glVertex2f(200,150);
  glVertex2f(100,200);
 glEnd();

glTranslatef(100, 100, 0);
glRotatef(45, 0, 0, 1);
glTranslatef(-100, -100, 0);

glColor3f(1,0,0);
 glBegin(GL_TRIANGLES);
  glVertex2f(100,100);
  glVertex2f(200,150);
  glVertex2f(100,200);

 glEnd();

glFlush();
}


void reflection_draw(void){

glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1,1,1);
 glBegin(GL_TRIANGLES);
  glVertex2f(5,50);
  glVertex2f(20,40);
  glVertex2f(10,70);

 glEnd();

glPushMatrix();
glScalef(1, -1, 1); 

glColor3f(1,0,0);
 glBegin(GL_TRIANGLES);
  glVertex2f(5,50);
  glVertex2f(20,40);
  glVertex2f(10,70);

 glEnd();
glPopMatrix();

glFlush();
}



int main(int argc,char** argv){
int c;
cout<<"\n1 - scale\n2 - rotate\n3 - reflection\n";
cin>>c;

glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(500,500);
glutCreateWindow("PATTERN");
//init();
//glClearColor(0,0,0,1);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-100,100,-100,100);

switch(c){
case 1:
{glutDisplayFunc(scale_draw);
break;}

case 2:
{glutDisplayFunc(rotate_draw);
break;}

case 3:
{glutDisplayFunc(reflection_draw);
break;}

}
glutMainLoop();

return 0;
}
