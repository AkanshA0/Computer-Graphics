#include<GL/glut.h>
#include<GL/gl.h>
#include<cmath>
#include<iostream>
using namespace std;

//float x1,yp1,x2,y2;
float arr1[8][2];
float arr2[8][2];

void dda_line(int c,float x1,float yp1,float x2,float y2){

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

//glClear(GL_COLOR_BUFFER_BIT);
int temp;
if(c==3){
temp=step/10;
c=1;
}
else{
temp=step/8;
}
int tc=0;

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

if(c!=0 && tc!=8 && i%temp==0){
if(c==1)
{arr1[tc][0]=round(x1);
arr1[tc][1]=round(yp1);
tc++;
}
else if(c==2)
{arr2[tc][0]=round(x1);
arr2[tc][1]=round(yp1);
tc++;
}
}
}
glEnd();

glFlush();
}

void d(){

glClear(GL_COLOR_BUFFER_BIT);
float t1,t2,t3,t4,t5,t6;
 glBegin(GL_POINTS);
 for(int i=0;i<360;i++)
  {
  glVertex3f(200+150*cos(3.14159*i/180),200+150*sin(3.14159*i/180),0);

   if(i==90)
        {
        t1=200+150*cos(3.14159*i/180.0);
        t2=200+150*sin(3.14159*i/180.0);
        }

  else if(i==225)
        {
        t3=200+150*cos(3.14159*i/180.0);
        t4=200+150*sin(3.14159*i/180.0);
        }

  else if(i==315)
        {
        t5=200+150*cos(3.14159*i/180.0);
        t6=200+150*sin(3.14159*i/180.0);
        }

}

dda_line(1,t1,t2,t3,t4);
dda_line(0,t5,t6,t3,t4);

float x1,yp1,x2,y2;
x1=t1;
yp1=t2;
x2=(t3+t5)/2;
y2=(t4+t6)/2;
dda_line(2,x1,yp1,x2,y2);

for(int j=0;j<8;j++){
x1=arr1[j][0];
yp1=arr1[j][1];
x2=arr2[j][0];
y2=arr2[j][1];

glColor3f(0,1,1);
glBegin(GL_LINES);
glVertex2f(x1,yp1);
glVertex2f(x2,y2);
glEnd();
}
dda_line(3,t1,t2,t5,t6);
for(int j=0;j<8;j++){
x1=arr1[j][0];
yp1=arr1[j][1];
x2=arr2[j][0];
y2=arr2[j][1];

glColor3f(1,0,0);
glBegin(GL_LINES);
glVertex2f(x1,yp1);
glVertex2f(x2,y2);

glEnd();
}

glFlush();
}

int main(int argc,char** argv){
glutInit(&argc,argv);

glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(500,500);
glutCreateWindow("tri in circle");

glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,500,0,500);

glutDisplayFunc(d);
glutMainLoop();

return 0;
}
