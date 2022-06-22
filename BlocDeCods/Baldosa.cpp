#include <GL/glut.h>
#include <stdio.h>
void init() {
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
}
void display(void) {
	float angulo = 0;
	for (int i = 0; i <= 4; i++) {
		glPushMatrix();
		glRotatef(angulo, 0, 0, 1);
		//RAYAS AMARILLA Y NARANJA AL CENTRO
		glColor3f(0.98, 0.55, 0.16);//raya naranja
		glBegin(GL_POLYGON);
		glVertex2f(0.0, 0.8);
		glVertex2f(0.0, 0.73);
		glVertex2f(0.73, 0.0);
		glVertex2f(0.8, 0.0);
		glEnd();
		glColor3f(0.976, 0.95, 0.027);//raya amarilla
		glBegin(GL_POLYGON);
		glVertex2f(0.0, 0.73);
		glVertex2f(0.0, 0.66);
		glVertex2f(0.66, 0.0);
		glVertex2f(0.73, 0.0);
		glEnd();
		//RAYAS AMARILLA Y NARANJA EN LA ESQUINA
		glColor3f(0.98, 0.55, 0.16);//raya naranja
		glBegin(GL_POLYGON);
		glVertex2f(0.2, 1.0);
		glVertex2f(0.27, 1.0);
		glVertex2f(1.0, 0.27);
		glVertex2f(1.0, 0.2);
		glEnd();
		glColor3f(0.976, 0.95, 0.027);//raya amarilla
		glBegin(GL_POLYGON);
		glVertex2f(0.27, 1.0);
		glVertex2f(0.35, 1.0);
		glVertex2f(1.0, 0.35);
		glVertex2f(1.0, 0.27);
		glEnd();
		//RAYAS AZUL NEGRA AZUL
		glColor3f(0.0, 0.0, 0.0);//raya negra grande
		glBegin(GL_POLYGON);
		glVertex2f(0.0, 0.8);
		glVertex2f(0.13, 1.0);
		glVertex2f(1.0, 0.13);
		glVertex2f(0.8, 0.0);
		glEnd();
		glColor3f(0.012, 0.098, 0.61);//raya azul 1
		glBegin(GL_POLYGON);
		glVertex2f(0.0, 0.8);
		glVertex2f(0.0, 0.87);
		glVertex2f(0.87, 0.0);
		glVertex2f(0.8, 0.0);
		glEnd();
		glColor3f(0.012, 0.098, 0.61);//raya azul 2
		glBegin(GL_POLYGON);
		glVertex2f(0.2, 1.0);
		glVertex2f(0.13, 1.0);
		glVertex2f(1.0, 0.13);
		glVertex2f(1.0, 0.2);
		glEnd();
		//TRIANGULO ARRIBA DE RAYAS
		glColor3f(1.0, 1.0, 1.0);//raya blanca
		glBegin(GL_POLYGON);
		glVertex2f(0.0, 0.8);
		glVertex2f(0.2, 1.0);
		glVertex2f(0.16, 1.0);
		glVertex2f(0.0, 0.84);
		glEnd();
		glColor3f(0.98, 0.55, 0.16);//raya naranja
		glBegin(GL_POLYGON);
		glVertex2f(0.16, 1.0);
		glVertex2f(0.0, 0.84);
		glVertex2f(0.0, 0.88);
		glVertex2f(0.12, 1.0);
		glEnd();
		glColor3f(0.976, 0.95, 0.027);//raya amarilla
		glBegin(GL_POLYGON);
		glVertex2f(0.0, 0.88);
		glVertex2f(0.12, 1.0);
		glVertex2f(0.08, 1.0);
		glVertex2f(0.0, 0.92);
		glEnd();
		glColor3f(1.0, 1.0, 1.0);//raya blanca
		glBegin(GL_POLYGON);
		glVertex2f(0.08, 1.0);
		glVertex2f(0.0, 0.92);
		glVertex2f(0.0, 0.96);
		glVertex2f(0.04, 1.0);
		glEnd();
		glColor3f(0.012, 0.098, 0.61);//triangulo bebe azul
		glBegin(GL_POLYGON);
		glVertex2f(0.0, 0.96);
		glVertex2f(0.04, 1.0);
		glVertex2f(0.0, 1.0);
		glEnd();
		//TRIANGULO ABAJO DE RAYAS
		glColor3f(1.0, 1.0, 1.0);//raya blanca
		glBegin(GL_POLYGON);
		glVertex2f(0.8, 0.0);
		glVertex2f(1.0, 0.2);
		glVertex2f(1.0, 0.16);
		glVertex2f(0.84, 0.0);
		glEnd();
		glColor3f(0.98, 0.55, 0.16);//raya naranja
		glBegin(GL_POLYGON);
		glVertex2f(1.0, 0.16);
		glVertex2f(0.84, 0.0);
		glVertex2f(0.88, 0.0);
		glVertex2f(1.0, 0.12);
		glEnd();
		glColor3f(0.976, 0.95, 0.027);//raya amarilla
		glBegin(GL_POLYGON);
		glVertex2f(0.88, 0.0);
		glVertex2f(1.0, 0.12);
		glVertex2f(1.0, 0.08);
		glVertex2f(0.92, 0.0);
		glEnd();
		glColor3f(1.0, 1.0, 1.0);//raya blanca
		glBegin(GL_POLYGON);
		glVertex2f(1.0, 0.08);
		glVertex2f(0.92, 0.0);
		glVertex2f(0.96, 0.0);
		glVertex2f(1.0, 0.04);
		glEnd();
		glColor3f(0.012, 0.098, 0.61);//triangulo bebe azul
		glBegin(GL_POLYGON);
		glVertex2f(0.96, 0.0);
		glVertex2f(1.0, 0.04);
		glVertex2f(1.0, 0.0);
		glEnd();
		//RAYAS NEGRAS
		glColor3f(0.0, 0.0, 0.0);
		glLineWidth(2);
		glBegin(GL_LINES);
		glVertex2f(0.0, 0.8);
		glVertex2f(0.2, 1.0);
		glVertex2f(0.0, 0.8);
		glVertex2f(0.0, 0.66);
		glVertex2f(0.0, 0.66);
		glVertex2f(0.66, 0.0);
		glVertex2f(0.66, 0.0);
		glVertex2f(0.8, 0.0);
		glVertex2f(0.0, 0.73);
		glVertex2f(0.73, 0.0);
		glVertex2f(0.8, 0.0);
		glVertex2f(0.0, 0.8);
		glVertex2f(0.2, 1.0);
		glVertex2f(1.0, 0.2);
		glVertex2f(0.27, 1.0);
		glVertex2f(1.0, 0.27);
		glVertex2f(0.35, 1.0);
		glVertex2f(1.0, 0.35);
		glVertex2f(0.2, 1.0);
		glVertex2f(0.35, 1.0);
		glVertex2f(1.0, 0.2);
		glVertex2f(1.0, 0.35);
		glVertex2f(0.8, 0.0);
		glVertex2f(1.0, 0.2);
		glEnd();
		//FLOR DEL CENTRO
		glColor3f(0.976, 0.95, 0.027);//centro amarilla
		glBegin(GL_POLYGON);
		glVertex2f(0.0, 0.0);
		glVertex2f(0.0, 0.08);
		glVertex2f(0.08, 0.0);
		glEnd();
		glColor3f(0.012, 0.098, 0.61);//petalo azul vertical
		glBegin(GL_TRIANGLES);
		glVertex2f(0.0, 0.5);
		glVertex2f(0.07, 0.3);
		glVertex2f(0.0, 0.3);
		glVertex2f(0.0, 0.3);
		glVertex2f(0.0, 0.1);
		glVertex2f(0.12, 0.3);
		glVertex2f(0.12, 0.3);
		glVertex2f(0.12, 0.2);
		glVertex2f(0.0, 0.1);
		glVertex2f(0.12, 0.2);
		glVertex2f(0.0, 0.1);
		glVertex2f(0.1, 0.15);
		glVertex2f(0.07, 0.125);
		glVertex2f(0.0, 0.1);
		glVertex2f(0.1, 0.15);
		glVertex2f(0.12, 0.3);
		glVertex2f(0.0, 0.3);
		glVertex2f(0.12, 0.34);
		glEnd();
		glColor3f(0.012, 0.098, 0.61);//petalo azul horizontal
		glBegin(GL_TRIANGLES);
		glVertex2f(0.5, 0.0);
		glVertex2f(0.3, 0.07);
		glVertex2f(0.3, 0.0);
		glVertex2f(0.3, 0.0);
		glVertex2f(0.1, 0.0);
		glVertex2f(0.3, 0.12);
		glVertex2f(0.3, 0.12);
		glVertex2f(0.2, 0.12);
		glVertex2f(0.1, 0.0);
		glVertex2f(0.2, 0.12);
		glVertex2f(0.1, 0.0);
		glVertex2f(0.15, 0.1);
		glVertex2f(0.125, 0.07);
		glVertex2f(0.1, 0.0);
		glVertex2f(0.15, 0.1);
		glVertex2f(0.3, 0.12);
		glVertex2f(0.3, 0.0);
		glVertex2f(0.34, 0.12);
		glEnd();

		glPopMatrix();
		angulo = angulo + 90;
	}
	glFlush();
}
void teclado(unsigned char key, int xmouse, int ymouse) {
	if (key == 'r') printf("tecla r\n");
}
void main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);
	glutInitWindowPosition(50, 100);
	glutInitWindowSize(400, 400);
	glutCreateWindow("Diseño sencillo de una baldosa");
	init();
	glutDisplayFunc(display);
	glutKeyboardFunc(teclado);
	glutMainLoop();
}
