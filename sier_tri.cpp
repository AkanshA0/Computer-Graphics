#include<GL/glut.h>
#include<GL/gl.h>
#include<cmath>


void draw(float x1, float x2, float x3, float y1, float y2, float y3,int c1,int c2)
{
glColor3f(c1, c2, 1);
glBegin(GL_TRIANGLES);
{
    glVertex3f( (x1+x3)/2, (y1+y3)/2, 0);

    glVertex3f( (x2+x3)/2, (y2+y3)/2, 0);

    glVertex3f( (x2+x1)/2, (y2+y1)/2, 0);
}

glEnd();
}

void triangle(float x1, float x2, float x3, float y1, float y2, float y3,int c1,int c2){

draw(x1, x2, x3, y1, y2, y3,c1,c2);

if((x2-x1)>2 && (x3-x1)>2)
{

triangle((x1+x3)/2, (x3+x2)/2, x3, (y1+y3)/2, (y3+y2)/2, y3,0,1);
triangle(x1, (x1+x2)/2, (x1+x3)/2, y1, (y1+y2)/2, (y1+y3)/2,1,0);
triangle((x1+x2)/2, x2, (x3+x2)/2, (y1+y2)/2, y2, (y3+y2)/2,0,0);
}

}


void st(void){

glClear(GL_COLOR_BUFFER_BIT);

//triangle(0,200,400,0,200,0,1,1);

glBegin(GL_TRIANGLES);
glColor3f(1,1,1);
glVertex2f(0,0);
glVertex2f(200,200);
glVertex2f(400,0);
glEnd();
triangle(0,200,400,0,200,0,1,1);

glFlush();
}

int main(int argc,char** argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(1000,1000);
glutCreateWindow("akansha sierpinski triangle");
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-20,400,-20,300);

glutDisplayFunc(st);
glutMainLoop();

return 0;
}
