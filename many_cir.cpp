#include<GL/glut.h>
#include<GL/gl.h>
#include<cmath>

int x1,yp1,x2,y2;

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

//glPointSize(2.0);
glBegin(GL_POINTS);
//glColor3f(0,1,0);
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


void draw(void){

glClear(GL_COLOR_BUFFER_BIT);


//glPointSize(1);
// glBegin(GL_POINTS);
for(int i=0;i<360;i++)
  {
x1=200+150*cos(3.14159*i/180);
yp1=200+150*sin(3.14159*i/180);
  
x2=200+130*cos(3.14159*i/180);
y2=200+130*sin(3.14159*i/180);

if(i%2==0)
{
glColor3f(0,1,0);
 glBegin(GL_LINES);
  glVertex2f(x1,yp1);
  glVertex2f(x2,y2);
 glEnd();
}

x1=200+110*cos(3.14159*(i+4)/180);
yp1=200+110*sin(3.14159*(i+4)/180);

if(i%2==0){
glColor3f(0,0,1);
 glBegin(GL_LINES);
  glVertex2f(x1,yp1);
  glVertex2f(x2,y2);
 glEnd();}
//dda_line();
}  

for(int i=0;i<360;i++)
  {
x1=200+110*cos(3.14159*i/180);
yp1=200+110*sin(3.14159*i/180);
  
x2=200+90*cos(3.14159*i/180);
y2=200+90*sin(3.14159*i/180);

if(i%4==0)
{
glColor3f(1,1,1);
 glBegin(GL_LINES);
  glVertex2f(x1,yp1);
  glVertex2f(x2,y2);
 glEnd();
}

/*
x1=200+70*cos(3.14159*(i+4)/180);
yp1=200+70*sin(3.14159*(i+4)/180);

if(i%2==0){
glColor3f(0,1,1);
 glBegin(GL_LINES);
  glVertex2f(x1,yp1);
  glVertex2f(x2,y2);
 glEnd();}*/
//dda_line();
}  

for(int i=0;i<360;i++)
 {
x1=200+110*cos(3.14159*i/180);
yp1=200+110*sin(3.14159*i/180);
  
x2=200+90*cos(3.14159*(i+40)/180);
y2=200+90*sin(3.14159*(i+40)/180);

if(i%4==0)
{
glColor3f(1,1,1);
 glBegin(GL_LINES);
  glVertex2f(x1,yp1);
  glVertex2f(x2,y2);
 glEnd();
}
}


for(int i=0;i<360;i++)
  {
x1=200+90*cos(3.14159*i/180);
yp1=200+90*sin(3.14159*i/180);
  
x2=200+70*cos(3.14159*i/180);
y2=200+70*sin(3.14159*i/180);

if(i%2==0)
{
glColor3f(1,0,0);
 glBegin(GL_LINES);
  glVertex2f(x1,yp1);
  glVertex2f(x2,y2);
 glEnd();
}

x1=200+40*cos(3.14159*(i+4)/180);
yp1=200+40*sin(3.14159*(i+4)/180);

if(i%4==0){
glColor3f(0,1,1);
 glBegin(GL_LINES);
  glVertex2f(x1,yp1);
  glVertex2f(x2,y2);
 glEnd();}
//dda_line();
}  


for(int i=0;i<360;i++)
 {
x1=200+70*cos(3.14159*i/180);
yp1=200+70*sin(3.14159*i/180);
  
x2=200+40*cos(3.14159*(i+40)/180);
y2=200+40*sin(3.14159*(i+40)/180);

if(i%4==0)
{
glColor3f(0,1,1);
 glBegin(GL_LINES);
  glVertex2f(x1,yp1);
  glVertex2f(x2,y2);
 glEnd();
}

x1=200+10*cos(3.14159*(i+20)/180);
yp1=200+10*sin(3.14159*(i+20)/180);

if(i%4==0)
{
glColor3f(1,1,0);
 glBegin(GL_LINES);
  glVertex2f(x1,yp1);
  glVertex2f(x2,y2);
 glEnd();
}

}


 
glFlush();
}

int main(int argc,char** argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(500,500);
glutCreateWindow("CIRCLES");
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,500,0,500);
glutDisplayFunc(draw);
glutMainLoop();

return 0;
}
