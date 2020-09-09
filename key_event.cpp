#include<GL/glut.h>
#include<GL/gl.h>

int r=1,g=1,b=1;
void ch_color(unsigned char key,int x,int y)
{
    switch (key) {
    case 'b':
        r = 0;
        g = 0;
        b = 1;
        break;
    case 'r':
        r = 1;
        g = 0;
        b = 0;
        break;
    case 'g':
        r = 0;
        g = 1;
        b = 0;
        break;
    }
    glutPostRedisplay();
}

void triangle(void){

glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_TRIANGLES);
glColor3f(r,g,b);
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
glutKeyboardFunc(ch_color);
glutMainLoop();

return 0;
}
