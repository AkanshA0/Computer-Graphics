#include<GL/glut.h>
#include<GL/gl.h>
#include<cmath>
#include <unistd.h>


int x=200,y=120;

void line(void){

glBegin(GL_LINES);
glVertex2f(200,200);
glVertex2f(x,y);
glEnd();
}

void drawstring(char v,float px,float py)
{
 glRasterPos3f(px,py,0);
 glColor3f(1,1,0);
  glutBitmapCharacter(GLUT_BITMAP_9_BY_15,v);

}

void drawstr2(char *a,float px,float py)
{
char* c=a;
 glRasterPos3f(px,py,0);
 for(int i=0;i<=1;c++)
 { i++;glColor3f(1,1,0);
  glutBitmapCharacter(GLUT_BITMAP_9_BY_15,*c);
 }

}


void draw2(void){

glClear(GL_COLOR_BUFFER_BIT);

//glPointSize(2);
 glColor3f(1,1,0);
 glBegin(GL_POINTS);
 for(int i=0;i<360;i++)
  {  
  glVertex3f(200+150*cos(3.14159*i/180),200+150*sin(3.14159*i/180),0);
}
glEnd();
 
char tm[9]={'3','2','1','9','8','7','6','5','4'};
char ar[3][2]={{'1','2'},{'1','1'},{'1','0'}};
int j=0,k=-1;
 for(int i=0;i<360;i++)
  {
  if(i%30==0){
	if(k==0 || k==1 || k==2)
{
        drawstr2(ar[k],200+125*cos(3.14159*i/180),200+125*sin(3.14159*i/180));
k++; }else{       drawstring(tm[j],200+125*cos(3.14159*i/180),200+125*sin(3.14159*i/180));

if(tm[j]=='1')
{k++;}
j++;
}
}
}
line();
glFlush();
}

void m(){
while(1){
 for(int i=360;i>0;i--)
  {
  x=200+100*cos(3.14159*i/180);y=200+100*sin(3.14159*i/180);
draw2();
usleep(100000);
}
}
}


void draw(){
draw2();
m();
}

int main(int argc,char** argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE);
glutInitWindowSize(500,500);
glutCreateWindow("CLOCK");
//init();
//glClearColor(0,0,0,1);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0,500,0,500);
glutDisplayFunc(draw);
glutMainLoop();

return 0;
}
