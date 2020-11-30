#include<GL/glut.h>
#include<GL/gl.h>
#include<cmath>

void draw(float x1, float y1,float x2, float y2)
{

glBegin(GL_LINES);
glColor3f(1,1,1);
glVertex2f(x1,y1);
glVertex2f(x2,y2);
glEnd();
}

void lines(float x1, float y1,float x2,float y2){

draw(x1, y1,x2,y2);

if(x1<500 && x1 > -500 &&  y1 > -500 && y2 <500)
{

lines(x2,y2,x2+50,y2+50);
lines(x2,y2,x2-50,y2+50);

}

}


void st(void){

glClear(GL_COLOR_BUFFER_BIT);

lines(400,0,400,200);

glFlush();
}

int main(int argc,char** argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(1000,1000);
glutCreateWindow("akansha viva Q2");
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-500,500,-500,500);

glutDisplayFunc(st);
glutMainLoop();

return 0;
}

