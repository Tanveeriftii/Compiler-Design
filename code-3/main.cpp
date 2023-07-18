#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>


void init(void)
{
  glClearColor(0.0,0.0,0.0,0.0);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  glOrtho(-50,50,-50,25,-25,5);
  //gluOrtho2D(0.0,300.0,0.0,300.0);
}


void ship(){
    //Boat1
    glColor3f( 0.5 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(-5 ,-30);
   glVertex2f(10 ,-30);
   glVertex2f(15 ,-25);
   glVertex2f(-5 ,-25);
   glEnd();

   glColor3f( 0.0 ,0.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(-3 ,-25);
   glVertex2f(11 ,-25);
   glVertex2f(9 ,-22);
   glVertex2f(-3 ,-22);
   glEnd();

   glColor3f( 0.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(-1.5 ,-24.5);
   glVertex2f(0.5 ,-24.5);
   glVertex2f(0.5 ,-22.5);
   glVertex2f(-1.5 ,-22.5);
   glEnd();

   glColor3f( 1.0 ,1.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(2.5 ,-24.5);
   glVertex2f(4.5 ,-24.5);
   glVertex2f(4.5 ,-22.5);
   glVertex2f(2.5 ,-22.5);
   glEnd();

   glColor3f( 0.0 ,1.0, 1.0);
   glBegin(GL_POLYGON);
   glVertex2f(6.5 ,-24.5);
   glVertex2f(8.5 ,-24.5);
   glVertex2f(8.5 ,-22.5);
   glVertex2f(6.5 ,-22.5);
   glEnd();

   glColor3f( 0.0 ,1.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(-1.5 ,-22);
   glVertex2f(7.5 ,-22);
   glVertex2f(6 ,-19);
   glVertex2f(-1.5 ,-19);
   glEnd();

   glColor3f( 1.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(-0.5 ,-21.5);
   glVertex2f(1.5 ,-21.5);
   glVertex2f(1.5 ,-19.5);
   glVertex2f(-0.5 ,-19.5);
   glEnd();

   glColor3f( 1.0 ,0.0, 0.0);
   glBegin(GL_POLYGON);
   glVertex2f(3 ,-21.5);
   glVertex2f(5 ,-21.5);
   glVertex2f(5 ,-19.5);
   glVertex2f(3 ,-19.5);
   glEnd();


}

void Display()
{  glClear(GL_COLOR_BUFFER_BIT);
{



	ship();
}
	glutSwapBuffers();
}




int main(int argc,char **argv){
    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(30,0);
    glutInitWindowSize(1000,650);
    glutCreateWindow("ship");
    init();

    glutDisplayFunc(Display);

    glutMainLoop();
    return 0;
}
