#include<GL/glut.h>
#include<GL/gl.h>
#include<cmath>
#include<iostream>
using namespace std;

int x1,yp1,x2,y2;


void br_line(){

int dx,dy;

dx=x2-x1;
dy=y2-yp1;


int p;
p=2*dy-dx;

glClear(GL_COLOR_BUFFER_BIT);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,200,0,200);

glPointSize(1.0);
glBegin(GL_POINTS);
glColor3f(0,1,1);

while(x1<=x2)
{
glVertex2f(x1,yp1);

x1=x1+1;

if(p>0)
{ 
  yp1=yp1+1;
  p=p+2*dy-2*dx;
}
else{
p=p+2*dy;
}

}
glEnd();

glFlush();
}

int main(int argc,char** argv){
glutInit(&argc,argv);

//double x1,y1,x2,y2;
cout<<"                            x1: ";
cin>>x1;
cout<<"                            y1: ";
cin>>yp1;
cout<<"                            x2: ";
cin>>x2;
cout<<"                            y2: ";
cin>>y2;

if(x1>x2 || yp1>y2){
cout<<"Invalid Points \n";
return 0;
}


glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(500,500);
glutCreateWindow("BRESENHAM");
glutDisplayFunc(br_line);
glutMainLoop();

return 0;
}
