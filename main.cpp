#include <iostream>
#include <stdlib.h>
#include<GL/gl.h>
#include <GL/glut.h>
#include<math.h>
#include<cstring>
#include<windows.h>
#include<mmsystem.h>

using namespace std;
float t = 0.0f;
float c = 0.0f;
float c1 = 0.0f;
float s=0.0f;
float s1=0.0f;
float _angle=90;
float Y_trans=-60;
int day=1;  //1 for day 0 for night
int x,y;
//int tR1=200,tR2=200,tR3=200;
//int tG1=300,tG2=300,tG3=300;
//int tY1=40,tY2=40,tY3=40;
//int round1=1;
//int r1=0,g1=1,r2=0,g2=1,r3=1,g3=1;///For color choosing

void myInit (void);
//void traffic_signal(float x,float y,float z);
//void circle(float x,float y,float z);
void myDisplay(void);
void nightsky();
//void car1();
void nightwater();
void nightgrass();
void nightroad();
void nightbuilding();
void star();
void bridge();
void daytrain();
void nightrain();
void daysky();
void daywater();
void ship();
void daygrass();
void dayroad();
void daybuilding();
void daycar();
void nightcar();
void circle(float x,float y,float z);
void update(int value);
//void car(float x,float y,float z);
void keyboardFunc(unsigned char key, int x, int y);


void daywater()
{
    //glColor3f(0/255.0, 119/255.0,170/255.0);
//    glColor3f(0.0,0.0,0.0);

    glBegin(GL_POLYGON);
    glColor3ub(34,225,225);
    glVertex2f(-640,-360);
    glVertex2f(640,-360);
    glVertex2f(640,-100);
    glVertex2f(-640,-100);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(34,225,225);
    glVertex2f(-640,-100);
    glVertex2f(640,-100);
    glVertex2f(100,230);
    glVertex2f(-100,230);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(34,225,225);
    glVertex2f(-640,230);
    glVertex2f(640,230);
    glVertex2f(640,280);
    glVertex2f(-640,280);
    glEnd();

    glBegin(GL_LINES);
        glColor3ub (0,0,0);
        glVertex2f(-640,280);
        glVertex2f(640,280);
        glEnd();
        glFlush();



}
void nightwater()
{
    //glColor3f(63/255.0, 220/255.0,228/255.0);
//    glColor3f(0.0,0.0,0.0);

    glBegin(GL_POLYGON);
    glColor3ub(0,89,179);
    glVertex2f(-640,-360);
    glVertex2f(640,-360);
    glVertex2f(640,-100);
    glVertex2f(-640,-100);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,89,179);
    glVertex2f(-640,-100);
    glVertex2f(640,-100);
    glVertex2f(100,230);
    glVertex2f(-100,230);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,89,179);
    glVertex2f(-640,230);
    glVertex2f(640,230);
    glVertex2f(640,280);
    glVertex2f(-640,280);
    glEnd();

}
void daygrass()
{

//    glColor3f(0.0,0.0,0.0);

    glBegin(GL_POLYGON);
    glColor3ub(0,255,64);
    glVertex2f(-640,-100);
    glVertex2f(-100,230);
    glVertex2f(-640,230);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,255,64);
    glVertex2f(640,-100);
    glVertex2f(100,230);
    glVertex2f(640,230);
    glEnd();

}
void nightgrass()
{

//    glColor3f(0.0,0.0,0.0);

    glBegin(GL_POLYGON);
    glColor3ub(0,190,0);
    glVertex2f(-640,-100);
    glVertex2f(-100,230);
    glVertex2f(-640,230);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,190,0);
    glVertex2f(640,-100);
    glVertex2f(100,230);
    glVertex2f(640,230);
    glEnd();

}
void dayroad()
{


    glBegin(GL_POLYGON);
    glColor3ub(73,73,73);
    glVertex2f(-640,-10);
    glVertex2f(-640,-100);
    glVertex2f(-100,230);
    glVertex2f(-140,230);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(-640,-105);
    glVertex2f(-640,-100);
    glVertex2f(-100,230);
    glVertex2f(-105,230);
    glEnd();

    //road horizontal(left)
    //upper
    glBegin(GL_POLYGON);
    glColor3ub(73,73,73);
    glVertex2f(-640,190);
    glVertex2f(-200,190);
    glVertex2f(-160,205);
    glVertex2f(-640,205);
    glEnd();





    //lower(left)
    glBegin(GL_POLYGON);
    glColor3ub(73,73,73);
    glVertex2f(-640,100);
    glVertex2f(-400,100);
    glVertex2f(-260,130);
    glVertex2f(-640,130);
    glEnd();

    //right side
    glBegin(GL_POLYGON);
    glColor3ub(73,73,73);
    glVertex2f(640,-100);
    glVertex2f(640,-10);
    glVertex2f(140,230);//glVertex2f(140,230);
    glVertex2f(100,230);//glVertex2f(100,230);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(640,-100);
    glVertex2f(640,-105);
    glVertex2f(105,230);
    glVertex2f(100,230);
    glEnd();

    //upper
    glBegin(GL_POLYGON);
    glColor3ub(73,73,73);
    glVertex2f(180,190);
    glVertex2f(640,190);
    glVertex2f(640,205);
    glVertex2f(150,205);
    glEnd();


    //lower(left)
    glBegin(GL_POLYGON);
    glColor3ub(73,73,73);
    glVertex2f(400,100);
    glVertex2f(640,100);
    glVertex2f(640,130);
    glVertex2f(260,130);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(273,73,73);
    glVertex2f(400,100);
    glVertex2f(640,100);
    glVertex2f(640,130);
    glVertex2f(260,130);
    glEnd();



}


