#include<GL/glut.h>
#include<GL/gl.h>
#include<cmath>


void circle(void){

glClear(GL_COLOR_BUFFER_BIT);
/*
glBegin(GL_TRIANGLES);
glColor3f(0,1,0);
glVertex2f(0,1);
glVertex2f(-1,0);
glVertex2f(1,0);
*/

 glBegin(GL_POINTS);
 for(int i=0;i<180;++i)
  {
  glVertex3f(cos(2*3.14159*i/180),sin(2*3.14159*i/180),0);
    
 }  
 
 glEnd();

glFlush();
}

int main(int argc,char** argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(200,200);
glutCreateWindow("Circle");
//init();
glutDisplayFunc(circle);
glutMainLoop();

return 0;
}
