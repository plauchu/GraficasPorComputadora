#include <GL/glut.h>

void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-5.0, 5.0, -5.0, 5.0);
    glMatrixMode(GL_MODELVIEW);
}

void drawSquare(void)
{
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, -1.0f);
    glVertex2f(1.5f, 0.0f);
    glVertex2f(0.0f, 1.0f);
    glVertex2f(-1.5f, 0.0f);
    glEnd();
}

void drawSquare2(void)
{
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 0.7f);
    glVertex2f(-2.0f, 0.0f);
    glVertex2f(0.0f, -0.7f);
    glVertex2f(2.0f, 0.0f);
    glEnd();
}

void myDraw1(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glColor3f(0.8, 0.498039, 0.196078);
    glPushMatrix();
    glRotatef(90.0, 0.0, 0.0, 1.0);
    glTranslatef(0.0, 0.0, 0.0);
    drawSquare();
    glPopMatrix();

    glColor3f(0.8, 0.498039, 0.196078);
    glPushMatrix();
    glRotatef(23.0, 0.0, 0.0, 1.0);
    glTranslatef(0.9, -1.25, 0.0);
    drawSquare();
    glPopMatrix();

    glColor3f(0.8, 0.498039, 0.196078);
    glPushMatrix();
    glRotatef(-23.0, 0.0, 0.0, 1.0);
    glTranslatef(-0.9, -1.25, 0.0);
    drawSquare();
    glPopMatrix();

    glColor3f(0.8, 0.498039, 0.196078);
    glPushMatrix();
    glRotatef(54.5, 0.0, 0.0, 1.0);
    glTranslatef(-2.25, -0.6, 0.0);
    drawSquare();
    glPopMatrix();

    glColor3f(0.8, 0.498039, 0.196078);
    glPushMatrix();
    glRotatef(-54.6, 0.0, 0.0, 1.0);
    glTranslatef(2.25, -0.6, 0.0);
    drawSquare();
    glPopMatrix();

    glColor3f(0.0f, 0.0f, 1.0f);
    glPushMatrix();
    glRotatef(30, 0.0, 0.0, 1.0);
    glTranslatef(-0.7, 1.2, 0.0);
    drawSquare2();
    glPopMatrix();

    glColor3f(0.0f, 0.0f, 1.0f);
    glPushMatrix();
    glRotatef(-30, 0.0, 0.0, 1.0);
    glTranslatef(0.7, 1.2, 0.0);
    drawSquare2();
    glPopMatrix();

    glColor3f(0.0f, 0.0f, 1.0f);
    glPushMatrix();
    glRotatef(106, 0.0, 0.0, 1.0);
    glTranslatef(-1.2, 2.7, 0.0);
    drawSquare2();
    glPopMatrix();

    glColor3f(0.0f, 0.0f, 1.0f);
    glPushMatrix();
    glRotatef(-106, 0.0, 0.0, 1.0);
    glTranslatef(1.2, 2.7, 0.0);
    drawSquare2();
    glPopMatrix();

    glColor3f(0.0f, 0.0f, 1.0f);
    glPushMatrix();
    glRotatef(0, 0.0, 0.0, 1.0);
    glTranslatef(0.0, -3.4, 0.0);
    drawSquare2();
    glPopMatrix();

    glColor3f(0.8, 0.498039, 0.196078);
    glPushMatrix();
    glRotatef(230.0, 0.0, 0.0, 1.0);
    glTranslatef(-1.2, -2.0, 0.0);
    drawSquare();
    glPopMatrix();

    glColor3f(0.8, 0.498039, 0.196078);
    glPushMatrix();
    glRotatef(-230.0, 0.0, 0.0, 1.0);
    glTranslatef(1.2, -2.0, 0.0);
    drawSquare();
    glPopMatrix();

    glColor3f(0.8, 0.498039, 0.196078);
    glPushMatrix();
    glRotatef(125.0, 0.0, 0.0, 1.0);
    glTranslatef(3.2, 0.6, 0.0);
    drawSquare();
    glPopMatrix();

    glColor3f(0.8, 0.498039, 0.196078);
    glPushMatrix();
    glRotatef(190.0, 0.0, 0.0, 1.0);
    glTranslatef(2.8, -1.3, 0.0);
    drawSquare();
    glPopMatrix();

    glColor3f(0.8, 0.498039, 0.196078);
    glPushMatrix();
    glRotatef(121.0, 0.0, 0.0, 1.0);
    glTranslatef(1.3, 3.45, 0.0);
    drawSquare();
    glPopMatrix();

    glColor3f(0.8, 0.498039, 0.196078);
    glPushMatrix();
    glRotatef(190.0, 0.0, 0.0, 1.0);
    glTranslatef(4.6, 1.4, 0.0);
    drawSquare();
    glPopMatrix();

    glColor3f(0.8, 0.498039, 0.196078);
    glPushMatrix();
    glRotatef(87.0, 0.0, 0.0, 1.0);
    glTranslatef(-3.3, 2.9, 0.0);
    drawSquare();
    glPopMatrix();

    glColor3f(0.8, 0.498039, 0.196078);
    glPushMatrix();
    glRotatef(-300.0, 0.0, 0.0, 1.0);
    glTranslatef(3.1, -0.89, 0.0);
    drawSquare();
    glPopMatrix();

    glColor3f(0.8, 0.498039, 0.196078);
    glPushMatrix();
    glRotatef(-190.0, 0.0, 0.0, 1.0);
    glTranslatef(-2.8, -1.3, 0.0);
    drawSquare();
    glPopMatrix();

    glColor3f(0.8, 0.498039, 0.196078);
    glPushMatrix();
    glRotatef(-170.0, 0.0, 0.0, 1.0);
    glTranslatef(2.2, 4.0, 0.0);
    drawSquare();
    glPopMatrix();

    glColor3f(0.8, 0.498039, 0.196078);
    glPushMatrix();
    glRotatef(-170.0, 0.0, 0.0, 1.0);
    glTranslatef(2.6, 3.8, 0.0);
    drawSquare();
    glPopMatrix();

    glColor3f(0.8, 0.498039, 0.196078);
    glPushMatrix();
    glRotatef(260.0, 0.0, 0.0, 1.0);
    glTranslatef(5.4, 0.7, 0.0);
    drawSquare();
    glPopMatrix();

    glColor3f(0.8, 0.498039, 0.196078);
    glPushMatrix();
    glRotatef(-190.0, 0.0, 0.0, 1.0);
    glTranslatef(-1.87, 4.2, 0.0);
    drawSquare();
    glPopMatrix();

    glColor3f(0.8, 0.498039, 0.196078);
    glPushMatrix();
    glRotatef(-190.0, 0.0, 0.0, 1.0);
    glTranslatef(-2.4, 3.9, 0.0);
    drawSquare();
    glPopMatrix();

    glColor3f(0.8, 0.498039, 0.196078);
    glPushMatrix();
    glRotatef(-120.0, 0.0, 0.0, 1.0);
    glTranslatef(-1.25, 3.5, 0.0);
    drawSquare();
    glPopMatrix();

    glColor3f(0.8, 0.498039, 0.196078);
    glPushMatrix();
    glRotatef(-181.0, 0.0, 0.0, 1.0);
    glTranslatef(-4.45, 1.9, 0.0);
    drawSquare();
    glPopMatrix();

    glColor3f(0.8, 0.498039, 0.196078);
    glPushMatrix();
    glRotatef(-92.0, 0.0, 0.0, 1.0);
    glTranslatef(3.0, 3.45, 0.0);
    drawSquare();
    glPopMatrix();

    glColor3f(0.8, 0.498039, 0.196078);
    glPushMatrix();
    glRotatef(-92.0, 0.0, 0.0, 1.0);
    glTranslatef(2.8, 3.6, 0.0);
    drawSquare();
    glPopMatrix();

    glColor3f(0.8, 0.498039, 0.196078);
    glPushMatrix();
    glRotatef(-90.0, 0.0, 0.0, 1.0);
    glTranslatef(3.39, 2.95, 0.0);
    drawSquare();
    glPopMatrix();

    glColor3f(0.0f, 0.0f, 1.0f);
    glPushMatrix();
    glRotatef(180, 0.0, 0.0, 1.0);
    glTranslatef(1.4, -3.5, 0.0);
    drawSquare2();
    glPopMatrix();

    glColor3f(0.0f, 0.0f, 1.0f);
    glPushMatrix();
    glRotatef(180, 0.0, 0.0, 1.0);
    glTranslatef(-1.6, -3.4, 0.0);
    drawSquare2();
    glPopMatrix();

    glFlush();
}

void main(int argc, char** argv)

{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Teselación");
    init();
    glutDisplayFunc(myDraw1);
    glutMainLoop();
}