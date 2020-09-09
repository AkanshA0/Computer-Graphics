#include<GL/glut.h>
#include<GL/gl.h>

void drawstring()
{

//glClear(GL_COLOR_BUFFER_BIT);

char d[7]={'A','k','a','n','s','h','a'};
char *s=d;
char *c;
 glRasterPos3f(-0.1,0.4,0);
 for(c=s;*c!='\0';c++)
 { glColor3f(1,0,0);
  glutBitmapCharacter(GLUT_BITMAP_9_BY_15,*c);
 }
}


void triangle(void){

glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_LINES);
glColor3f(0,1,0);
glVertex2f(0,1);
glVertex2f(-1,0);

glEnd();
glBegin(GL_LINES);
glColor3f(0,1,0);
glVertex2f(-1,0);
glVertex2f(1,0);
glEnd();

glBegin(GL_LINES);
glColor3f(0,1,0);
glVertex2f(1,0);
glVertex2f(0,1);
glEnd();

drawstring();
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