void nightroad()
{


    glBegin(GL_POLYGON);
    glColor3ub(73,73,73);
    glVertex2f(-640,-10);
    glVertex2f(-640,-100);
    glVertex2f(-100,230);
    glVertex2f(-140,230);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(-640,-105);
    glVertex2f(-640,-100);
    glVertex2f(-100,230);
    glVertex2f(-105,230);
    glEnd();

    //road horizontal(left)
    //upper
    glBegin(GL_POLYGON);
    glColor3ub(73,73,73);
    glVertex2f(-640,190);
    glVertex2f(-200,190);
    glVertex2f(-160,205);
    glVertex2f(-640,205);
    glEnd();
    //lower(left)
    glBegin(GL_POLYGON);
    glColor3ub(73,73,73);
    glVertex2f(-640,100);
    glVertex2f(-400,100);
    glVertex2f(-260,130);
    glVertex2f(-640,130);
    glEnd();

    //right side
    glBegin(GL_POLYGON);
    glColor3ub(73,73,73);
    glVertex2f(640,-100);
    glVertex2f(640,-10);
    glVertex2f(140,230);//glVertex2f(140,230);
    glVertex2f(100,230);//glVertex2f(100,230);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(640,-100);
    glVertex2f(640,-105);
    glVertex2f(105,230);
    glVertex2f(100,230);
    glEnd();

    //upper
    glBegin(GL_POLYGON);
    glColor3ub(73,73,73);
    glVertex2f(180,190);
    glVertex2f(640,190);
    glVertex2f(640,205);
    glVertex2f(150,205);
    glEnd();
    //lower(left)
    glBegin(GL_POLYGON);
    glColor3ub(73,73,73);
    glVertex2f(400,100);
    glVertex2f(640,100);
    glVertex2f(640,130);
    glVertex2f(260,130);
    glEnd();

}

void daybuilding()
{
///left side building

    //
///right side building
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(190,205);
    glVertex2f(298,205);
    glVertex2f(250,230);
    glVertex2f(140,230);
    glEnd();
    //left
    glBegin(GL_POLYGON);
    glColor3ub(225,0,255);
    glVertex2f(140,230);
    glVertex2f(190,205);
    glVertex2f(190,300);
    glVertex2f(140,320);
    glEnd();
    //front
    glBegin(GL_POLYGON);
    glColor3ub(128,0,128);
    glVertex2f(190,205);
    glVertex2f(298,205);
    glVertex2f(298,300);
    glVertex2f(190,300);
    glEnd();

    //window
    x=0;
    y=0;
    for(int j=1;j<=4;j++){
        for(int i=1;i<=5;i++){
        glBegin(GL_POLYGON);
        glColor3ub(0,0,0);
        glVertex2f(200+x,280-y);
        glVertex2f(210+x,280-y);
        glVertex2f(210+x,290-y);
        glVertex2f(200+x,290-y);
        glEnd();
        x=x+20;
        }
        y=y+20;
        x=0;
    }

    //line


    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(190,205);
    glVertex2f(190,300);
    glEnd();


    //top
    glBegin(GL_POLYGON);
    glColor3ub(122,122,122);
    glVertex2f(190,300);
    glVertex2f(298,300);
    glVertex2f(250,320);
    glVertex2f(140,320);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(190,300);
    glVertex2f(298,300);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(298,205);
    glVertex2f(298,300);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(190,205);
    glVertex2f(298,205);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(140,230);
    glVertex2f(190,205);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(190,300);
    glVertex2f(140,320);
    glEnd();
    //end of 1st building

    //2Nd
    //left
    glBegin(GL_POLYGON);
    glColor3ub(225,0,0);
    glVertex2f(340,230);
    glVertex2f(390,205);
    glVertex2f(390,300);
    glVertex2f(340,320);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(340,230);
    glVertex2f(390,205);
    glEnd();


    //top
    glBegin(GL_POLYGON);
    glColor3ub(122,122,122);
    glVertex2f(390,300);
    glVertex2f(458,300);
    glVertex2f(400,320);
    glVertex2f(340,320);
    glEnd();
    //front
    glBegin(GL_POLYGON);
    glColor3ub(120,0,0);
    glVertex2f(390,205);
    glVertex2f(458,205);
    glVertex2f(458,300);
    glVertex2f(390,300);
    glEnd();

    x=0;
    y=0;
    for(int j=1;j<=4;j++){
        for(int i=1;i<=3;i++){
        glBegin(GL_POLYGON);
        glColor3ub(10,10,10);
        glVertex2f(400+x,280-y);
        glVertex2f(410+x,280-y);
        glVertex2f(410+x,290-y);
        glVertex2f(400+x,290-y);
        glEnd();
        x=x+20;
        }
        y=y+20;
        x=0;
    }

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(390,300);
    glVertex2f(340,320);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(390,300);
    glVertex2f(458,300);
    glEnd();

    //left side
    ///right view

    glBegin(GL_POLYGON);
    glColor3ub(253,107,107);
    glVertex2f(-190,205);
    glVertex2f(-140,230);
    glVertex2f(-140,290);
    glVertex2f(-190,270);
    glEnd();
    //vertical line

    //front
    glBegin(GL_POLYGON);
    glColor3ub(253,73,73);
    glVertex2f(-300,205);
    glVertex2f(-190,205);
    glVertex2f(-190,270);
    glVertex2f(-300,270);
    glEnd();

    ///window
    x=0;
    y=0;
    for(int j=1;j<=3;j++){
        for(int i=1;i<=5;i++){
        glBegin(GL_POLYGON);
        glColor3ub(0,0,0);
        glVertex2f(-280+x,255-y);
        glVertex2f(-290+x,255-y);
        glVertex2f(-290+x,265-y);
        glVertex2f(-280+x,265-y);
        glEnd();
        x=x+20;
        }
        y=y+20;
        x=0;
    }

    //top
    glBegin(GL_POLYGON);
    glColor3ub(122,122,122);
    glVertex2f(-300,270);
    glVertex2f(-190,270);
    glVertex2f(-140,290);
    glVertex2f(-250,290);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-190,205);
    glVertex2f(-140,230);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-140,290);
    glVertex2f(-190,270);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-300,205);
    glVertex2f(-190,205);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-190,205);
    glVertex2f(-190,270);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-300,205);
    glVertex2f(-300,270);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-300,270);
    glVertex2f(-190,270);
    glEnd();



    ///LEFT SIDE 2ND BUILDING

    ///FRONT
    glBegin(GL_POLYGON);
    glColor3ub(225,73,0);
    glVertex2f(-500,205);
    glVertex2f(-390,205);
    glVertex2f(-390,290);
    glVertex2f(-500,290);
    glEnd();
    ///window
    x=0;
    y=0;
    for(int j=1;j<=3;j++){
        for(int i=1;i<=5;i++){
        glBegin(GL_POLYGON);
        glColor3ub(0,0,0);
        glVertex2f(-490+x,265-y);
        glVertex2f(-480+x,265-y);
        glVertex2f(-480+x,275-y);
        glVertex2f(-490+x,275-y);
        glEnd();
        x=x+20;
        }
        y=y+20;
        x=0;
    }
    ///RIGHT VIEW
    glBegin(GL_POLYGON);
    glColor3ub(255,132,55);
    glVertex2f(-390,205);
    glVertex2f(-340,230);
    glVertex2f(-340,310);
    glVertex2f(-390,290);
    glEnd();

    ///TOP

    glBegin(GL_POLYGON);
    glColor3ub(122,122,122);
    glVertex2f(-500,290);
    glVertex2f(-390,290);
    glVertex2f(-340,310);
    glVertex2f(-450,310);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-390,205);
    glVertex2f(-340,230);
    glEnd();


    ///3rd building left
     glBegin(GL_POLYGON);
    glColor3ub(253,2,73);
    glVertex2f(-440,190);
    glVertex2f(-340,190);
    glVertex2f(-340,260);
    glVertex2f(-440,260);
    glEnd();

    ///front
    glBegin(GL_POLYGON);
    glColor3ub(253,2,73);
    glVertex2f(-540,130);
    glVertex2f(-440,130);
    glVertex2f(-440,230);
    glVertex2f(-540,230);
    glEnd();

    ///right view
    glBegin(GL_POLYGON);
    glColor3ub(254,107,148);
    glVertex2f(-440,130);
    glVertex2f(-340,190);
    glVertex2f(-340,260);
    glVertex2f(-440,230);
    glEnd();

    ///top
    glBegin(GL_POLYGON);
    glColor3ub(122,122,122);
    glVertex2f(-540,230);
    glVertex2f(-440,230);
    glVertex2f(-340,260);
    glVertex2f(-440,260);
    glEnd();

    ///window
    x=0;
    y=0;
    for(int j=1;j<=5;j++){
        for(int i=1;i<=5;i++){
        glBegin(GL_POLYGON);
        glColor3ub(0,0,0);
        glVertex2f(-535+x,215-y);
        glVertex2f(-525+x,215-y);
        glVertex2f(-525+x,225-y);
        glVertex2f(-535+x,225-y);
        glEnd();
        x=x+20;
        }
        y=y+20;
        x=0;
    }



}

