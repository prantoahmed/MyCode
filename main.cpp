#include<windows.h>
#include<GL/glut.h>
#include<bits/stdc++.h>

using namespace std;

void draw_circle(double x, double y, double radius)
{

    double twopi=2*3.14159; //variable value
    glBegin(GL_POLYGON);
    glVertex2f(x,y); //center
    for(int i=0; i<=1000; i++)
    {
        double tmpx=x+(radius*cos(i*twopi/1000));
        double tmpy=y+(radius*sin(i*twopi/1000));
        glVertex2f(tmpx,tmpy);
        }
        glEnd();
}
static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glColor3d(1.0,0.7,1.0);
    draw_circle(60,60,40);

    glColor3d(1.0,1.0,1.0);
    draw_circle(60,60,40);

    glColor3d(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2d(12,60);
    glVertex2d(10,58);
    glVertex2d(100,58);
    glVertex2d(102,60);
    glEnd();   //chala_down_joint

    glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(25,90);
    glVertex2d(27,92);
    glVertex2d(117,92);
    glVertex2d(115,90);
    glEnd();   //chala-top_joint

    glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(25,92);
    glVertex2d(10,58);
    glVertex2d(12,58);
    glVertex2d(27,92);
    glEnd();    //chala_left_top_joint

    glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(100,58);
    glVertex2d(102,58);
    glVertex2d(117,92);
    glVertex2d(114,90);
    glEnd();   //chala_middle_top_joint

    glColor3d(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2d(15,58);
    glVertex2d(17,58);
    glVertex2d(17,6);
    glVertex2d(15,6);
    glEnd();    //home_left_piller

    glColor3d(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2d(17,6);
    glVertex2d(101,6);
    glVertex2d(101,8);
    glVertex2d(17,8);
    glEnd();  //ground_main_joint

    glColor3d(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2d(101,6);
    glVertex2d(103,6);
    glVertex2d(103,59);
    glVertex2d(101,59);
    glEnd();  //home_middle_joint

    glColor3d(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2d(102,8);
    glVertex2d(103,6);
    glVertex2d(128,10);
    glVertex2d(128,12);
    glEnd();   //ground_right_joint

    glColor3d(0.0,0.0,0.0);
    glBegin(GL_POLYGON);
    glVertex2d(126,10);
    glVertex2d(128,11);
    glVertex2d(128,63);
    glVertex2d(126,62);
    glEnd();  //home_right-piller

    glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(100,58);
    glVertex2d(132,62);
    glVertex2d(130,64);
    glVertex2d(100,60);
    glEnd();     //chala_right_joint

    glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(132,62);
    glVertex2d(117,92);
    glVertex2d(116,90);
    glVertex2d(130,62);
    glEnd(); //chala_right_side

     glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(30,92);
    glVertex2d(15,58);
    glVertex2d(16,58);
    glVertex2d(31,92);
    glEnd(); //chala

     glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(35,92);
    glVertex2d(20,58);
    glVertex2d(21,58);
    glVertex2d(36,92);
    glEnd(); //chala

     glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(40,92);
    glVertex2d(25,58);
    glVertex2d(26,58);
    glVertex2d(41,92);
    glEnd(); //chala

       glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(45,92);
    glVertex2d(30,58);
    glVertex2d(31,58);
    glVertex2d(46,92);
    glEnd(); //chala

        glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(50,92);
    glVertex2d(35,58);
    glVertex2d(36,58);
    glVertex2d(51,92);
    glEnd(); //chala


        glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(55,92);
    glVertex2d(40,58);
    glVertex2d(41,58);
    glVertex2d(56,92);
    glEnd(); //chala

        glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(60,92);
    glVertex2d(45,58);
    glVertex2d(46,58);
    glVertex2d(61,92);
    glEnd(); //chala

        glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(65,92);
    glVertex2d(50,58);
    glVertex2d(51,58);
    glVertex2d(66,92);
    glEnd(); //chala

        glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(70,92);
    glVertex2d(55,58);
    glVertex2d(56,58);
    glVertex2d(71,92);
    glEnd(); //chala

      glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(75,92);
    glVertex2d(60,58);
    glVertex2d(61,58);
    glVertex2d(76,92);
    glEnd(); //chala


     glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(80,92);
    glVertex2d(65,58);
    glVertex2d(66,58);
    glVertex2d(81,92);
    glEnd(); //chala


     glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(85,92);
    glVertex2d(70,58);
    glVertex2d(71,58);
    glVertex2d(86,92);
    glEnd(); //chala

    glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(90,92);
    glVertex2d(75,58);
    glVertex2d(76,58);
    glVertex2d(91,92);
    glEnd(); //chala

    glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(95,92);
    glVertex2d(80,58);
    glVertex2d(81,58);
    glVertex2d(96,92);
    glEnd(); //chala

    glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(100,92);
    glVertex2d(85,58);
    glVertex2d(86,58);
    glVertex2d(101,92);
    glEnd(); //chala

    glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(105,92);
    glVertex2d(90,58);
    glVertex2d(91,58);
    glVertex2d(106,92);
    glEnd(); //chala


    glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(110,92);
    glVertex2d(95,58);
    glVertex2d(96,58);
    glVertex2d(111,92);
    glEnd();//chala

    glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(45,8);
    glVertex2d(47,8);
    glVertex2d(47,45);
    glVertex2d(45,45);
    glEnd();//door_left_side

    glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(70,8);
    glVertex2d(72,8);
    glVertex2d(72,45);
    glVertex2d(70,45);
    glEnd(); //door_right_side

    glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(70,45);
    glVertex2d(70,43);
    glVertex2d(47,43);
    glVertex2d(47,45);
    glEnd(); //door_top_point

       glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(35,41.5);
    glVertex2d(35,39);
    glVertex2d(23.5,39);
    glVertex2d(23.5,41.5);
    glEnd();//left_window,top point

     glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(35,16);
    glVertex2d(36,16);
    glVertex2d(36,41.5);
    glVertex2d(35,41.5);
    glEnd(); //window,left_side,right point

     glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(22.5,16);
    glVertex2d(23.5,16);
    glVertex2d(23.5,41.5);
    glVertex2d(22.5,41.5);
    glEnd();//window,left point

    glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(96.5,42);
    glVertex2d(96.5,40);
    glVertex2d(82.5,40);
    glVertex2d(82.5,42);
    glEnd(); //window_right_top

    glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(82.5,16);
    glVertex2d(83.5,16);
    glVertex2d(83.5,40);
    glVertex2d(82.5,40);
    glEnd(); //right_window_left_side

    glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(95.5,16);
    glVertex2d(96.5,16);
    glVertex2d(96.5,40);
    glVertex2d(95.5,40);
    glEnd(); //right_window_right_side



       glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(35,18);
    glVertex2d(35,16);
    glVertex2d(23.5,16);
    glVertex2d(23.5,18);
    glEnd();//left_window,down point


     glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(96.5,18);
    glVertex2d(96.5,16);
    glVertex2d(82.5,16);
    glVertex2d(82.5,18);
    glEnd(); //window_right_down


     glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(96.5,21);
    glVertex2d(96.5,20);
    glVertex2d(82.5,20);
    glVertex2d(82.5,21);
    glEnd(); //window_right_chala

       glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(96.5,25);
    glVertex2d(96.5,24);
    glVertex2d(82.5,24);
    glVertex2d(82.5,25);
    glEnd(); //window_right_chala


       glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(96.5,29);
    glVertex2d(96.5,28);
    glVertex2d(82.5,28);
    glVertex2d(82.5,29);
    glEnd(); //window_right_chala

          glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(96.5,33);
    glVertex2d(96.5,32);
    glVertex2d(82.5,32);
    glVertex2d(82.5,33);
    glEnd(); //window_right_chala

       glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(96.5,37);
    glVertex2d(96.5,36);
    glVertex2d(82.5,36);
    glVertex2d(82.5,37);
    glEnd(); //window_right_chala


       glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(35,21);
    glVertex2d(35,20);
    glVertex2d(23.5,20);
    glVertex2d(23.5,21);
    glEnd();//left_window,chala

     glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(35,25);
    glVertex2d(35,24);
    glVertex2d(23.5,24);
    glVertex2d(23.5,25);
    glEnd();//left_window,chala

     glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(35,29);
    glVertex2d(35,28);
    glVertex2d(23.5,28);
    glVertex2d(23.5,29);
    glEnd();//left_window,chala


     glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(35,33);
    glVertex2d(35,32);
    glVertex2d(23.5,32);
    glVertex2d(23.5,33);
    glEnd();//left_window,chala


     glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(35,37);
    glVertex2d(35,36);
    glVertex2d(23.5,36);
    glVertex2d(23.5,37);
    glEnd();//left_window,chala

     glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(26,16);
    glVertex2d(26.5,16);
    glVertex2d(26.5,41.5);
    glVertex2d(26,41.5);
    glEnd();//window,left chala_stand

     glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(29,16);
    glVertex2d(29.5,16);
    glVertex2d(29.5,41.5);
    glVertex2d(29,41.5);
    glEnd();//window,left chala_stand

    glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(32,16);
    glVertex2d(32.5,16);
    glVertex2d(32.5,41.5);
    glVertex2d(32,41.5);
    glEnd();//window,left chala_stand

    glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(86,16);
    glVertex2d(86.5,16);
    glVertex2d(86.5,40);
    glVertex2d(86,40);
    glEnd(); //right_window_chala_stand

     glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(89,16);
    glVertex2d(89.5,16);
    glVertex2d(89.5,40);
    glVertex2d(89,40);
    glEnd(); //right_window_chala_stand

         glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(92,16);
    glVertex2d(92.5,16);
    glVertex2d(92.5,40);
    glVertex2d(92,40);
    glEnd(); //right_window_chala_stand

     glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(67,25);
    glVertex2d(69,25);
    glVertex2d(69,30);
    glVertex2d(67,30);
    glEnd(); //door_right_side

       glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(119,76.5);
    glVertex2d(119,78.5);
    glVertex2d(111.5,77.5);
    glVertex2d(111.5,75.5);
    glEnd(); //window_right_top

        glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(119,65.5);
    glVertex2d(119,67.5);
    glVertex2d(111.5,66.5);
    glVertex2d(111.5,64.5);
    glEnd(); //window_right_top

     glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(113,65.5);
    glVertex2d(113,76.5);
    glVertex2d(111.5,76.5);
    glVertex2d(111.5,65.5);
    glEnd(); //window_right_top

     glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(120,66);
    glVertex2d(120,78.5);
    glVertex2d(118.5,78.5);
    glVertex2d(118.5,65.5);
    glEnd(); //window_right_top

      glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(116.5,66);
    glVertex2d(116.5,78);
    glVertex2d(115.5,78);
    glVertex2d(115.5,65.5);
    glEnd(); //window_right_top


         glColor3d(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2d(119,71.5);
    glVertex2d(119,72.5);
    glVertex2d(111.5,71.5);
    glVertex2d(111.5,70.5);
    glEnd(); //window_right_top


    glutSwapBuffers();
    }


    int main (int argc,char *argv[])
    {


    glutInit(&argc,argv);
    glutInitWindowSize(1000,1000);
    glutInitWindowPosition(20,20);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("clock");
    glOrtho(0,160,0,160,0,160);
    glutDisplayFunc(display);
    glClearColor(1,1,1,1);
    glutMainLoop();

    return EXIT_SUCCESS;

    }

