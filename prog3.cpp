#include<GL/glut.h>
#include<GL/gl.h>
#include<cmath>

void draw(void){

glClear(GL_COLOR_BUFFER_BIT);


glPointSize(2);
 glBegin(GL_POINTS);
 for(int i=0;i<360;i++)
  {
  glVertex3f(150+50*cos(3.14159*i/180),100+50*sin(3.14159*i/180),0);
  
}  
 
 glEnd();

glPointSize(2);
 glBegin(GL_POINTS);
 for(int i=0;i<360;i++)
  {
  glVertex3f(350+50*cos(3.14159*i/180),100+50*sin(3.14159*i/180),0);
  
}  
 
 glEnd();
 

 glBegin(GL_LINES);
  glVertex2f(100,50);
  glVertex2f(100,150);
 glEnd();
  
 glBegin(GL_LINES);
  glVertex2f(0,150);
  glVertex2f(500,150);
 glEnd();

 glBegin(GL_LINES);
  glVertex2f(200,150);
  glVertex2f(200,50);
 glEnd();
 
glBegin(GL_LINES);
  glVertex2f(200,50);
  glVertex2f(100,50);
 glEnd();

 glBegin(GL_LINES);
  glVertex2f(300,50);
  glVertex2f(300,150);
 glEnd();
 
glBegin(GL_LINES);
  glVertex2f(300,50);
  glVertex2f(400,50);
 glEnd();

 glBegin(GL_LINES);
  glVertex2f(400,50);
  glVertex2f(400,150);
 glEnd();


 glBegin(GL_LINES);
  glVertex2f(0,150);
  glVertex2f(50,250);
 glEnd();

 glBegin(GL_LINES);
  glVertex2f(50,250);
  glVertex2f(100,150);
 glEnd();

 glBegin(GL_LINES);
  glVertex2f(200,150);
  glVertex2f(250,250);
 glEnd();


 glBegin(GL_LINES);
  glVertex2f(250,250);
  glVertex2f(300,150);
 glEnd();

 glBegin(GL_LINES);
  glVertex2f(400,150);
  glVertex2f(450,250);
 glEnd();

 glBegin(GL_LINES);
  glVertex2f(450,250);
  glVertex2f(500,150);
 glEnd();

glFlush();
}

int main(int argc,char** argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(500,500);
glutCreateWindow("PATTERN");
//init();
//glClearColor(0,0,0,1);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,500,0,500);
glutDisplayFunc(draw);
glutMainLoop();

return 0;
}