void nightbuilding()
{


///right side building

    //left
    glBegin(GL_POLYGON);
    glColor3ub(225,0,255);
    glVertex2f(140,230);
    glVertex2f(190,205);
    glVertex2f(190,300);
    glVertex2f(140,320);
    glEnd();
    //front
    glBegin(GL_POLYGON);
    glColor3ub(128,0,128);
    glVertex2f(190,205);
    glVertex2f(298,205);
    glVertex2f(298,300);
    glVertex2f(190,300);
    glEnd();

    //window
    x=0;
    y=0;
    for(int j=1;j<=4;j++){
        for(int i=1;i<=5;i++){
        glBegin(GL_POLYGON);
        if(i%2==0&&j%2!=0){
            glColor3ub(0,0,0);
        }
        else{
            glColor3ub(255,255,128);
        }
        //glColor3ub(255,255,128);
        glVertex2f(200+x,280-y);
        glVertex2f(210+x,280-y);
        glVertex2f(210+x,290-y);
        glVertex2f(200+x,290-y);
        glEnd();
        x=x+20;
        }
        y=y+20;
        x=0;
    }

    //line


    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(190,205);
    glVertex2f(190,300);
    glEnd();


    //top
    glBegin(GL_POLYGON);
    glColor3ub(122,122,122);
    glVertex2f(190,300);
    glVertex2f(298,300);
    glVertex2f(250,320);
    glVertex2f(140,320);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(190,300);
    glVertex2f(298,300);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(298,205);
    glVertex2f(298,300);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(190,205);
    glVertex2f(298,205);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(140,230);
    glVertex2f(190,205);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(190,300);
    glVertex2f(140,320);
    glEnd();
    //end of 1st building

    //2Nd
    //left
    glBegin(GL_POLYGON);
    glColor3ub(225,0,0);
    glVertex2f(340,230);
    glVertex2f(390,205);
    glVertex2f(390,300);
    glVertex2f(340,320);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(340,230);
    glVertex2f(390,205);
    glEnd();


    //top
    glBegin(GL_POLYGON);
    glColor3ub(122,122,122);
    glVertex2f(390,300);
    glVertex2f(458,300);
    glVertex2f(400,320);
    glVertex2f(340,320);
    glEnd();
    //front
    glBegin(GL_POLYGON);
    glColor3ub(120,0,0);
    glVertex2f(390,205);
    glVertex2f(458,205);
    glVertex2f(458,300);
    glVertex2f(390,300);
    glEnd();

    x=0;
    y=0;
    for(int j=1;j<=4;j++){
        for(int i=1;i<=3;i++){
        glBegin(GL_POLYGON);
        glColor3ub(255,255,128);
        glVertex2f(400+x,280-y);
        glVertex2f(410+x,280-y);
        glVertex2f(410+x,290-y);
        glVertex2f(400+x,290-y);
        glEnd();
        x=x+20;
        }
        y=y+20;
        x=0;
    }

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(390,300);
    glVertex2f(340,320);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(390,300);
    glVertex2f(458,300);
    glEnd();

    //left side
    //right view

    glBegin(GL_POLYGON);
    glColor3ub(253,107,107);
    glVertex2f(-190,205);
    glVertex2f(-140,230);
    glVertex2f(-140,290);
    glVertex2f(-190,270);
    glEnd();
    //vertical line

    //front
    glBegin(GL_POLYGON);
    glColor3ub(253,73,73);
    glVertex2f(-300,205);
    glVertex2f(-190,205);
    glVertex2f(-190,270);
    glVertex2f(-300,270);
    glEnd();

    ///window
    x=0;
    y=0;
    for(int j=1;j<=3;j++){
        for(int i=1;i<=5;i++){
        glBegin(GL_POLYGON);
        glColor3ub(255,255,128);
        glVertex2f(-280+x,255-y);
        glVertex2f(-290+x,255-y);
        glVertex2f(-290+x,265-y);
        glVertex2f(-280+x,265-y);
        glEnd();
        x=x+20;
        }
        y=y+20;
        x=0;
    }

    //top
    glBegin(GL_POLYGON);
    glColor3ub(122,122,122);
    glVertex2f(-300,270);
    glVertex2f(-190,270);
    glVertex2f(-140,290);
    glVertex2f(-250,290);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-190,205);
    glVertex2f(-140,230);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-140,290);
    glVertex2f(-190,270);
    glEnd();



    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-300,205);
    glVertex2f(-190,205);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-190,205);
    glVertex2f(-190,270);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-300,205);
    glVertex2f(-300,270);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-300,270);
    glVertex2f(-190,270);
    glEnd();

    //LEFT SIDE 2ND BUILDING

    ///FRONT
    glBegin(GL_POLYGON);
    glColor3ub(225,73,0);
    glVertex2f(-500,205);
    glVertex2f(-390,205);
    glVertex2f(-390,290);
    glVertex2f(-500,290);
    glEnd();
    ///window
    x=0;
    y=0;
    for(int j=1;j<=3;j++){
        for(int i=1;i<=5;i++){
        glBegin(GL_POLYGON);
        glColor3ub(255,255,128);
        glVertex2f(-490+x,265-y);
        glVertex2f(-480+x,265-y);
        glVertex2f(-480+x,275-y);
        glVertex2f(-490+x,275-y);
        glEnd();
        x=x+20;
        }
        y=y+20;
        x=0;
    }
    ///RIGHT VIEW
    glBegin(GL_POLYGON);
    glColor3ub(255,132,55);
    glVertex2f(-390,205);
    glVertex2f(-340,230);
    glVertex2f(-340,310);
    glVertex2f(-390,290);
    glEnd();

    ///TOP

    glBegin(GL_POLYGON);
    glColor3ub(122,122,122);
    glVertex2f(-500,290);
    glVertex2f(-390,290);
    glVertex2f(-340,310);
    glVertex2f(-450,310);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(-390,205);
    glVertex2f(-340,230);
    glEnd();


    ///3rd building left
     glBegin(GL_POLYGON);
    glColor3ub(253,2,73);
    glVertex2f(-440,190);
    glVertex2f(-340,190);
    glVertex2f(-340,260);
    glVertex2f(-440,260);
    glEnd();

    ///front
    glBegin(GL_POLYGON);
    glColor3ub(253,2,73);
    glVertex2f(-540,130);
    glVertex2f(-440,130);
    glVertex2f(-440,230);
    glVertex2f(-540,230);
    glEnd();

    ///right view
    glBegin(GL_POLYGON);
    glColor3ub(254,107,148);
    glVertex2f(-440,130);
    glVertex2f(-340,190);
    glVertex2f(-340,260);
    glVertex2f(-440,230);
    glEnd();

    ///top
    glBegin(GL_POLYGON);
    glColor3ub(122,122,122);
    glVertex2f(-540,230);
    glVertex2f(-440,230);
    glVertex2f(-340,260);
    glVertex2f(-440,260);
    glEnd();

    ///window
    x=0;
    y=0;
    for(int j=1;j<=5;j++){
        for(int i=1;i<=5;i++){
        glBegin(GL_POLYGON);
        if(i%2!=0&&j%2==0){
            glColor3ub(0,0,0);
        }
        else{
            glColor3ub(255,255,128);
        }
        glVertex2f(-535+x,215-y);
        glVertex2f(-525+x,215-y);
        glVertex2f(-525+x,225-y);
        glVertex2f(-535+x,225-y);
        glEnd();
        x=x+20;
        }
        y=y+20;
        x=0;
    }


}

