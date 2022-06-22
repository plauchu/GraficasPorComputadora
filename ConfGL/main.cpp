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


float verT[8][4] =
{
    {-0.5,-0.5,0.5, 0.0},
    {-0.5,0.5,0.5, 0.0},
    {0.5,0.5,0.5, 0.0},
    {0.5,-0.5,0.5, 0.0},
    {-0.5,-0.5,-0.5, 0.0},
    {-0.5,0.5,-0.5, 0.0},
    {0.5,0.5,-0.5, 0.0},
    {0.5,-0.5,-0.5, 0.0},
};

GLfloat colorT[8][4] =
{
    {0.0,0.0,0.0, 0.0},
    {1.0,0.0,0.0, 0.0},
    {1.0,1.0,0.0, 0.0},
    {0.0,1.0,0.0, 0.0},
    {0.0,0.0,1.0, 0.0},
    {1.0,0.0,1.0, 0.0},
    {1.0,1.0,1.0, 0.0},
    {0.0,1.0,1.0, 0.0},
};

void quadT(int a, int b, int c, int d)
{
    glBegin(GL_QUADS);
    glColor3fv(colorT[a]);
    glVertex3fv(verT[a]);

    glColor3fv(colorT[b]);
    glVertex3fv(verT[b]);

    glColor3fv(colorT[c]);
    glVertex3fv(verT[c]);

    glColor3fv(colorT[d]);
    glVertex3fv(verT[d]);
    glEnd();
}

void colorcubeT()
{
    quadT(1, 1, 1, 1);
    quadT(1, 1, 1, 1);
    quadT(1, 1, 1, 1);
    quadT(1, 1, 1, 1);
    quadT(1, 1, 1, 1);
    quadT(1, 1, 1, 1);
}
double rotate_y = 0;
double rotate_x = 0;
double zoom = 0.0;
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

static int spin = 0;

void mouse(int button, int state, int x, int y)
{
    switch (button) {
    case GLUT_LEFT_BUTTON:
        if (state == GLUT_DOWN) {
            spin = (spin + 30) % 360;
            glutPostRedisplay();
        }
        break;
    case GLUT_RIGHT_BUTTON:
        if (state == GLUT_UP) {
            spin = (spin - 30) % 360;
            glutPostRedisplay();
        }
        break;
    default:
        break;
    }
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

void foco1(void)
{
    GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
    GLfloat mat_shininess[] = { 50.0 };
    GLfloat light_position[] = { 1.0, 1.0, 1.0, 0.0 };
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_SMOOTH);

    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
}

void foco2(void)
{
    GLfloat mat_specular[] = { 0.0, 2.0, 2.0, 2.0 };
    GLfloat mat_shininess[] = { 100.0 };
    GLfloat light_position[] = { 0.0, 2.0, 2.0, 2.0 };
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_SMOOTH);

    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
}

void display()
{

    GLfloat position[] = { 0.0, 0.0, 1.5, 1.0 };


    glRotated((GLdouble)spin, 1.0, 0.0, 0.0);
    glLightfv(GL_LIGHT0, GL_POSITION, position);

    glTranslated(0.0, 0.0, 1.5);
    glDisable(GL_LIGHTING);
    glColor3f(0.0, 1.0, 1.0);
    glEnable(GL_LIGHTING);

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
    colorcubeT();
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

void reshape(int w, int h)
{
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(40.0, (GLfloat)w / (GLfloat)h, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DEPTH | GLUT_DOUBLE);
    glutInitWindowSize(800, 800);
    glutCreateWindow("GLUT");
    foco1();
    foco2();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutSpecialFunc(specialKeys);
    glEnable(GL_DEPTH_TEST);
    glutMouseFunc(mouse);
    glutMainLoop();
    return 0;
}