#include<GL/glut.h>
#include<GL/gl.h>
#include<iostream>  
#include<cmath>
#include<string>  
using namespace std;

int x1=0,yy=0;

void characterDraw(void){

glClear(GL_COLOR_BUFFER_BIT);

glTranslatef(x1, yy, 0);

glColor3f(1,1,0);
glBegin(GL_POLYGON);
 for(int i=0;i<360;i++)
  {
  glVertex3f(15*cos(3.14159*i/180),65+15*sin(3.14159*i/180),0);

}

 glEnd();


//glTranslatef(x1, y1, 0);
glBegin(GL_TRIANGLES);
glColor3f(1,0,0);
glVertex2f(0,50);
glVertex2f(-30,0);
glVertex2f(30,0);
glEnd();


glBegin(GL_LINES);
glColor3f(1,1,0);
glVertex2f(-20,-20);
glVertex2f(-5,0);
glEnd();


glBegin(GL_LINES);
glColor3f(1,1,0);
glVertex2f(20,-20);
glVertex2f(5,0);
glEnd();


glFlush();
}


//void ch_color(unsigned char key,int x,int y)
void ch_move(int key,int x,int y)
{
    switch (key) {
    case GLUT_KEY_LEFT:
        x1 = x1-10;yy=0;
        break;
    case GLUT_KEY_RIGHT:
        x1 = x1+10;yy=0;
        break;
    case GLUT_KEY_UP:
        yy = yy+10;x1=0;
        break;
    case GLUT_KEY_DOWN:
        yy = yy-10;x1=0;
        break;
    }
    glutPostRedisplay();
}



int main(int argc,char** argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(500,500);
glutCreateWindow("CHARACTER MOTION");
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-300,300,-300,300);
glutDisplayFunc(characterDraw);
glutSpecialFunc(ch_move);
glutMainLoop();

cout<<"final location: x= "<<x1<<" , y= "<<y1;

return 0;
}
