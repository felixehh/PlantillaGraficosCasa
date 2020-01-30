// PlantillaGraficos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//


#include <stdio.h>
#include <stdlib.h>

#define GLEW_STATIC

#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <iostream>

using namespace std;

void dibujarQuads() {
	glBegin(GL_QUADS);
	glColor3f(0.4f, 0.8f, 0.0f);

	glVertex3f(1.0f, -0.5f, 0.0f);
	glVertex3f(-1.0f, -0.5f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);

	glColor3f(0.6f, 0.0f, 0.5f);

	glVertex3f(-0.3f, 0.1f, 0.0f);
	glVertex3f(0.7f, 0.1f, 0.0f);
	glVertex3f(0.7f, -0.7f, 0.0f);
	glVertex3f(-0.3f, -0.7f, 0.0f);

	glEnd();
}

void dibujarLineaContinua() {
	glBegin(GL_LINE_STRIP);

	glColor3f(0.1f, 0.3f, 0.75f);

	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.0f, 0.2f, 0.0f);
	glVertex3f(0.4f, 0.2f, 0.0f);
	glVertex3f(0.2f, 0.3f, 0.0f);

	glEnd();
}

void dibujarTriangulos() {
	//establecemos el tipo de primitiva
	glBegin(GL_TRIANGLES);
	//establecemos color
	/*glColor3f(1.0f, 0.0f, 0.5f); 
	//enviar vertices
	glVertex3f(0.0f, 0.7f, 0.0f);
	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(-0.7f, -0.7f, 0.0f);
	glColor3f(1.0f, 0.7f, 0.0f);
	glVertex3f(0.7f, -0.7f, 0.0f);

	glColor3f(0.4f, 0.6f, 1.0f);

	glVertex3f(0.4f, 0.4f, 0.0f);
	glVertex3f(-0.4f, 0.4f, 0.0f);
	glVertex3f(0.4f, -0.4f, 0.0f);
	glVertex3f(-0.4f, -0.4f, 0.0f);
	glVertex3f(-0.4f, 0.4f, 0.0f);
	glVertex3f(0.4f, -0.4f, 0.0f);*/
	//especificar que dejaremos de dibujar

	glColor3f(0.6f, 0.7f, 0.8f);

	glVertex3f(-0.4f, 0.1f, 0.0f);


	glEnd();
}

void dibujarLineas() {
	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.6f);

	glVertex3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.2f, 0.5f, 0.0f);

	glColor3f(0.0f, 0.3f, 0.6f);

	glVertex3f(0.3f, 0.0f, 0.0f);
	glVertex3f(0.6f, 0.5f, 0.0f);

	glEnd();
}

void dibujarNubes() {
	float teta;
	//1
	glPushMatrix();

	glTranslatef(-0.22f, 0.52f, 0.0f);
	glScalef(0.15f, 0.05f, 1.0f);

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	for (int i = 0; i < 360; i++)
	{
		teta = i * 3.1416 / 180;
		glVertex3f(cos(teta), sin(teta), 0.0f);
	}

	glEnd();

	glPopMatrix();
	//2
	glPushMatrix();

	glTranslatef(-0.07f, 0.55f, 0.0f);
	glScalef(0.1f, 0.05f, 1.0f);

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	for (int i = 0; i < 360; i++)
	{
		teta = i * 3.1416 / 180;
		glVertex3f(cos(teta), sin(teta), 0.0f);
	}

	glEnd();

	glPopMatrix();

	//3
	glPushMatrix();

	glTranslatef(0.42f, 0.8f, 0.0f);
	glScalef(0.3f, 0.10f, 1.0f);

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	for (int i = 0; i < 360; i++)
	{
		teta = i * 3.1416 / 180;
		glVertex3f(cos(teta), sin(teta), 0.0f);
	}

	glEnd();

	glPopMatrix();

	//4
	glPushMatrix();

	glTranslatef(0.6f, 0.9f, 0.0f);
	glScalef(0.2f, 0.05f, 1.0f);

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	for (int i = 0; i < 360; i++)
	{
		teta = i * 3.1416 / 180;
		glVertex3f(cos(teta), sin(teta), 0.0f);
	}

	glEnd();

	glPopMatrix();

	//5
	glPushMatrix();

	glTranslatef(0.8f, 0.5f, 0.0f);
	glScalef(0.25f, 0.05f, 1.0f);

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	for (int i = 0; i < 360; i++)
	{
		teta = i * 3.1416 / 180;
		glVertex3f(cos(teta), sin(teta), 0.0f);
	}

	glEnd();

	glPopMatrix();

	//6
	glPushMatrix();

	glTranslatef(0.9f, 0.55f, 0.0f);
	glScalef(0.25f, 0.05f, 1.0f);

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);

	for (int i = 0; i < 360; i++)
	{
		teta = i * 3.1416 / 180;
		glVertex3f(cos(teta), sin(teta), 0.0f);
	}

	glEnd();

	glPopMatrix();
}