void bridge()
{

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(-100,50);
    glVertex2f(-110,50);
    glVertex2f(-110,270);
    glVertex2f(-100,270);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(-200,50);
    glVertex2f(-210,50);
    glVertex2f(-210,245);
    glVertex2f(-200,245);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(-300,50);
    glVertex2f(-310,50);
    glVertex2f(-310,205);
    glVertex2f(-300,205);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(-400,50);
    glVertex2f(-410,50);
    glVertex2f(-410,155);
    glVertex2f(-400,155);
    glEnd();

    //middle
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(-5,50);
    glVertex2f(5,50);
    glVertex2f(5,280);
    glVertex2f(-5,280);
    glEnd();


    //right side from middle
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(100,50);
    glVertex2f(110,50);
    glVertex2f(110,270);
    glVertex2f(100,270);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(200,50);
    glVertex2f(210,50);
    glVertex2f(210,250);
    glVertex2f(200,250);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(300,50);
    glVertex2f(310,50);
    glVertex2f(310,210);
    glVertex2f(300,210);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(400,50);
    glVertex2f(410,50);
    glVertex2f(410,155);
    glVertex2f(400,155);
    glEnd();
    //curb
    int g[99];
    int h[99];
    g[1]=-545;
    h[1]=45;
    g[2]=0;
    h[2]=500;
    g[3]=540;
    h[3]=50;
    float x1=0.0;
    float y1=0.0;
    //float m1=0.0;
    //float n1=0.0;
    for(float t=0.009;t<1.0;t=t+0.0005){
        for(int i=0;i<=2;i++){
            x1=1*((1-t)*(1-t))*1*g[1]+2*(1-t)*t*g[2]+1*1*(t*t)*g[3];
            y1=1*((1-t)*(1-t))*1*h[1]+2*(1-t)*t*h[2]+1*1*(t*t)*h[3];
            glColor3ub (244,0,0);
            glPointSize(15.0);
            glBegin(GL_POINTS);
            glVertex2i(x1,y1);
            glEnd();
            glFlush();

        }
        x1=0.0;
        y1=0.0;
    }



//    glColor3f(0.0,0.0,0.0);

    //left side piller
    glBegin(GL_POLYGON);
    glColor3ub(122,122,122);
    glVertex2f(-640,-150);
    glVertex2f(-540,-150);
    glVertex2f(-540,200);
    glVertex2f(-640,200);
    glEnd();


    x=0;

    for(int i=1;i<=5;i++){
        glBegin(GL_POLYGON);
        glColor3ub(0,0,0);
        glVertex2f(-640+x,-150);
        glVertex2f(-637+x,-150);
        glVertex2f(-637+x,200);
        glVertex2f(-640+x,200);
        glEnd();
        x=x+25;
        glFlush();
    }
    y=0;
    for(int i=1;i<25;i++){
        glBegin(GL_POLYGON);
        glColor3ub(0,0,0);
        glVertex2f(-640,-145+y);
        glVertex2f(-537,-145+y);
        glVertex2f(-537,-142+y);
        glVertex2f(-640,-142+y);
        glEnd();
        y=y+15;
        glFlush();
    }

    x=0;

    for(int i=1;i<=40;i++){
        glBegin(GL_POLYGON);
        glColor3ub(0,0,0);
        glVertex2f(-520+x,-40);
        glVertex2f(-525+x,-40);
        glVertex2f(-525+x,50);
        glVertex2f(-520+x,50);
        glEnd();
        x=x+50;
        glFlush();
    }

    //bridge lower
    glBegin(GL_POLYGON);
    glColor3ub(122,122,122);
    glVertex2f(-537,-40);
    glVertex2f(540,-40);
    glVertex2f(540,-30);
    glVertex2f(-537,-30);
    glEnd();




    //bridge upper
    glBegin(GL_POLYGON);
    glColor3ub(122,122,122);
    glVertex2f(-537,40);
    glVertex2f(540,40);
    glVertex2f(540,50);
    glVertex2f(-537,50);
    glEnd();



    //left right piller
    glBegin(GL_POLYGON);
    glColor3ub(122,122,122);
    glVertex2f(540,-150);
    glVertex2f(640,-150);
    glVertex2f(640,200);
    glVertex2f(540,200);
    glEnd();

    x=0;

    for(int i=1;i<=4;i++){
        glBegin(GL_POLYGON);
        glColor3ub(0,0,0);
        glVertex2f(545+x,-150);
        glVertex2f(548+x,-150);
        glVertex2f(548+x,200);
        glVertex2f(545+x,200);
        glEnd();
        x=x+25;
        glFlush();
    }
    y=0;
    for(int i=1;i<25;i++){
        glBegin(GL_POLYGON);
        glColor3ub(0,0,0);
        glVertex2f(540,-145+y);
        glVertex2f(640,-145+y);
        glVertex2f(640,-142+y);
        glVertex2f(540,-142+y);
        glEnd();
        y=y+15;
        glFlush();
    }




}
void daytrain(){

    glBegin(GL_POLYGON);
    glColor3ub(209,46,50);
    glVertex2f(900+t,-35);
    glVertex2f(1040+t,-35);
    glVertex2f(1000+t,-5);
    glVertex2f(900+t,-5);
    glEnd();

    ///train window1
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(925+t,-15);
    glVertex2f(970+t,-15);
    glVertex2f(970+t,-6);
    glVertex2f(925+t,-6);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(985+t,-15);
    glVertex2f(1000+t,-15);
    glVertex2f(1000+t,-6);
    glVertex2f(975+t,-6);
    glEnd();



    ///train compartment
    glBegin(GL_POLYGON);
    glColor3ub(209,46,50);
    glVertex2f(795+t,-35);
    glVertex2f(895+t,-35);
    glVertex2f(895+t,-5);
    glVertex2f(795+t,-5);
    glEnd();

    ///train window2
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(835+t,-20);
    glVertex2f(850+t,-20);
    glVertex2f(850+t,-10);
    glVertex2f(835+t,-10);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(810+t,-20);
    glVertex2f(825+t,-20);
    glVertex2f(825+t,-10);
    glVertex2f(810+t,-10);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(860+t,-20);
    glVertex2f(875+t,-20);
    glVertex2f(875+t,-10);
    glVertex2f(860+t,-10);
    glEnd();

    ///train compartment
    glBegin(GL_POLYGON);
    glColor3ub(209,46,50);
    glVertex2f(690+t,-35);
    glVertex2f(790+t,-35);
    glVertex2f(790+t,-5);
    glVertex2f(690+t,-5);
    glEnd();

    ///train window3
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(770+t,-20);
    glVertex2f(785+t,-20);
    glVertex2f(785+t,-10);
    glVertex2f(770+t,-10);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(745+t,-20);
    glVertex2f(760+t,-20);
    glVertex2f(760+t,-10);
    glVertex2f(745+t,-10);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(725+t,-20);
    glVertex2f(740+t,-20);
    glVertex2f(740+t,-10);
    glVertex2f(725+t,-10);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(705+t,-20);
    glVertex2f(720+t,-20);
    glVertex2f(720+t,-10);
    glVertex2f(705+t,-10);
    glEnd();

}

