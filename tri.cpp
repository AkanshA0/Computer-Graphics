#include<GL/glut.h>
#include<GL/gl.h>

void triangle(void){

glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_TRIANGLES);
glColor3f(0,1,0);
glVertex2f(0,1);
glVertex2f(-1,0);
glVertex2f(1,0);
glEnd();

glFlush();
}

int main(int argc,char** argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(500,500);
glutCreateWindow("Triangle");
//init();
//drawstring();
glutDisplayFunc(triangle);
glutMainLoop();

return 0;
}
