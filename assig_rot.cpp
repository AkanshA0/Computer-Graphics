#include<GL/glut.h>
#include<GL/gl.h>

using namespace std;

void rotate_draw(void){

glClear(GL_COLOR_BUFFER_BIT);
glColor3f(1,1,1);
 glBegin(GL_POLYGON);
  glVertex2f(1,0);
  glVertex2f(0,0);
  glVertex2f(0,1);
  glVertex2f(1,1);
 glEnd();

glTranslatef(1,0,0);
glRotatef(45, 0, 0, 1);

glColor3f(1,0,0);
 glBegin(GL_POLYGON);
  glVertex2f(1,0);
  glVertex2f(0,0);
  glVertex2f(0,1);
  glVertex2f(1,1);
 glEnd();

glFlush();
}



int main(int argc,char** argv){

glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(500,500);
glutCreateWindow("rotate");
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-4,4,-4,4);

glutDisplayFunc(rotate_draw);

glutMainLoop();

return 0;
}