void nightrain(){

    glBegin(GL_POLYGON);
    glColor3ub(209,46,50);
    glVertex2f(900+t,-35);
    glVertex2f(1040+t,-35);
    glVertex2f(1000+t,-5);
    glVertex2f(900+t,-5);
    glEnd();

    ///train window1
    glBegin(GL_POLYGON);
    glColor3ub(253,253,0);
    glVertex2f(905+t,-15);
    glVertex2f(970+t,-15);
    glVertex2f(970+t,-6);
    glVertex2f(905+t,-6);
    glEnd();
    ///window
    glBegin(GL_POLYGON);
    glColor3ub(253,253,0);
    glVertex2f(985+t,-15);
    glVertex2f(1000+t,-15);
    glVertex2f(1000+t,-6);
    glVertex2f(975+t,-6);
    glEnd();



    ///train compartment
    glBegin(GL_POLYGON);
    glColor3ub(209,46,50);
    glVertex2f(795+t,-35);
    glVertex2f(895+t,-35);
    glVertex2f(895+t,-5);
    glVertex2f(795+t,-5);
    glEnd();

    ///train window2
    glBegin(GL_POLYGON);
    glColor3ub(253,253,0);
    glVertex2f(835+t,-20);
    glVertex2f(850+t,-20);
    glVertex2f(850+t,-10);
    glVertex2f(835+t,-10);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(253,253,0);
    glVertex2f(810+t,-20);
    glVertex2f(825+t,-20);
    glVertex2f(825+t,-10);
    glVertex2f(810+t,-10);
    glEnd();



    glBegin(GL_POLYGON);
    glColor3ub(253,253,0);
    glVertex2f(860+t,-20);
    glVertex2f(875+t,-20);
    glVertex2f(875+t,-10);
    glVertex2f(860+t,-10);
    glEnd();

    ///train compartment
    glBegin(GL_POLYGON);
    glColor3ub(209,46,50);
    glVertex2f(690+t,-35);
    glVertex2f(790+t,-35);
    glVertex2f(790+t,-5);
    glVertex2f(690+t,-5);
    glEnd();

    ///train window3
    glBegin(GL_POLYGON);
    glColor3ub(253,253,0);
    glVertex2f(770+t,-20);
    glVertex2f(785+t,-20);
    glVertex2f(785+t,-10);
    glVertex2f(770+t,-10);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(253,253,0);
    glVertex2f(745+t,-20);
    glVertex2f(760+t,-20);
    glVertex2f(760+t,-10);
    glVertex2f(745+t,-10);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(253,253,0);
    glVertex2f(725+t,-20);
    glVertex2f(740+t,-20);
    glVertex2f(740+t,-10);
    glVertex2f(725+t,-10);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(253,253,0);
    glVertex2f(705+t,-20);
    glVertex2f(720+t,-20);
    glVertex2f(720+t,-10);
    glVertex2f(705+t,-10);
    glEnd();

}

