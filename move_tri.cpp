#include<GL/glut.h>
#include<GL/gl.h>
#include<time.h>
#include <unistd.h>

void delay(int number_of_seconds) 
{ 
    int milli_seconds = 1000 * number_of_seconds; 
    clock_t start_time = clock(); 
    while (clock() < start_time + milli_seconds) 
        ; 
} 

int x=0,y=0;

void triangle(void){

glClear(GL_COLOR_BUFFER_BIT);

glBegin(GL_TRIANGLES);
//glColor3f(r,g,b);
glVertex2f(10+x,10+y);
glVertex2f(40+x,40+y);
glVertex2f(70+x,10+y);
glEnd();


glFlush();
}

void m(){
for(int i=0;i<=20;i++)
{
//delay(100);  //or sleep or usleep
usleep(100000);
x=x+5;
y=y+0;
triangle();
}

}



int main(int argc,char** argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(500,500);
glutCreateWindow("Moving Triangle");
//init();
//drawstring();
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,500,0,500);

glutDisplayFunc(m);
glutMainLoop();

return 0;
}
