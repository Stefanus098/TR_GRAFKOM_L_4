#include <GL/glu.h>
#include <GL/glut.h>

void init(void);
void tampil(void);
void keyboard(unsigned char, int, int);
void ukuran(int, int);
void mouse(int button, int state, int x, int y);
void mouseMotion(int x, int y);


float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;
int is_depth;

void cocok()
{
    glLoadIdentity();
       gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
       glRotatef(xrot, 1.0f,0.0f, 0.0f);
       glRotatef(yrot, 0.0f, 1.0f, 0.0f);
}


void init(void){
    glClearColor(1.0, 1.0, 1.0, 0);
   glMatrixMode(GL_PROJECTION);
   glEnable(GL_DEPTH_TEST);
   is_depth=1;
   glMatrixMode(GL_MODELVIEW);
   glEnable(GL_POINT_SMOOTH);
   glPointSize(6.0);
   glLineWidth(3.0);

   }

void tampil(void){
    if (is_depth)
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    else
        glClear(GL_COLOR_BUFFER_BIT);

    //ALAS
    glBegin(GL_QUADS);
    glColor3f(0.0, 128/255.0f, 0.0);
    glVertex3f(60.0, 0.0, 60.0);
    glVertex3f(60.0, 0.0, -60.0);
    glVertex3f(-60.0, 0.0, -60.0);
    glVertex3f(-60.0, 0.0, 60.0);
    glEnd();

    //LAPANGAN
    glBegin(GL_QUADS);
    glColor3f(0.0, 100/255.0f, 0.0);
    glVertex3f(40.0, 0.05, 35.0);
    glVertex3f(40.0, 0.05, -35.0);
    glVertex3f(35.0, 0.05, -35.0);
    glVertex3f(35.0, 0.05, 35.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 128/255.0f, 0.0);
    glVertex3f(35.0, 0.05, 35.0);
    glVertex3f(35.0, 0.05, -35.0);
    glVertex3f(30.0, 0.05, -35.0);
    glVertex3f(30.0, 0.05, 35.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 100/255.0f, 0.0);
    glVertex3f(30.0, 0.05, 35.0);
    glVertex3f(30.0, 0.05, -35.0);
    glVertex3f(25.0, 0.05, -35.0);
    glVertex3f(25.0, 0.05, 35.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 128/255.0f, 0.0);
    glVertex3f(25.0, 0.05, 35.0);
    glVertex3f(25.0, 0.05, -35.0);
    glVertex3f(20.0, 0.05, -35.0);
    glVertex3f(20.0, 0.05, 35.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 100/255.0f, 0.0);
    glVertex3f(20.0, 0.05, 35.0);
    glVertex3f(20.0, 0.05, -35.0);
    glVertex3f(15.0, 0.05, -35.0);
    glVertex3f(15.0, 0.05, 35.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 128/255.0f, 0.0);
    glVertex3f(15.0, 0.05, 35.0);
    glVertex3f(15.0, 0.05, -35.0);
    glVertex3f(10.0, 0.05, -35.0);
    glVertex3f(10.0, 0.05, 35.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 100/255.0f, 0.0);
    glVertex3f(10.0, 0.05, 35.0);
    glVertex3f(10.0, 0.05, -35.0);
    glVertex3f(5.0, 0.05, -35.0);
    glVertex3f(5.0, 0.05, 35.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 128/255.0f, 0.0);
    glVertex3f(5.0, 0.05, 35.0);
    glVertex3f(5.0, 0.05, -35.0);
    glVertex3f(0.0, 0.05, -35.0);
    glVertex3f(0.0, 0.05, 35.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 100/255.0f, 0.0);
    glVertex3f(0.0, 0.05, 35.0);
    glVertex3f(0.0, 0.05, -35.0);
    glVertex3f(-5.0, 0.05, -35.0);
    glVertex3f(-5.0, 0.05, 35.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 128/255.0f, 0.0);
    glVertex3f(-5.0, 0.05, 35.0);
    glVertex3f(-5.0, 0.05, -35.0);
    glVertex3f(-10.0, 0.05, -35.0);
    glVertex3f(-10.0, 0.05, 35.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 100/255.0f, 0.0);
    glVertex3f(-10.0, 0.05, 35.0);
    glVertex3f(-10.0, 0.05, -35.0);
    glVertex3f(-15.0, 0.05, -35.0);
    glVertex3f(-15.0, 0.05, 35.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 128/255.0f, 0.0);
    glVertex3f(-15.0, 0.05, 35.0);
    glVertex3f(-15.0, 0.05, -35.0);
    glVertex3f(-20.0, 0.05, -35.0);
    glVertex3f(-20.0, 0.05, 35.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 100/255.0f, 0.0);
    glVertex3f(-20.0, 0.05, 35.0);
    glVertex3f(-20.0, 0.05, -35.0);
    glVertex3f(-25.0, 0.05, -35.0);
    glVertex3f(-25.0, 0.05, 35.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 128/255.0f, 0.0);
    glVertex3f(-25.0, 0.05, 35.0);
    glVertex3f(-25.0, 0.05, -35.0);
    glVertex3f(-30.0, 0.05, -35.0);
    glVertex3f(-30.0, 0.05, 35.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 100/255.0f, 0.0);
    glVertex3f(-30.0, 0.05, 35.0);
    glVertex3f(-30.0, 0.05, -35.0);
    glVertex3f(-35.0, 0.05, -35.0);
    glVertex3f(-35.0, 0.05, 35.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 128/255.0f, 0.0);
    glVertex3f(-35.0, 0.05, 35.0);
    glVertex3f(-35.0, 0.05, -35.0);
    glVertex3f(-40.0, 0.05, -35.0);
    glVertex3f(-40.0, 0.05, 35.0);
    glEnd();

    //GARIS LAPANGAN
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.0, 0.05, 35.0);
    glVertex3f(40.0, 0.05, -35.0);
    glVertex3f(-40.0, 0.05, -35.0);
    glVertex3f(-40.0, 0.05, 35.0);
    glEnd();

    //GARIS TENGAH
    glBegin(GL_LINES);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(0.0, 0.05, 35.0);
    glVertex3f(0.0, 0.05, -35.0);
    glEnd();

    //GARIS GAWANG 1
    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.0, 0.05, 15.0);
    glVertex3f(28.0, 0.05, 15.0);
    glVertex3f(28.0, 0.05, -15.0);
    glVertex3f(40.0, 0.05, -15.0);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(40.0, 0.05, 10.0);
    glVertex3f(33.0, 0.05, 10.0);
    glVertex3f(33.0, 0.05, -10.0);
    glVertex3f(40.0, 0.05, -10.0);
    glEnd();

    //GARIS GAWANG 2
    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-40.0, 0.05, 15.0);
    glVertex3f(-28.0, 0.05, 15.0);
    glVertex3f(-28.0, 0.05, -15.0);
    glVertex3f(-40.0, 0.05, -15.0);
    glEnd();

    glBegin(GL_LINE_STRIP);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-40.0, 0.05, 10.0);
    glVertex3f(-33.0, 0.05, 10.0);
    glVertex3f(-33.0, 0.05, -10.0);
    glVertex3f(-40.0, 0.05, -10.0);
    glEnd();

    //SPONSOR 1
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 139/255.0f);
    glVertex3f(35.0, 0.05, 50.0);
    glVertex3f(35.0, 5.0, 50.0);
    glVertex3f(25.0, 5.0, 50.0);
    glVertex3f(25.0, 0.05, 50.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 139/255.0f);
    glVertex3f(35.0, 0.05, 49.0);
    glVertex3f(35.0, 5.0, 49.0);
    glVertex3f(25.0, 5.0, 49.0);
    glVertex3f(25.0, 0.05, 49.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(25.0, 0.05, 50.0);
    glVertex3f(25.0, 5.0, 50.0);
    glVertex3f(15.0, 5.0, 50.0);
    glVertex3f(15.0, 0.05, 50.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(25.0, 0.05, 49.0);
    glVertex3f(25.0, 5.0, 49.0);
    glVertex3f(15.0, 5.0, 49.0);
    glVertex3f(15.0, 0.05, 49.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 139/255.0f);
    glVertex3f(15.0, 5.0, 49.0);
    glVertex3f(15.0, 0.05, 49.0);
    glVertex3f(5.0, 0.05, 49.0);
    glVertex3f(5.0, 5.0, 49.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 139/255.0f);
    glVertex3f(15.0, 5.0, 50.0);
    glVertex3f(15.0, 0.05, 50.0);
    glVertex3f(5.0, 0.05, 50.0);
    glVertex3f(5.0, 5.0, 50.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(5.0, 0.05, 50.0);
    glVertex3f(5.0, 5.0, 50.0);
    glVertex3f(-5.0, 5.0, 50.0);
    glVertex3f(-5.0, 0.05, 50.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(5.0, 0.05, 49.0);
    glVertex3f(5.0, 5.0, 49.0);
    glVertex3f(-5.0, 5.0, 49.0);
    glVertex3f(-5.0, 0.05, 49.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 139/255.0f);
    glVertex3f(-5.0, 5.0, 50.0);
    glVertex3f(-5.0, 0.05, 50.0);
    glVertex3f(-15.0, 0.05, 50.0);
    glVertex3f(-15.0, 5.0, 50.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 139/255.0f);
    glVertex3f(-5.0, 5.0, 49.0);
    glVertex3f(-5.0, 0.05, 49.0);
    glVertex3f(-15.0, 0.05, 49.0);
    glVertex3f(-15.0, 5.0, 49.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(-15.0, 0.05, 50.0);
    glVertex3f(-15.0, 5.0, 50.0);
    glVertex3f(-25.0, 5.0, 50.0);
    glVertex3f(-25.0, 0.05, 50.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(-15.0, 0.05, 49.0);
    glVertex3f(-15.0, 5.0, 49.0);
    glVertex3f(-25.0, 5.0, 49.0);
    glVertex3f(-25.0, 0.05, 49.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 139/255.0f);
    glVertex3f(-25.0, 5.0, 50.0);
    glVertex3f(-25.0, 0.05, 50.0);
    glVertex3f(-35.0, 0.05, 50.0);
    glVertex3f(-35.0, 5.0, 50.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 139/255.0f);
    glVertex3f(-25.0, 5.0, 49.0);
    glVertex3f(-25.0, 0.05, 49.0);
    glVertex3f(-35.0, 0.05, 49.0);
    glVertex3f(-35.0, 5.0, 49.0);
    glEnd();

    glBegin(GL_QUADS);//POJOK
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(-35.0, 0.05, 49.0);
    glVertex3f(-35.0, 5.0, 49.0);
    glVertex3f(-40.0, 5.0, 47.0);
    glVertex3f(-40.0, 0.05, 47.0);
    glEnd();

    glBegin(GL_QUADS);//POJOK I
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(-35.0, 0.05, 50.0);
    glVertex3f(-35.0, 5.0, 50.0);
    glVertex3f(-40.0, 5.0, 48.0);
    glVertex3f(-40.0, 0.05, 48.0);
    glEnd();

    glBegin(GL_QUADS);//POJOK -
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(-40.0, 5.0, 47.0);
    glVertex3f(-40.0, 0.05, 47.0);
    glVertex3f(-45.0, 0.05, 43.0);
    glVertex3f(-45.0, 5.0, 43.0);
    glEnd();

    glBegin(GL_QUADS);//POJOK I
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(-40.0, 5.0, 48.0);
    glVertex3f(-40.0, 0.05, 48.0);
    glVertex3f(-45.0, 0.05, 44.0);
    glVertex3f(-45.0, 5.0, 44.0);
    glEnd();

    glBegin(GL_QUADS);//POJOK -
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(-45.0, 0.05, 43.0);
    glVertex3f(-45.0, 5.0, 43.0);
    glVertex3f(-49.0, 5.0, 38.0);
    glVertex3f(-49.0, 0.05, 38.0);
    glEnd();

    glBegin(GL_QUADS);//POJOK I
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(-45.0, 0.05, 44.0);
    glVertex3f(-45.0, 5.0, 44.0);
    glVertex3f(-50.0, 5.0, 38.0);
    glVertex3f(-50.0, 0.05, 38.0);
    glEnd();

    glBegin(GL_QUADS);//SAMPING -
    glColor3f(0.0, 0.0, 139/255.0f);
    glVertex3f(-50.0, 5.0, 38.0);
    glVertex3f(-50.0, 0.05, 38.0);
    glVertex3f(-50.0, 0.05, -38.0);
    glVertex3f(-50.0, 5.0, -38.0);
    glEnd();

    glBegin(GL_QUADS);//SAMPING -
    glColor3f(0.0, 0.0, 139/255.0f);
    glVertex3f(-49.0, 5.0, 38.0);
    glVertex3f(-49.0, 0.05, 38.0);
    glVertex3f(-49.0, 0.05, -38.0);
    glVertex3f(-49.0, 5.0, -38.0);
    glEnd();

    glBegin(GL_QUADS);//SAMPING ATAS -
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-50.0, 5.0, 38.0);
    glVertex3f(-49.0, 5.0, 38.0);
    glVertex3f(-49.0, 5.0, -38.0);
    glVertex3f(-50.0, 5.0, -38.0);
    glEnd();

    //ATAS SPONSOR
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-35.0, 5.0, 49.0);
    glVertex3f(-35.0, 5.0, 50.0);
    glVertex3f(35.0, 5.0, 50.0);
    glVertex3f(35.0, 5.0, 49.0);
    glEnd();

    //ATAS POJOK -
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-35.0, 5.0, 49.0);
    glVertex3f(-35.0, 5.0, 50.0);
    glVertex3f(-40.0, 5.0, 48.0);
    glVertex3f(-40.0, 5.0, 47.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-40.0, 5.0, 47.0);
    glVertex3f(-40.0, 5.0, 48.0);
    glVertex3f(-45.0, 5.0, 44.0);
    glVertex3f(-45.0, 5.0, 43.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-45.0, 5.0, 44.0);
    glVertex3f(-45.0, 5.0, 43.0);
    glVertex3f(-49.0, 5.0, 38.0);
    glVertex3f(-50.0, 5.0, 38.0);
    glEnd();

    glBegin(GL_QUADS);//POJOK +
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(35.0, 0.05, 49.0);
    glVertex3f(35.0, 5.0, 49.0);
    glVertex3f(40.0, 5.0, 47.0);
    glVertex3f(40.0, 0.05, 47.0);
    glEnd();

    glBegin(GL_QUADS);//POJOK I
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(35.0, 0.05, 50.0);
    glVertex3f(35.0, 5.0, 50.0);
    glVertex3f(40.0, 5.0, 48.0);
    glVertex3f(40.0, 0.05, 48.0);
    glEnd();

    glBegin(GL_QUADS);//POJOK +
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(40.0, 5.0, 47.0);
    glVertex3f(40.0, 0.05, 47.0);
    glVertex3f(45.0, 0.05, 43.0);
    glVertex3f(45.0, 5.0, 43.0);
    glEnd();

    glBegin(GL_QUADS);//POJOK I
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(40.0, 5.0, 48.0);
    glVertex3f(40.0, 0.05, 48.0);
    glVertex3f(45.0, 0.05, 44.0);
    glVertex3f(45.0, 5.0, 44.0);
    glEnd();

    glBegin(GL_QUADS);//POJOK +
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(45.0, 0.05, 43.0);
    glVertex3f(45.0, 5.0, 43.0);
    glVertex3f(49.0, 5.0, 38.0);
    glVertex3f(49.0, 0.05, 38.0);
    glEnd();

    glBegin(GL_QUADS);//POJOK I
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(45.0, 0.05, 44.0);
    glVertex3f(45.0, 5.0, 44.0);
    glVertex3f(50.0, 5.0, 38.0);
    glVertex3f(50.0, 0.05, 38.0);
    glEnd();

    //ATAS POJOK +
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(35.0, 5.0, 49.0);
    glVertex3f(35.0, 5.0, 50.0);
    glVertex3f(40.0, 5.0, 48.0);
    glVertex3f(40.0, 5.0, 47.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(40.0, 5.0, 47.0);
    glVertex3f(40.0, 5.0, 48.0);
    glVertex3f(45.0, 5.0, 44.0);
    glVertex3f(45.0, 5.0, 43.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(45.0, 5.0, 44.0);
    glVertex3f(45.0, 5.0, 43.0);
    glVertex3f(49.0, 5.0, 38.0);
    glVertex3f(50.0, 5.0, 38.0);
    glEnd();



    //SPONSOR 2
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 139/255.0f);
    glVertex3f(35.0, 0.05, -50.0);
    glVertex3f(35.0, 5.0, -50.0);
    glVertex3f(25.0, 5.0, -50.0);
    glVertex3f(25.0, 0.05, -50.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 139/255.0f);
    glVertex3f(35.0, 0.05, -49.0);
    glVertex3f(35.0, 5.0, -49.0);
    glVertex3f(25.0, 5.0, -49.0);
    glVertex3f(25.0, 0.05, -49.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(25.0, 0.05, -50.0);
    glVertex3f(25.0, 5.0, -50.0);
    glVertex3f(15.0, 5.0, -50.0);
    glVertex3f(15.0, 0.05, -50.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(25.0, 0.05, -49.0);
    glVertex3f(25.0, 5.0, -49.0);
    glVertex3f(15.0, 5.0, -49.0);
    glVertex3f(15.0, 0.05, -49.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 139/255.0f);
    glVertex3f(15.0, 5.0, -49.0);
    glVertex3f(15.0, 0.05, -49.0);
    glVertex3f(5.0, 0.05, -49.0);
    glVertex3f(5.0, 5.0, -49.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 139/255.0f);
    glVertex3f(15.0, 5.0, -50.0);
    glVertex3f(15.0, 0.05, -50.0);
    glVertex3f(5.0, 0.05, -50.0);
    glVertex3f(5.0, 5.0, -50.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(5.0, 0.05, -50.0);
    glVertex3f(5.0, 5.0, -50.0);
    glVertex3f(-5.0, 5.0, -50.0);
    glVertex3f(-5.0, 0.05, -50.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(5.0, 0.05, -49.0);
    glVertex3f(5.0, 5.0, -49.0);
    glVertex3f(-5.0, 5.0, -49.0);
    glVertex3f(-5.0, 0.05, -49.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 139/255.0f);
    glVertex3f(-5.0, 5.0, -50.0);
    glVertex3f(-5.0, 0.05, -50.0);
    glVertex3f(-15.0, 0.05, -50.0);
    glVertex3f(-15.0, 5.0, -50.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 139/255.0f);
    glVertex3f(-5.0, 5.0, -49.0);
    glVertex3f(-5.0, 0.05, -49.0);
    glVertex3f(-15.0, 0.05, -49.0);
    glVertex3f(-15.0, 5.0, -49.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(-15.0, 0.05, -50.0);
    glVertex3f(-15.0, 5.0, -50.0);
    glVertex3f(-25.0, 5.0, -50.0);
    glVertex3f(-25.0, 0.05, -50.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(-15.0, 0.05, -49.0);
    glVertex3f(-15.0, 5.0, -49.0);
    glVertex3f(-25.0, 5.0, -49.0);
    glVertex3f(-25.0, 0.05, -49.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 139/255.0f);
    glVertex3f(-25.0, 5.0, -50.0);
    glVertex3f(-25.0, 0.05, -50.0);
    glVertex3f(-35.0, 0.05, -50.0);
    glVertex3f(-35.0, 5.0, -50.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 139/255.0f);
    glVertex3f(-25.0, 5.0, -49.0);
    glVertex3f(-25.0, 0.05, -49.0);
    glVertex3f(-35.0, 0.05, -49.0);
    glVertex3f(-35.0, 5.0, -49.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-35.0, 5.0, -49.0);
    glVertex3f(-35.0, 5.0, -50.0);
    glVertex3f(35.0, 5.0, -50.0);
    glVertex3f(35.0, 5.0, -49.0);
    glEnd();

    glBegin(GL_QUADS);//POJOK
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(-35.0, 0.05, -49.0);
    glVertex3f(-35.0, 5.0, -49.0);
    glVertex3f(-40.0, 5.0, -47.0);
    glVertex3f(-40.0, 0.05, -47.0);
    glEnd();

    glBegin(GL_QUADS);//POJOK I
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(-35.0, 0.05, -50.0);
    glVertex3f(-35.0, 5.0, -50.0);
    glVertex3f(-40.0, 5.0, -48.0);
    glVertex3f(-40.0, 0.05, -48.0);
    glEnd();

    glBegin(GL_QUADS);//POJOK
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(-40.0, 5.0, -47.0);
    glVertex3f(-40.0, 0.05, -47.0);
    glVertex3f(-45.0, 0.05, -43.0);
    glVertex3f(-45.0, 5.0, -43.0);
    glEnd();

    glBegin(GL_QUADS);//POJOK I
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(-40.0, 5.0, -48.0);
    glVertex3f(-40.0, 0.05, -48.0);
    glVertex3f(-45.0, 0.05, -44.0);
    glVertex3f(-45.0, 5.0, -44.0);
    glEnd();

    glBegin(GL_QUADS);//POJOK
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(-45.0, 0.05, -43.0);
    glVertex3f(-45.0, 5.0, -43.0);
    glVertex3f(-49.0, 5.0, -38.0);
    glVertex3f(-49.0, 0.05, -38.0);
    glEnd();

    glBegin(GL_QUADS);//POJOK I
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(-45.0, 0.05, -44.0);
    glVertex3f(-45.0, 5.0, -44.0);
    glVertex3f(-50.0, 5.0, -38.0);
    glVertex3f(-50.0, 0.05, -38.0);
    glEnd();

    //ATAS POJOK
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-35.0, 5.0, -49.0);
    glVertex3f(-35.0, 5.0, -50.0);
    glVertex3f(-40.0, 5.0, -48.0);
    glVertex3f(-40.0, 5.0, -47.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-40.0, 5.0, -47.0);
    glVertex3f(-40.0, 5.0, -48.0);
    glVertex3f(-45.0, 5.0, -44.0);
    glVertex3f(-45.0, 5.0, -43.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-45.0, 5.0, -44.0);
    glVertex3f(-45.0, 5.0, -43.0);
    glVertex3f(-49.0, 5.0, -38.0);
    glVertex3f(-50.0, 5.0, -38.0);
    glEnd();

    glBegin(GL_QUADS);//POJOK
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(35.0, 0.05, -49.0);
    glVertex3f(35.0, 5.0, -49.0);
    glVertex3f(40.0, 5.0, -47.0);
    glVertex3f(40.0, 0.05, -47.0);
    glEnd();

    glBegin(GL_QUADS);//POJOK I
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(35.0, 0.05, -50.0);
    glVertex3f(35.0, 5.0, -50.0);
    glVertex3f(40.0, 5.0, -48.0);
    glVertex3f(40.0, 0.05, -48.0);
    glEnd();

    glBegin(GL_QUADS);//POJOK
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(40.0, 5.0, -47.0);
    glVertex3f(40.0, 0.05, -47.0);
    glVertex3f(45.0, 0.05, -43.0);
    glVertex3f(45.0, 5.0, -43.0);
    glEnd();

    glBegin(GL_QUADS);//POJOK I
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(40.0, 5.0, -48.0);
    glVertex3f(40.0, 0.05, -48.0);
    glVertex3f(45.0, 0.05, -44.0);
    glVertex3f(45.0, 5.0, -44.0);
    glEnd();

    glBegin(GL_QUADS);//POJOK
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(45.0, 0.05, -43.0);
    glVertex3f(45.0, 5.0, -43.0);
    glVertex3f(49.0, 5.0, -38.0);
    glVertex3f(49.0, 0.05, -38.0);
    glEnd();

    glBegin(GL_QUADS);//POJOK I
    glColor3f(119/255.0f, 136/255.0f, 153/255.0f);
    glVertex3f(45.0, 0.05, -44.0);
    glVertex3f(45.0, 5.0, -44.0);
    glVertex3f(50.0, 5.0, -38.0);
    glVertex3f(50.0, 0.05, -38.0);
    glEnd();

    //ATAS POJOK +
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(35.0, 5.0, -49.0);
    glVertex3f(35.0, 5.0, -50.0);
    glVertex3f(40.0, 5.0, -48.0);
    glVertex3f(40.0, 5.0, -47.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(40.0, 5.0, -47.0);
    glVertex3f(40.0, 5.0, -48.0);
    glVertex3f(45.0, 5.0, -44.0);
    glVertex3f(45.0, 5.0, -43.0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(45.0, 5.0, -44.0);
    glVertex3f(45.0, 5.0, -43.0);
    glVertex3f(49.0, 5.0, -38.0);
    glVertex3f(50.0, 5.0, -38.0);
    glEnd();

    glBegin(GL_QUADS);//SAMPING +
    glColor3f(0.0, 0.0, 139/255.0f);
    glVertex3f(50.0, 5.0, 38.0);
    glVertex3f(50.0, 0.05, 38.0);
    glVertex3f(50.0, 0.05, -38.0);
    glVertex3f(50.0, 5.0, -38.0);
    glEnd();

    glBegin(GL_QUADS);//SAMPING +
    glColor3f(0.0, 0.0, 139/255.0f);
    glVertex3f(49.0, 5.0, 38.0);
    glVertex3f(49.0, 0.05, 38.0);
    glVertex3f(49.0, 0.05, -38.0);
    glVertex3f(49.0, 5.0, -38.0);
    glEnd();

    glBegin(GL_QUADS);//SAMPING ATAS +
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(50.0, 5.0, 38.0);
    glVertex3f(49.0, 5.0, 38.0);
    glVertex3f(49.0, 5.0, -38.0);
    glVertex3f(50.0, 5.0, -38.0);
    glEnd();

    glPopMatrix();
    glutSwapBuffers();


}

void idle(){
    if(!mouseDown){
        xrot += 0.3f;
        yrot += 0.4f;
    }
    glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{

    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        mouseDown = true;
        xdiff = x - yrot;
        ydiff = -y + xrot;
    }
    else
        mouseDown = false;


}

void mouseMotion(int x, int y)
{
    cocok();
    if (mouseDown)
    {
        yrot = x - xdiff;
        xrot = y + ydiff;

        glutPostRedisplay();
    }

}
void ukuran(int lebar, int tinggi)
{
    if (tinggi == 0) tinggi =1;

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(90, lebar / tinggi, 5, 500);
    glTranslated(0, -5, -150);
    glMatrixMode(GL_MODELVIEW);

}

void keyboard(unsigned char key, int x, int y)
{

    switch(key)
    {
        case 'w':
        case 'W':
            glTranslated(0,0,3);
            break;
        case 'd':
        case 'D':
            glTranslated(3,0,0);
            break;
        case 's':
        case 'S':
            glTranslated(0,0,-3);
            break;
        case 'a':
        case 'A':
            glTranslated(-3,0,0);
            break;
        case '7':
            glTranslated(0,3,0);
            break;
        case '9':
            glTranslated(0,-3,0);
            break;
        case '2':
            glRotated(2,1,0,0);
            break;
        case '8':
            glRotated(-2,1,0,0);
            break;
        case '6':
            glRotated(2,0,1,0);
            break;
        case '0':
            glRotated(-2,0,1,0);
            break;
        case '4':
            glRotated(-2,1,0,0);
            break;
        case '1':
            glRotated(2,0,0,1);
            break;
        case '3':
            glRotated(-2,0,0,1);
            break;
        case '5':
            if (is_depth)
            {
                is_depth = 0;
                glDisable(GL_DEPTH_TEST);
            }
            else
            {
                is_depth = 1;
                glDisable(GL_DEPTH_TEST);
            }
    }
    tampil();


}

int main(int argc, char **argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition(100, 50);
    glutInitWindowSize(1200, 700);
    glutCreateWindow("ABYARAKE ADIYOGA - 672018098 PITER WIJAYA - 672018109 ARYA PRATAMA S - 672018364");
    init();
    glutDisplayFunc(tampil);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
    glutReshapeFunc(ukuran);
    glutMainLoop();

    return 0;
}
