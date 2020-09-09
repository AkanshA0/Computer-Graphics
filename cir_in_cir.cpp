#include<GL/glut.h>
#include<GL/gl.h>
#include<cmath>

void draw(void){

glClear(GL_COLOR_BUFFER_BIT);

float t1,t2,t3,t4,t5,t6;

//glPointSize(2);
 glBegin(GL_POLYGON);
 glColor3f(0,1,0);
 for(int i=0;i<360;i++)
  {
  glVertex3f(200+150*cos(3.14159*i/180),200+150*sin(3.14159*i/180),0);
  
}  
 
 glEnd();

//glPointSize(2);
 glBegin(GL_POLYGON);
 glColor3f(0,0,1);
 for(int i=0;i<360;i++)
  {
  glVertex3f(200+130*cos(3.14159*i/180),200+130*sin(3.14159*i/180),0);
  
}  
 
 glEnd();

//glPointSize(2);
 glBegin(GL_POLYGON);
 glColor3f(0,1,1);
 for(int i=0;i<360;i++)
  {
  glVertex3f(200+110*cos(3.14159*i/180),200+110*sin(3.14159*i/180),0);
  
}  
 
 glEnd();


 glBegin(GL_POLYGON);
 glColor3f(1,1,0);
 for(int i=0;i<360;i++)
  {
  glVertex3f(200+90*cos(3.14159*i/180),200+90*sin(3.14159*i/180),0);
  
}
glEnd();
  
glBegin(GL_POLYGON);
glColor3f(1,0,1);
 for(int i=0;i<360;i++)
  {
  glVertex3f(200+70*cos(3.14159*i/180),200+70*sin(3.14159*i/180),0);
  
}
glEnd();


glBegin(GL_POLYGON);
 glColor3f(0,1,1);
 for(int i=0;i<360;i++)
  {
  glVertex3f(200+50*cos(3.14159*i/180),200+50*sin(3.14159*i/180),0);
  
}
glEnd();


glBegin(GL_POLYGON);
 glColor3f(1,1,0);
 for(int i=0;i<360;i++)
  {
  glVertex3f(200+30*cos(3.14159*i/180),200+30*sin(3.14159*i/180),0);
  
}
glEnd();
  

  
  
//glPointSize(2);
 glBegin(GL_POLYGON);
 glColor3f(1,0,1);
 for(int i=0;i<360;i++)
  {
  glVertex3f(200+90*cos(3.14159*i/180),200+90*sin(3.14159*i/180),0);
  
}  
 
 glEnd();  

glFlush();
}

int main(int argc,char** argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(500,500);
glutCreateWindow("Triangle in circle");
//init();
//glClearColor(0,0,0,1);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,500,0,500);
glutDisplayFunc(draw);
glutMainLoop();

return 0;
}