void daysky()
{


    //int n=1;


        glBegin(GL_POLYGON);
        glColor3ub (57,183,215);
        glVertex2f(-640,280);
        glVertex2f(640,280);
        glVertex2f(640,360);
        glVertex2f(-640,360);
        glEnd();
        glFlush();

        glBegin(GL_LINES);
        glColor3ub (0,0,0);
        glVertex2f(-640,280);
        glVertex2f(640,280);
        glEnd();
        glFlush();


}

void nightsky()
{


        glBegin(GL_POLYGON);
        glColor3ub (0,0,105);
        glVertex2f(-640,280);
        glVertex2f(640,280);
        glVertex2f(640,360);
        glVertex2f(-640,360);
        glEnd();
        glFlush();



}
void ship(){
 glBegin(GL_POLYGON);
    glColor3ub(29,29,29);
    glVertex2f(-620+s,240);
    glVertex2f(-560+s,240);
    glVertex2f(-550+s,260);
    glVertex2f(-630+s,260);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,122,225);
    glVertex2f(-615+s,260);
    glVertex2f(-580+s,260);
    glVertex2f(-580+s,270);
    glVertex2f(-615+s,270);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(172,111,19);
    glVertex2f(-610+s,270);
    glVertex2f(-605+s,270);
    glVertex2f(-605+s,290);
    glVertex2f(-610+s,290);
    glEnd();
}
void daycar(){
    ///car
    glBegin(GL_POLYGON);
    glColor3ub(255,122,225);
    glVertex2f(910+c,45);
    glVertex2f(965+c,45);
    glVertex2f(965+c,60);
    glVertex2f(955+c,60);
    glVertex2f(950+c,65);
    //glVertex2f(540+c,65);
    glVertex2f(925+c,65);
    glVertex2f(920+c,60);
    glVertex2f(910+c,60);
    glEnd();

    ///window

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(920+c,60);
    glVertex2f(935+c,60);
    glVertex2f(935+c,65);
    glVertex2f(925+c,65);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(938+c,60);
    glVertex2f(955+c,60);
    glVertex2f(950+c,65);
    glVertex2f(938+c,65);
    glEnd();


    ///car2
    glBegin(GL_POLYGON);
    glColor3ub(255,22,22);
    glVertex2f(610+c,45);
    glVertex2f(665+c,45);
    glVertex2f(665+c,60);
    glVertex2f(655+c,60);
    glVertex2f(650+c,65);
    //glVertex2f(540+c,65);
    glVertex2f(625+c,65);
    glVertex2f(620+c,60);
    glVertex2f(610+c,60);
    glEnd();

    ///window

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(620+c,60);
    glVertex2f(635+c,60);
    glVertex2f(635+c,65);
    glVertex2f(625+c,65);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(638+c,60);
    glVertex2f(655+c,60);
    glVertex2f(650+c,65);
    glVertex2f(638+c,65);
    glEnd();
    ///bus
    glBegin(GL_POLYGON);
    glColor3ub(199,16,26);
    glVertex2f(808+c,45);
    glVertex2f(890+c,45);
    glVertex2f(890+c,75);
    glVertex2f(808+c,75);
    glEnd();
    ///window
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(810+c,60);
    glVertex2f(820+c,60);
    glVertex2f(820+c,70);
    glVertex2f(810+c,70);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(825+c,60);
    glVertex2f(835+c,60);
    glVertex2f(835+c,70);
    glVertex2f(825+c,70);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(840+c,60);
    glVertex2f(845+c,60);
    glVertex2f(845+c,70);
    glVertex2f(840+c,70);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(850+c,60);
    glVertex2f(855+c,60);
    glVertex2f(855+c,70);
    glVertex2f(850+c,70);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(860+c,60);
    glVertex2f(870+c,60);
    glVertex2f(870+c,70);
    glVertex2f(860+c,70);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(875+c,60);
    glVertex2f(885+c,60);
    glVertex2f(885+c,70);
    glVertex2f(875+c,70);
    glEnd();

    ///car3
    glBegin(GL_POLYGON);
    glColor3ub(102,0,202);
    glVertex2f(710+c1,45);
    glVertex2f(765+c1,45);
    glVertex2f(765+c1,60);
    glVertex2f(755+c1,60);
    glVertex2f(750+c1,65);
    //glVertex2f(540+c,65);
    glVertex2f(725+c1,65);
    glVertex2f(720+c1,60);
    glVertex2f(710+c1,60);
    glEnd();

    ///window

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(720+c1,60);
    glVertex2f(735+c1,60);
    glVertex2f(735+c1,65);
    glVertex2f(725+c1,65);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(738+c1,60);
    glVertex2f(755+c1,60);
    glVertex2f(750+c1,65);
    glVertex2f(738+c1,65);
    glEnd();

    ///car
    glBegin(GL_POLYGON);
    glColor3ub(112,223,0);
    glVertex2f(310+c1,45);
    glVertex2f(365+c1,45);
    glVertex2f(365+c1,60);
    glVertex2f(330+c1,60);
    glVertex2f(330+c1,65);
    //glVertex2f(540+c,65);
    glVertex2f(325+c1,65);
    glVertex2f(320+c1,60);
    glVertex2f(310+c1,60);
    glEnd();

    ///window

    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(320+c1,60);
    glVertex2f(335+c1,60);
    glVertex2f(335+c1,65);
    glVertex2f(325+c1,65);
    glEnd();



}
void nightcar(){

    ///car
    glBegin(GL_POLYGON);
    glColor3ub(128,128,0);
    glVertex2f(510+c1,45);
    glVertex2f(565+c1,45);
    glVertex2f(565+c1,60);
    glVertex2f(530+c1,60);
    glVertex2f(530+c1,65);
    //glVertex2f(540+c,65);
    glVertex2f(525+c1,65);
    glVertex2f(520+c1,60);
    glVertex2f(510+c1,60);
    glEnd();

    ///window

    glBegin(GL_POLYGON);
    glColor3ub(253,253,0);
    glVertex2f(520+c1,60);
    glVertex2f(535+c1,60);
    glVertex2f(535+c1,65);
    glVertex2f(525+c1,65);
    glEnd();



    ///car4
    glBegin(GL_POLYGON);
    glColor3ub(255,25,225);
    glVertex2f(510+c,45);
    glVertex2f(565+c,45);
    glVertex2f(565+c,60);
    glVertex2f(555+c,60);
    glVertex2f(550+c,65);
    //glVertex2f(540+c,65);
    glVertex2f(525+c,65);
    glVertex2f(520+c,60);
    glVertex2f(510+c,60);
    glEnd();

    ///window

    glBegin(GL_POLYGON);
    glColor3ub(253,253,0);
    glVertex2f(520+c,60);
    glVertex2f(535+c,60);
    glVertex2f(535+c,65);
    glVertex2f(525+c,65);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(253,253,0);
    glVertex2f(538+c,60);
    glVertex2f(555+c,60);
    glVertex2f(550+c,65);
    glVertex2f(538+c,65);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(128,0,2);
    glVertex2f(710+c1,45);
    glVertex2f(765+c1,45);
    glVertex2f(765+c1,60);
    glVertex2f(755+c1,60);
    glVertex2f(750+c1,65);
    //glVertex2f(540+c,65);
    glVertex2f(725+c1,65);
    glVertex2f(720+c1,60);
    glVertex2f(710+c1,60);
    glEnd();

    ///window

    glBegin(GL_POLYGON);
    glColor3ub(253,253,0);
    glVertex2f(720+c1,60);
    glVertex2f(735+c1,60);
    glVertex2f(735+c1,65);
    glVertex2f(725+c1,65);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(253,253,0);
    glVertex2f(738+c1,60);
    glVertex2f(755+c1,60);
    glVertex2f(750+c1,65);
    glVertex2f(738+c1,65);
    glEnd();

    ///bus
    glBegin(GL_POLYGON);
    glColor3ub(199,16,26);
    glVertex2f(908+c1,45);
    glVertex2f(990+c1,45);
    glVertex2f(990+c1,75);
    glVertex2f(908+c1,75);
    glEnd();
    ///window
    glBegin(GL_POLYGON);
    glColor3ub(253,253,0);
    glVertex2f(910+c1,60);
    glVertex2f(920+c1,60);
    glVertex2f(920+c1,70);
    glVertex2f(910+c1,70);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(253,253,0);
    glVertex2f(925+c1,60);
    glVertex2f(935+c1,60);
    glVertex2f(935+c1,70);
    glVertex2f(925+c1,70);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(253,253,0);
    glVertex2f(940+c1,60);
    glVertex2f(945+c1,60);
    glVertex2f(945+c1,70);
    glVertex2f(940+c1,70);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(253,253,0);
    glVertex2f(950+c1,60);
    glVertex2f(955+c1,60);
    glVertex2f(955+c1,70);
    glVertex2f(950+c1,70);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(253,253,0);
    glVertex2f(960+c1,60);
    glVertex2f(970+c1,60);
    glVertex2f(970+c1,70);
    glVertex2f(960+c1,70);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(253,253,0);
    glVertex2f(975+c1,60);
    glVertex2f(985+c1,60);
    glVertex2f(985+c1,70);
    glVertex2f(975+c1,70);
    glEnd();
}
void star(){

    x=0;
    y=0;
        for (int j=1;j<=3;j++){
            for(int i=1;i<25;i++){
            glBegin(GL_POLYGON);
            glPointSize(1.0);
            glColor3ub (255,255,255);
            glVertex2f(-638+x,245+y);
            glVertex2f(-640+x,245+y);
            glVertex2f(-640+x,248+y);
            glVertex2f(-638+x,248+y);
            glEnd();
            x=x+60;
            glFlush();
            }
            y=y+50;
            if(j%2==0){
                x=0;
            }
            else{
                x=30;
            }

        }
}
void circle(float x,float y,float z)
{
    glColor3f(x,y,z);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/55 ;
        float r=20;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
    glEnd();

}

