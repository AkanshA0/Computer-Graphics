#include<GL/glut.h>
#include<GL/gl.h>
#include<cmath>

void draw(void){

glClear(GL_COLOR_BUFFER_BIT);

float x=250,r=5;

glPointSize(1);
for(int j=10;j>0;j--)
{
 glBegin(GL_POINTS);
 for(int i=0;i<360;i++)
  {
  glVertex3f(x+r*cos(3.14159*i/180),250+r*sin(3.14159*i/180),0);  
  }  
 glEnd();

if(j>0){
x=x-j;
r=r+j;
}
else{
x=x+j;
r=r+j;
}

}

for(int j=1;j<10;j++)
{
 glBegin(GL_POINTS);
 for(int i=0;i<360;i++)
  {
  glVertex3f(x+r*cos(3.14159*i/180),250+r*sin(3.14159*i/180),0);
  }
 glEnd();

if(j>0){
x=x+j;
r=r+j;
}
else{
x=x+j;
r=r+j;
}

}


glFlush();
}

int main(int argc,char** argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(500,500);
glutCreateWindow("Assignment Circles");
//init();
//glClearColor(0,0,0,1);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,500,0,500);
glutDisplayFunc(draw);
glutMainLoop();

return 0;
}
