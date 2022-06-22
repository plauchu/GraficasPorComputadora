#include <GL/glut.h>
#include <iostream>

using namespace std;


void display() {

	static float dist = 0.0;
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glPushMatrix();
	/// guardar estado actual en una pila ("stack")

	glTranslatef(dist, 0.0, 0.0);
	/// trasladar la escena

	glBegin(GL_TRIANGLES);
	glVertex2f(0.0, 0.0);    ///2f: 2 numeros (porque en 2D), tipo float
	glVertex2f(0.5, 0.0);
	glVertex2f(0.5, 0.5);
	glEnd();

	glFlush();

	glPopMatrix();
	/// recuperar informacion guardada	 

	dist += 0.001;

	if (dist > 1) dist = -1.0;

	glutSwapBuffers();  /// intercambiar las areas donde se escribe
}





int main(int argc, char** argv) {
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	/// DOUBLE: double buffer (escribe en area por separado, copiar todo de una vez)

	glutInitWindowSize(800, 800);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Primero");

	glutDisplayFunc(display);
	glutIdleFunc(display);   /// la funcion que se llama cuando no esta pasando nada
	/// aqui, queremos actualizar el despliegue

	glutMainLoop();

}