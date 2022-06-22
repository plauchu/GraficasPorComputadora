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
    glRectf(-1.5f, 1.0f, 1.5f, -1.0f);
}

void rectangle(void)
{
    glRectf(-0.5f, 1.5f, 0.5f, -1.5f);
}


glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glColor3f(0.1, 0.1, 0.1);
    glPushMatrix();
    glRotatef(-45.0, 0.0, 0.0, 1.0);
    glTranslatef(0.0, 5.0, 0.0);
    rectangle();
    glPopMatrix();

    glColor3f(0.3, 0.3, 0.3);
    glPushMatrix();
    glRotatef(-45.0, 0.0, 0.0, 1.0);
    glTranslatef(0.0, 4.0, 0.0);
    drawSq();
    glPopMatrix();

    glutSwapBuffers();

    glFlush();