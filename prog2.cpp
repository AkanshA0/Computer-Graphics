#include<GL/glut.h>
#include<GL/gl.h>
#include<cmath>

void draw(void){

glClear(GL_COLOR_BUFFER_BIT);


glPointSize(2);
 glBegin(GL_POINTS);
 for(int i=0;i<360;i++)
  {
  glVertex3d(200+150*cos(3.14159*i/180),200+150*sin(3.14159*i/180),5);
  
}  
 glEnd();
  

glFlush();
}

int main(int argc,char** argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(500,500);
glutCreateWindow("SMILE");
//init();
//glClearColor(0,0,0,1);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,500,0,500);
glutDisplayFunc(draw);
glutMainLoop();

return 0;
}
