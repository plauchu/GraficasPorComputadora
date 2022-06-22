#ifdef __APPLE__
#include<GLUT/glut.h>
#include<openGL/openGL.h>

#else
#include<GL/glut.h>
#endif

#include<GL/glu.h>
#include<GL/gl.h>

void init(void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-5.0, 5.0, -5.0, 5.0);
    glMatrixMode(GL_MODELVIEW);
    glEnable(GL_DEPTH_TEST);
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

void drawSq(void)
{
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 0.5f);
    glVertex2f(-0.5f, 0.0f);
    glVertex2f(0.5f, 0.5f);
    glVertex2f(-0.5f, -0.5f);
    glEnd();
}

void rectangle(void)
{
    glBegin(GL_POLYGON);
    glVertex2f(0.0f, 0.7f);
    glVertex2f(-2.0f, 0.0f);
    glVertex2f(0.0f, -0.7f);
    glVertex2f(2.0f, 0.0f);
    glEnd();
}

float x1 = -2.0, x2 = 2.0;
float x = 0.7;
float y = 0.7;
static int flag = 1;
void initRendering()
{
    glEnable(GL_DEPTH_TEST);
}

void keyPressed(int key, int x1, int y1)
{
    if (key == GLUT_KEY_UP)
    {
        x = x * 1.10;
        y = y * 1.10;
        glutPostRedisplay();
    }
    if (key == GLUT_KEY_DOWN)
    {
        x = x * 0.90;
        y = y * 0.90;
        glutPostRedisplay();
    }
}

void reshape(int w, int h) {
    //viewport
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-10, 10, -10, 10);
    glMatrixMode(GL_MODELVIEW);
}

void myDraw1(void)
{
    static float dist = 0.0;
    static float rot = 0.0;

    while (dist < 1)
    {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();

        glTranslatef(dist, dist, 0.0);
        glRotatef(rot, 0.0, 0.0, 1.0);

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

        dist += 0.001;
        rot += 0.001;


        glutSwapBuffers();  /// intercambiar las areas donde se escribe
    }

    dist = 0.0;
    rot = 0.0;

    while (dist > -1)
    {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();

        glTranslatef(dist, dist, 0.0);
        glRotatef(rot, 0.0, 0.0, 1.0);

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

        dist -= 0.001;
        rot -= 0.001;


        glutSwapBuffers();  /// intercambiar las areas donde se escribe
    }
    dist = 0.0;
    rot = 0.0;
    while (rot < 10)
    {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glMatrixMode(GL_MODELVIEW);
        glLoadIdentity();

        glTranslatef(0, 0, 0.0);
        glRotatef(rot, 0.0, 0.0, 1.0);

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

        dist = 0.0;
        rot += 0.001;


        glutSwapBuffers();  /// intercambiar las areas donde se escribe
    }

    
}

float x_position = -10.0;
int state = 1; //1 right,-1 left

void timer(int) {
    glutPostRedisplay();
    //60 frame are called per second
    glutTimerFunc(1000 / 60, timer, 0);//60fps

    switch (state) {
    case 1:
        if (x_position < 8)
            x_position += 0.05;
        else
            state = -1;
        break;
    case -1:
        if (x_position > -10)
            x_position -= 0.05;
        else
            state = 1;
        break;
    }
}


int main(int argc, char** argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(800, 800);
    glutCreateWindow("Teselación");
    glutReshapeFunc(reshape);
    init();
    glutDisplayFunc(myDraw1);
    glutIdleFunc(myDraw1);
    glutMainLoop();

    return(0);
}