void dibujarSol()
{
	float teta;

	glPushMatrix();

	glTranslatef(-0.8f, 0.8f, 0.0f);
	glScalef(0.15f, 0.15f, 1.0f);

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);

	for (int i = 0; i < 360; i++)
	{
		teta = i * 3.1416 / 180;
		glVertex3f(cos(teta), sin(teta), 0.0f);
	}

	glEnd();

	glPopMatrix();

	//rayos

	//1er par
	glPushMatrix();

	glRotatef(0.0f, 0.0f, 0.0f, 1.0f);

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex3f(-0.81f, 0.63f, 0.0f);
	glVertex3f(-0.81f, 0.53f, 0.0f);
	glVertex3f(-0.80f, 0.53f, 0.0f);
	glVertex3f(-0.80f, 0.63f, 0.0f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex3f(-0.81f, 1.0f, 0.0f);
	glVertex3f(-0.81f, 0.97f, 0.0f);
	glVertex3f(-0.80f, 0.97f, 0.0f);
	glVertex3f(-0.80f, 1.0f, 0.0f);

	glEnd();

	glPopMatrix();

	//2do par
	glPushMatrix();

	glTranslatef(0.32f, 0.78f, 0.0f);
	glRotatef(45.0f, 0.0f, 0.0f, 1.0f);



	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex3f(-0.81f, 0.63f, 0.0f);
	glVertex3f(-0.81f, 0.53f, 0.0f);
	glVertex3f(-0.80f, 0.53f, 0.0f);
	glVertex3f(-0.80f, 0.63f, 0.0f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex3f(-0.81f, 1.0f, 0.0f);
	glVertex3f(-0.81f, 0.97f, 0.0f);
	glVertex3f(-0.80f, 0.97f, 0.0f);
	glVertex3f(-0.80f, 1.0f, 0.0f);

	glEnd();

	glPopMatrix();

	//
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 0.0f);

	glVertex3f(-0.60f, 0.83f, 0.0f);
	glVertex3f(-0.60f, 0.82f, 0.0f);
	glVertex3f(-0.50f, 0.82f, 0.0f);
	glVertex3f(-0.50f, 0.83f, 0.0f);

	glEnd();

}

