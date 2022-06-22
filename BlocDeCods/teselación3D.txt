#ifdef __APPLE__
#include<GLUT/glut.h>
#include<openGL/openGL.h>

#else
#include<GL/glut.h>
#endif

#include<GL/glu.h>
#include<GL/gl.h>
#include <GL/glut.h>
float ver[8][3] =
{
    {-0.5,-0.5,0.5},
    {-0.5,0.5,0.5},
    {0.5,0.5,0.5},
    {0.5,-0.5,0.5},
    {-0.5,-0.5,-0.5},
    {-0.5,0.5,-0.5},
    {0.5,0.5,-0.5},
    {0.5,-0.5,-0.5},
};

GLfloat color[8][3] =
{
    {0.0,0.0,0.0},
    {1.0,0.0,0.0},
    {1.0,1.0,0.0},
    {0.0,1.0,0.0},
    {0.0,0.0,1.0},
    {1.0,0.0,1.0},
    {1.0,1.0,1.0},
    {0.0,1.0,1.0},
};

void quad(int a, int b, int c, int d)
{
    glBegin(GL_QUADS);
    glColor3fv(color[a]);
    glVertex3fv(ver[a]);

    glColor3fv(color[b]);
    glVertex3fv(ver[b]);

    glColor3fv(color[c]);
    glVertex3fv(ver[c]);

    glColor3fv(color[d]);
    glVertex3fv(ver[d]);
    glEnd();
}

void colorcube()
{
    quad(0, 3, 2, 1);
    quad(2, 3, 7, 6);
    quad(0, 4, 7, 3);
    quad(1, 2, 6, 5);
    quad(4, 5, 6, 7);
    quad(0, 1, 5, 4);
}

