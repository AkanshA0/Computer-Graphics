#include<GL/glut.h>
#include<GL/gl.h>
#include<cmath>
#include<iostream>
using namespace std;

float x1,yp1,x2,y2;


void dda_line(){

float dx,dy;

dx=x2-x1;
dy=y2-yp1;

int step;

if( abs(dx) >= abs(dy) )
{step=abs(dx);}
else
{step=abs(dy);}
 
dx=dx/step;
dy=dy/step;

glClear(GL_COLOR_BUFFER_BIT);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,200,0,200);

glPointSize(1.0);
glBegin(GL_POINTS);
glColor3f(0,1,1);
glVertex2f(round(x1),round(yp1)); 

for(int i=1;i<=step;i++)
{
//glBegin(GL_POINTS);
x1=x1+dx;
yp1=yp1+dy;

glVertex2f(round(x1),round(yp1)); 
}
glEnd();

glFlush();
}

int main(int argc,char** argv){
glutInit(&argc,argv);

//double x1,y1,x2,y2;
cout<<"                                 x1: ";
cin>>x1;
cout<<"                                 y1: ";
cin>>yp1;
cout<<"                                 x2: ";
cin>>x2;
cout<<"                                 y2: ";
cin>>y2;

glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(500,500);
glutCreateWindow("DDA");
glutDisplayFunc(dda_line);
glutMainLoop();

return 0;
}