void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    //glMatrixMode(GL_MODELVIEW);
    //glLoadIdentity();
    glPushMatrix();
    if(day==1){
    cout<<"day1"<<endl;
    daysky();
    daywater();
    daygrass();
    dayroad();
    ship();
    daybuilding();

    daytrain();
    daycar();
    bridge();
    glTranslatef(0.0, 330.0, 00.0);
    circle(232/255.0,232/255.0,0.0);
    }
    else
    {
        nightsky();
        star();
        nightwater();
        nightgrass();
        nightroad();
        ship();
        nightbuilding();

        nightcar();
        nightrain();
        bridge();


    glTranslatef(0.0, 330.0, 0.0);
    circle(1.0,1.0,1.0);

      //daywater();
      //daygrass();
      //dayroad();
      //bridge();


    }

    glPopMatrix();
    glutSwapBuffers();


}
void timer(int value){
  glutPostRedisplay();
  glutTimerFunc(10,timer,0);

}
void update(int value) {

    t += 100;
    if(t-1 > 1.0)
    {
        t = -1240.0;
    }
    s+= 10;
    if(s-1 > 1240.0)
    {
        s =-1240.0;
    }

    c += 100;
    if(c-1 > 1.0)
    {
        c = -1240.0;
    }
    c1 -= 75;
    if(c1+1 < -1240.0)
    {
        c1 = 1240.0;
    }

    glutPostRedisplay();
	 //Notify GLUT that the display has changed
	//glutPostRedisplay();
	glutTimerFunc(20, update, 0); //Notify GLUT to call update again in 20 milliseconds
}
void keyboardFunc(unsigned char key, int x, int y)
 {
   switch (key) {
    case 'd':
    case 'D':
        cout<<"day"<<endl;
        day=1;
        break;

    case 'n':
    case 'N':
        cout<<"night"<<endl;
        day=0;
        break;
    case 27:     // ESC key
         exit(0);
         break;


   };
}

void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 1.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(-640.0, 640.0, -360.0, 360.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (1280, 720);
    glutInitWindowPosition (0, 0);
    glutCreateWindow ("Sydney Harbour bridge");
    glutKeyboardFunc(keyboardFunc);
    glutTimerFunc(0,timer,0);
    glutDisplayFunc(myDisplay);
    sndPlaySound("traffic.wav",SND_ASYNC|SND_LOOP);
    glutTimerFunc(10, update, 0);
    glutFullScreen();
    myInit ();
    glutMainLoop();
}