double rotate_y = 0;
double rotate_x = 0;
double zoom = -5;
void specialKeys(int key, int x, int y)
{
    if (key == GLUT_KEY_RIGHT)
        rotate_y += 5;
    else if (key == GLUT_KEY_LEFT)
        rotate_y -= 5;
    else if (key == GLUT_KEY_UP) {
        rotate_x += 5;
        zoom += .10;
    }
    else if (key == GLUT_KEY_DOWN) {
        rotate_x -= 5;
        zoom -= .10;
    }
    glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{
    //Right arrow - increase rotation by 5 degree
    if (state == GLUT_DOWN && button == GLUT_RIGHT_BUTTON)
    {
        rotate_y += 10;
    }
    //Left arrow - decrease rotation by 5 degree
    else if (state == GLUT_DOWN && button == GLUT_LEFT_BUTTON)
    {
        rotate_y -= 10;
    }
    /*else if(state == GLUT_DOWN && button == 3)
    {
      rotate_x += 5;
    }
    else if(state == GLUT_DOWN && button == 4)
    {
      rotate_x -= 5;
    }*/

    glutPostRedisplay();

}

/*void MouseWheel(int wheel, int direction, int x, int y)
{
    wheel=0;
    if (direction==-1)
    {
        rotate_x -= 10;
    }
    else if (direction==+1)
    {
        rotate_x += 10;
    }

 glutPostRedisplay();

}*/

void MouseWheel(int wheel, int direction, int x, int y)
{
    wheel = 0;
    if (direction == -1)
    {
        zoom -= 0.5;

    }
    else if (direction == +1)
    {
        zoom += 0.5;
    }

    glutPostRedisplay();

}


void display()
{
    glClearColor(0, 0, 0, 1);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    int w = glutGet(GLUT_WINDOW_WIDTH);
    int h = glutGet(GLUT_WINDOW_HEIGHT);
    gluPerspective(60, w / h, 0.1, 100);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt
    (
        3, 3, 3,
        0, 0, 0,
        0, 0, 1
    );

    glRotatef(rotate_x, 1.0, 0.0, 0.0);
    glRotatef(rotate_y, 0.0, 1.0, 0.0);

    glScalef(zoom, zoom, 1.0f);

    glPushMatrix();
    glRotatef(90.0, 0.0, 0.0, 1.0);
    glTranslatef(0.0, 0.0, 0.0);
    colorcube();
    glPopMatrix();

    glPushMatrix();
    glRotatef(23.0, 0.0, 0.0, 1.0);
    glTranslatef(0.9, -1.25, 0.0);
    colorcube();
    glPopMatrix();

    glPushMatrix();
    glRotatef(-23.0, 0.0, 0.0, 1.0);
    glTranslatef(-0.9, -1.25, 0.0);
    colorcube();
    glPopMatrix();

    glPushMatrix();
    glRotatef(54.5, 0.0, 0.0, 1.0);
    glTranslatef(-2.25, -0.6, 0.0);
    colorcube();
    glPopMatrix();

    glPushMatrix();
    glRotatef(-54.6, 0.0, 0.0, 1.0);
    glTranslatef(2.25, -0.6, 0.0);
    colorcube();
    glPopMatrix();

    glPushMatrix();
    glRotatef(30, 0.0, 0.0, 1.0);
    glTranslatef(-0.7, 1.2, 0.0);
    colorcube();
    glPopMatrix();

    glPushMatrix();
    glRotatef(-30, 0.0, 0.0, 1.0);
    glTranslatef(0.7, 1.2, 0.0);
    colorcube();
    glPopMatrix();

    glPushMatrix();
    glRotatef(106, 0.0, 0.0, 1.0);
    glTranslatef(-1.2, 2.7, 0.0);
    colorcube();
    glPopMatrix();

    glPushMatrix();
    glRotatef(-106, 0.0, 0.0, 1.0);
    glTranslatef(1.2, 2.7, 0.0);
    colorcube();
    glPopMatrix();

    glPushMatrix();
    glRotatef(0, 0.0, 0.0, 1.0);
    glTranslatef(0.0, -3.4, 0.0);
    colorcube();
    glPopMatrix();

    glPushMatrix();
    glRotatef(230.0, 0.0, 0.0, 1.0);
    glTranslatef(-1.2, -2.0, 0.0);
    colorcube();
    glPopMatrix();

    glPushMatrix();
    glRotatef(-230.0, 0.0, 0.0, 1.0);
    glTranslatef(1.2, -2.0, 0.0);
    colorcube();
    glPopMatrix();

    glPushMatrix();
    glRotatef(125.0, 0.0, 0.0, 1.0);
    glTranslatef(3.2, 0.6, 0.0);
    colorcube();
    glPopMatrix();

    glPushMatrix();
    glRotatef(190.0, 0.0, 0.0, 1.0);
    glTranslatef(2.8, -1.3, 0.0);
    colorcube();
    glPopMatrix();

    glPushMatrix();
    glRotatef(121.0, 0.0, 0.0, 1.0);
    glTranslatef(1.3, 3.45, 0.0);
    colorcube();
    glPopMatrix();

    glPushMatrix();
    glRotatef(190.0, 0.0, 0.0, 1.0);
    glTranslatef(4.6, 1.4, 0.0);
    colorcube();
    glPopMatrix();

    glPushMatrix();
    glRotatef(87.0, 0.0, 0.0, 1.0);
    glTranslatef(-3.3, 2.9, 0.0);
    colorcube();
    glPopMatrix();

    glPushMatrix();
    glRotatef(-300.0, 0.0, 0.0, 1.0);
    glTranslatef(3.1, -0.89, 0.0);
    colorcube();
    glPopMatrix();

    glPushMatrix();
    glRotatef(-190.0, 0.0, 0.0, 1.0);
    glTranslatef(-2.8, -1.3, 0.0);
    colorcube();
    glPopMatrix();

    glPushMatrix();
    glRotatef(-170.0, 0.0, 0.0, 1.0);
    glTranslatef(2.2, 4.0, 0.0);
    colorcube();
    glPopMatrix();

    glPushMatrix();
    glRotatef(-170.0, 0.0, 0.0, 1.0);
    glTranslatef(2.6, 3.8, 0.0);
    colorcube();
    glPopMatrix();

    glPushMatrix();
    glRotatef(260.0, 0.0, 0.0, 1.0);
    glTranslatef(5.4, 0.7, 0.0);
    colorcube();
    glPopMatrix();

    glPushMatrix();
    glRotatef(-190.0, 0.0, 0.0, 1.0);
    glTranslatef(-1.87, 4.2, 0.0);
    colorcube();
    glPopMatrix();

    glPushMatrix();
    glRotatef(-190.0, 0.0, 0.0, 1.0);
    glTranslatef(-2.4, 3.9, 0.0);
    colorcube();
    glPopMatrix();

    glPushMatrix();
    glRotatef(-120.0, 0.0, 0.0, 1.0);
    glTranslatef(-1.25, 3.5, 0.0);
    colorcube();
    glPopMatrix();

    glPushMatrix();
    glRotatef(-181.0, 0.0, 0.0, 1.0);
    glTranslatef(-4.45, 1.9, 0.0);
    colorcube();
    glPopMatrix();

    glPushMatrix();
    glRotatef(-92.0, 0.0, 0.0, 1.0);
    glTranslatef(3.0, 3.45, 0.0);
    colorcube();
    glPopMatrix();

    glPushMatrix();
    glRotatef(-92.0, 0.0, 0.0, 1.0);
    glTranslatef(2.8, 3.6, 0.0);
    colorcube();
    glPopMatrix();

    glPushMatrix();
    glRotatef(-90.0, 0.0, 0.0, 1.0);
    glTranslatef(3.39, 2.95, 0.0);
    colorcube();
    glPopMatrix();

    glPushMatrix();
    glRotatef(180, 0.0, 0.0, 1.0);
    glTranslatef(1.4, -3.5, 0.0);
    colorcube();
    glPopMatrix();

    glPushMatrix();
    glRotatef(180, 0.0, 0.0, 1.0);
    glTranslatef(-1.6, -3.4, 0.0);
    colorcube();
    glPopMatrix();


    glutSwapBuffers();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE);
    glutInitWindowSize(800, 800);
    glutCreateWindow("GLUT");
    glutDisplayFunc(display);
    glutSpecialFunc(specialKeys);
    glEnable(GL_DEPTH_TEST);
    glutMouseFunc(mouse);
    glutMainLoop();
    return 0;
}