void dibujarArbol()
{
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.37f, 0.2f, 0.10f);

	glVertex3f(-0.8f, -0.1f, 0.0f);
	glVertex3f(-0.8f, -0.7f, 0.0f);
	glVertex3f(-0.57f, -0.7f, 0.0f);
	glVertex3f(-0.57f, -0.1f, 0.0f);
	glVertex3f(-0.8f, -0.1f, 0.0f);

	glEnd();
	//hojas 1
	float teta;

	glPushMatrix();

	glTranslatef(-0.7f, 0.0f, 0.0f);
	glScalef(0.25f, 0.25f, 1.0f);

	glBegin(GL_POLYGON);
	glColor3f(0.20, 0.6, 0.13);

	for (int i = 0; i < 360; i++)
	{
		teta = i * 3.1416 / 180;
		glVertex3f(cos(teta), sin(teta), 0.0f);
	}

	glEnd();

	glPopMatrix();

	//hojas 2
	glPushMatrix();

	glTranslatef(-0.55f, 0.15f, 0.0f);
	glScalef(0.25f, 0.25f, 1.0f);

	glBegin(GL_POLYGON);
	glColor3f(0.20, 0.6, 0.13);

	for (int i = 0; i < 360; i++)
	{
		teta = i * 3.1416 / 180;
		glVertex3f(cos(teta), sin(teta), 0.0f);
	}

	glEnd();

	glPopMatrix();

	//hojas 3
	glPushMatrix();

	glTranslatef(-0.6f, 0.35f, 0.0f);
	glScalef(0.25f, 0.25f, 1.0f);

	glBegin(GL_POLYGON);
	glColor3f(0.20, 0.6, 0.13);

	for (int i = 0; i < 360; i++)
	{
		teta = i * 3.1416 / 180;
		glVertex3f(cos(teta), sin(teta), 0.0f);
	}

	glEnd();

	glPopMatrix();
}

void dibujarTecho() {
	glBegin(GL_TRIANGLES);
	glColor3f(0.2f, 0.1f, 0.07f);

	glVertex3f(-0.4f, 0.1f, 0.0f);
	glVertex3f(0.8f, 0.1f, 0.0f);
	glVertex3f(0.2f, 0.65f, 0.0f);

	glEnd();
}

void dibujarPuerta() {
	glBegin(GL_TRIANGLE_STRIP);
	glColor3f(0.6f, 0.6f, 0.6f);

	glVertex3f(0.1f, -0.3f, 0.0f);
	glVertex3f(0.1f, -0.7f, 0.0f);
	glVertex3f(0.35f, -0.7f, 0.0f);
	glVertex3f(0.35f, -0.3f, 0.0f);
	glVertex3f(0.1f, -0.3f, 0.0f);

	glEnd();

	float teta;

	glPushMatrix();

	glTranslatef(0.3f, -0.45f, 0.0f);
	glScalef(0.025f, 0.025f, 1.0f);

	glBegin(GL_POLYGON);
	glColor3f(0.3f, 0.3f, 0.3f);

	for (int i = 0; i < 360; i++)
	{
		teta = i * 3.1416 / 180;
		glVertex3f(cos(teta), sin(teta), 0.0f);
	}

	glEnd();

	glPopMatrix();
}


void dibujar() {
	dibujarQuads();
	dibujarTecho();
	dibujarPuerta();
	dibujarTriangulos();
	dibujarSol();
	dibujarNubes();
	dibujarArbol();
}

int main()
{
   //declarar una ventana
	GLFWwindow* window;

	//Si no se pudo iniciar GLFW
	//Terminamos ejecucion
	if (!glfwInit()) {
		exit(EXIT_FAILURE);
	}
	//Si se pudo iniciar GLFW
	//iniciamos la ventana
	window = glfwCreateWindow(600, 600, "Ventana", NULL, NULL);

	//si no se pudo crear la ventana terminamos ejecucion
	if (!window)
	{
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	//establecemos la ventana como contexto
	glfwMakeContextCurrent(window);

	//una vez estableciendo el contexto se activan las funciones modernas (gpu)
	glewExperimental = true;

	GLenum errores = glewInit();
	if (errores != GLEW_OK)
	{
		glewGetErrorString(errores);
	}

	const GLubyte* versionGL = glGetString(GL_VERSION);
	cout << "Version OpenGL: " << versionGL;

	//ciclo de dibujo (Draw loop)
	while (!glfwWindowShouldClose(window))
	{
		//establecer region de dibujo
		glViewport(0, 0, 600, 600);
		//establecemos el color de borrado
		//Valores RGBA
		glClearColor(0.67, 0.84, 1.0, 1);
		//Borrar!
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

		//Actualizar valores y dibujar
		dibujar();

		glfwPollEvents();
		glfwSwapBuffers(window);
	}
	//despues del ciclo de dibujo eliminamos venta y procesos de glfw
	glfwDestroyWindow(window);
	glfwTerminate();
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
