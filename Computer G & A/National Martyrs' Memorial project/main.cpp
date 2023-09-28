#include<cstdio>
#include <windows.h>
#include<math.h>
# define PI 3.14159265358979323846
#include <GL/gl.h>
#include <GL/glut.h>
GLfloat q=0.0f;
GLfloat position = 0.0f;
GLfloat speed = 0.01f;
int r=0;

void update(int value) {

    if(position > 1.0)
        position = -1.0f;

    position += speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}

void mainshape()
{
//head
    glBegin(GL_TRIANGLES);
	glColor3ub(166, 166, 166);;
	glVertex2f(-0.01f, 0.8f);
    glVertex2f(0.01f, 0.8f);
    glVertex2f(0.0f, 0.85f);
	glEnd();
	//main base
//1st
	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.2f, -0.3f);
    glVertex2f(0.2f, -0.3f);
    glVertex2f(0.0f, 0.8f);
	glEnd();
//2nd
	glBegin(GL_TRIANGLES);
	glColor3ub(150, 150, 150);
	glVertex2f(-0.17f, -0.1f);
    glVertex2f(0.17f, -0.1f);
    glVertex2f(0.0f, 0.0f);
	glEnd();
//3rd
    glBegin(GL_QUADS);
    glColor3ub(128, 128, 128);
	glVertex2f(0.0f,0.0f);
    glVertex2f(0.112f, 0.2);
    glVertex2f(0.0f, 0.4f);
    glVertex2f(-0.112f, 0.2f);
	glEnd();
//4th
	glBegin(GL_POLYGON);
	glColor3ub(166, 166, 166);
	glVertex2f(-0.105f,0.215f);
	glVertex2f(-0.110f, 0.2f);
    glVertex2f(-0.105f, 0.185);
    glVertex2f(0.105f,0.185f);
    glVertex2f(0.110f, 0.2);
    glVertex2f(0.105f, 0.215f);
	glEnd();

	//main base border
//5th
	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);
	glVertex2f(0.16f,-0.1f);
    glVertex2f(0.17f, -0.1f);
    glVertex2f(0.01f,0.8f);
    glVertex2f(0.0f, 0.8f);
	glEnd();
//6th
	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);
	glVertex2f(-0.16f,-0.1f);
    glVertex2f(-0.17f, -0.1f);
    glVertex2f(-0.01f,0.8f);
    glVertex2f(-0.00f, 0.8f);
	glEnd();
//7th
	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);
	glVertex2f(0.17f, -0.1f);
    glVertex2f(0.3f, -0.1f);
    glVertex2f(0.045f, 0.6f);
	glEnd();
//8th
	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.17f, -0.1f);
    glVertex2f(-0.3f, -0.1f);
    glVertex2f(-0.045f, 0.6f);
	glEnd();
//9th
	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);
	glVertex2f(0.3f,-0.1f);
    glVertex2f(0.31f, -0.1f);
    glVertex2f(0.055f,0.57f);
    glVertex2f(0.054f, 0.55f);
	glEnd();
//10th
	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);
	glVertex2f(-0.3f,-0.1f);
    glVertex2f(-0.31f, -0.1f);
    glVertex2f(-0.055f,0.57f);
    glVertex2f(-0.054f, 0.55f);
	glEnd();
//11th
	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);
	glVertex2f(0.31f, -0.1f);
    glVertex2f(0.43f, -0.1f);
    glVertex2f(0.138f, 0.35f);
	glEnd();

//12th
	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.31f, -0.1f);
    glVertex2f(-0.43f, -0.1f);
    glVertex2f(-0.138f, 0.35f);
	glEnd();

//13th
	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);
	glVertex2f(0.43f,-0.1f);
    glVertex2f(0.44f, -0.1f);
    glVertex2f(0.138f,0.35f);
    glVertex2f(0.14f,0.33f);
	glEnd();

//14th
	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);
	glVertex2f(-0.43f,-0.1f);
    glVertex2f(-0.44f,-0.1f);
    glVertex2f(-0.138f,0.35f);
    glVertex2f(-0.14f,0.33f);
	glEnd();

//15th
	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);
	glVertex2f(0.44f, -0.1f);
    glVertex2f(0.54f, -0.1f);
    glVertex2f(0.210f, 0.24f);
	glEnd();

//16th
	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.44f, -0.1f);
    glVertex2f(-0.54f, -0.1f);
    glVertex2f(-0.210f, 0.24f);
	glEnd();

//17th
	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);
	glVertex2f(0.53f,-0.1f);
    glVertex2f(0.54f, -0.1f);
    glVertex2f(0.19f,0.27f);
    glVertex2f(0.2f, 0.25f);
	glEnd();

//18th
	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);
	glVertex2f(-0.53f,-0.1f);
    glVertex2f(-0.54f, -0.1f);
    glVertex2f(-0.19f,0.27f);
    glVertex2f(-0.2f, 0.25f);
	glEnd();

//19th
	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);
	glVertex2f(0.54f, -0.1f);
    glVertex2f(0.64f, -0.1f);
    glVertex2f(0.303f, 0.15f);
	glEnd();
//20th
	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.54f, -0.1f);
    glVertex2f(-0.64f, -0.1f);
    glVertex2f(-0.303f, 0.15f);
	glEnd();
//21th
	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);
	glVertex2f(0.64f,-0.1f);
    glVertex2f(0.65f, -0.1f);
    glVertex2f(0.25f,0.2f);
    glVertex2f(0.303f, 0.15f);
	glEnd();
//22th
	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);
	glVertex2f(-0.64f,-0.1f);
    glVertex2f(-0.65f, -0.1f);
    glVertex2f(-0.25f,0.2f);
    glVertex2f(-0.303f, 0.15f);
	glEnd();
//23th
	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);
	glVertex2f(0.65f, -0.1f);
    glVertex2f(0.74f, -0.1f);
    glVertex2f(0.38f, 0.10f);
	glEnd();
//24th
	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.65f, -0.1f);
    glVertex2f(-0.74f, -0.1f);
    glVertex2f(-0.38f, 0.10f);
	glEnd();
//25th
	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);
	glVertex2f(0.74f,-0.1f);
    glVertex2f(0.755f, -0.1f);
    glVertex2f(0.34f,0.13f);
    glVertex2f(0.38f, 0.10f);
	glEnd();
//26th
	glBegin(GL_QUADS);
	glColor3ub(230, 230, 230);
	glVertex2f(-0.74f,-0.1f);
    glVertex2f(-0.755f, -0.1f);
    glVertex2f(-0.34f,0.13f);
    glVertex2f(-0.38f, 0.10f);
	glEnd();
//27th
	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);
	glVertex2f(0.75f, -0.1f);
    glVertex2f(0.86f, -0.1f);
    glVertex2f(0.51f, 0.033f);
	glEnd();
//28th
	glBegin(GL_TRIANGLES);
	glColor3ub(204, 204, 204);
	glVertex2f(-0.75f, -0.1f);
    glVertex2f(-0.86f, -0.1f);
    glVertex2f(-0.51f, 0.033f);
	glEnd();
}
void stairs()
{
    glBegin(GL_QUADS);
	glColor3ub(150,40,27);
	glVertex2f(-1.0f, -0.1f);
	glVertex2f(-1.0f, -.3f);
	glVertex2f(1.0f, -.3f);
	glVertex2f(1.0f, -.1f);
    glEnd();

    glBegin(GL_LINES);
	 glLineWidth(10);
	glColor3ub(0,0,0);
	glVertex2f(-1.0f, -0.133f);
	glVertex2f(1.0f, -.133f);

	glColor3ub(0,0,0);
	glVertex2f(-1.0f, -0.166f);
	glVertex2f(1.0f, -.166f);

	glColor3ub(0,0,0);
	glVertex2f(-1.0f, -0.2f);
	glVertex2f(1.0f, -.2f);

	glColor3ub(0,0,0);
	glVertex2f(-1.0f, -0.233f);
	glVertex2f(1.0f, -.233f);

	glColor3ub(0,0,0);
	glVertex2f(-1.0f, -0.266f);
	glVertex2f(1.0f, -.266f);

	glColor3ub(0,0,0);
	glVertex2f(-1.0f, -0.3f);
	glVertex2f(1.0f, -.3f);

	glColor3ub(0,0,0);
	glVertex2f(-1.0f, -0.1f);
	glVertex2f(1.0f, -.1f);
    glEnd();
}
void flags()
{
    glBegin(GL_QUADS);
	glColor3ub(242, 242, 242);
	glVertex2f(-0.92f, -0.1f);
	glVertex2f(-0.90f, -0.1f);
    glVertex2f(-0.90f, 0.7f);
    glVertex2f(-0.92f, 0.7f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(-0, 153, 51);
	glVertex2f(-0.90f, 0.7f);
	glVertex2f(-0.6f, 0.7f);
    glVertex2f(-0.6f, 0.5f);
    glVertex2f(-0.90f, 0.5f);
    glEnd();
      int i;

	GLfloat x=-0.75f; GLfloat y=0.6f; GLfloat radius =.07f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 0, 0);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void pool()
{
	glBegin(GL_QUADS);
	glColor3ub(217, 217, 217);
	glVertex2f(-0.5f, -1.0f);
	glVertex2f(0.5f, -1.0f);
    glVertex2f(0.4f, -0.3f);
    glVertex2f(-0.4f, -0.3f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(0, 102, 255);
	glVertex2f(-0.4f, -1.0f);
	glVertex2f(0.4f, -1.0f);
    glVertex2f(0.3f, -0.4f);
    glVertex2f(-0.3f, -0.4f);
    glEnd();
}

void field()
{
    glBegin(GL_QUADS);
	glColor3ub(51, 204, 51);
	glVertex2f(-1.0f, -0.3f);
	glVertex2f(-1.0f, -1.0f);
    glVertex2f(-0.5f, -1.0f);
    glVertex2f(-0.4f, -0.3f);
    glEnd();

    glBegin(GL_QUADS);
	glColor3ub(51, 204, 51);
	glVertex2f(1.0f, -0.3f);
	glVertex2f(1.0f, -1.0f);
    glVertex2f(0.5f, -1.0f);
    glVertex2f(0.4f, -0.3f);
    glEnd();
}

void Tree1() {
    glColor3f(0.5f, 0.2f, 0.0f); // Brown color
    glBegin(GL_POLYGON);
    glVertex2f(-0.87f, -0.2f);
    glVertex2f(-0.87f, -0.4f);
    glVertex2f(-0.93f, -0.2f);
    glVertex2f(-0.93f, -0.4f);
    glEnd();

    glColor3f(0.0f, 0.6f, 0.0f); // Green color
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.999f, -0.2f);
    glVertex2f(-0.90f, -0.0f);
    glVertex2f(-0.81f, -0.2f);
    glEnd();
}

void Tree2() {
    glColor3f(0.5f, 0.2f, 0.0f); // Brown color
    glBegin(GL_POLYGON);
    glVertex2f(0.87f, -0.2f);
    glVertex2f(0.87f, -0.4f);
    glVertex2f(0.93f, -0.2f);
    glVertex2f(0.93f, -0.4f);
    glEnd();

    glColor3f(0.0f, 0.6f, 0.0f); // Green color
    glBegin(GL_TRIANGLES);
    glVertex2f(0.999f, -0.2f);
    glVertex2f(0.90f, -0.0f);
    glVertex2f(0.81f, -0.2f);
    glEnd();
}

void Tree3() {
    glColor3f(0.5f, 0.2f, 0.0f); // Brown color
    glBegin(GL_POLYGON);
    glVertex2f(0.87f, -0.4f);
    glVertex2f(0.87f, -0.6f);
    glVertex2f(0.93f, -0.4f);
    glVertex2f(0.93f, -0.6f);
    glEnd();

    glColor3f(0.0f, 0.6f, 0.0f); // Green color
    glBegin(GL_TRIANGLES);
    glVertex2f(0.999f, -0.4f);
    glVertex2f(0.90f, -0.2f);
    glVertex2f(0.81f, -0.4f);
    glEnd();
}

void Tree4() {
    glColor3f(0.5f, 0.2f, 0.0f); // Brown color
    glBegin(GL_POLYGON);
    glVertex2f(-0.87f, -0.4f);
    glVertex2f(-0.87f, -0.6f);
    glVertex2f(-0.93f, -0.4f);
    glVertex2f(-0.93f, -0.6f);
    glEnd();

    glColor3f(0.0f, 0.6f, 0.0f); // Green color
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.999f, -0.4f);
    glVertex2f(-0.90f, -0.2f);
    glVertex2f(-0.81f, -0.4f);
    glEnd();
}

void Tree5() {
    glColor3f(0.5f, 0.2f, 0.0f); // Brown color
    glBegin(GL_POLYGON);
    glVertex2f(0.87f, -0.6f);
    glVertex2f(0.87f, -0.8f);
    glVertex2f(0.93f, -0.6f);
    glVertex2f(0.93f, -0.8f);
    glEnd();

    glColor3f(0.0f, 0.6f, 0.0f); // Green color
    glBegin(GL_TRIANGLES);
    glVertex2f(0.999f, -0.6f);
    glVertex2f(0.90f, -0.4f);
    glVertex2f(0.81f, -0.6f);
    glEnd();
}

void Tree6() {
    glColor3f(0.5f, 0.2f, 0.0f); // Brown color
    glBegin(GL_POLYGON);
    glVertex2f(-0.87f, -0.6f);
    glVertex2f(-0.87f, -0.8f);
    glVertex2f(-0.93f, -0.6f);
    glVertex2f(-0.93f, -0.8f);
    glEnd();

    glColor3f(0.0f, 0.6f, 0.0f); // Green color
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.999f, -0.6f);
    glVertex2f(-0.90f, -0.4f);
    glVertex2f(-0.81f, -0.6f);
    glEnd();
}

void Tree7() {
    glColor3f(0.5f, 0.2f, 0.0f); // Brown color
    glBegin(GL_POLYGON);
    glVertex2f(0.87f, -0.8f);
    glVertex2f(0.87f, -0.99f);
    glVertex2f(0.93f, -0.8f);
    glVertex2f(0.93f, -0.99f);
    glEnd();

    glColor3f(0.0f, 0.6f, 0.0f); // Green color
    glBegin(GL_TRIANGLES);
    glVertex2f(0.999f, -0.8f);
    glVertex2f(0.90f, -0.6f);
    glVertex2f(0.81f, -0.8f);
    glEnd();
}

void Tree8() {
    glColor3f(0.5f, 0.2f, 0.0f); // Brown color
    glBegin(GL_POLYGON);
    glVertex2f(-0.87f, -0.8f);
    glVertex2f(-0.87f, -0.99f);
    glVertex2f(-0.93f, -0.8f);
    glVertex2f(-0.93f, -0.99f);
    glEnd();

    glColor3f(0.0f, 0.6f, 0.0f); // Green color
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.999f, -0.8f);
    glVertex2f(-0.90f, -0.6f);
    glVertex2f(-0.81f, -0.8f);
    glEnd();
}

void sky()
{
    glBegin(GL_QUADS);
	glColor3ub(38, 154, 214);
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
    glEnd();
}
void cloud1()
{
    // glLoadIdentity();
    int i;

	GLfloat x=.7f; GLfloat y=0.9f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(230, 255, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=.65f; GLfloat b=.86f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(230, 255, 255);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=.45f; GLfloat d=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(230, 255, 255);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=.52f; GLfloat f=.75f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(230, 255, 255);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=.6f; GLfloat h=.77f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(230, 255, 255);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void bird()
{
  glBegin(GL_LINES);
  glColor3ub(255,255,255);
  glVertex2f(0.2f,0.8f);
  glVertex2f(0.18f,0.77f);

  glColor3ub(255,255,255);
  glVertex2f(0.18f,0.77f);
  glVertex2f(0.15f,0.79f);

  glColor3ub(255,255,255);
  glVertex2f(0.13f,0.8f);
  glVertex2f(0.11f,0.77f);

  glColor3ub(255,255,255);
  glVertex2f(0.11f,0.77f);
  glVertex2f(0.08f,0.79f);

  glEnd();

}

void cloud2()
{
    // glLoadIdentity();
    int i;

	GLfloat x=-.5f; GLfloat y=.8f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(230, 255, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=-.55f; GLfloat b=.78f;

	glBegin(GL_TRIANGLE_FAN);
	   glColor3ub(230, 255, 255);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=-.45f; GLfloat d=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(230, 255, 255);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=-.52f; GLfloat f=.75f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(230, 255, 255);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=-.6f; GLfloat h=.77f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(230, 255, 255);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

void cloud3()
{
    // glLoadIdentity();
    int i;

	GLfloat x=-.82f; GLfloat y=.56f; GLfloat radius =.05f;
	int triangleAmount = 10;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(230, 255, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=-.85f; GLfloat b=.50f;

	glBegin(GL_TRIANGLE_FAN);
	   glColor3ub(230, 255, 255);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=-.77f; GLfloat d=.48f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(230, 255, 255);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void bird2()
{
  glBegin(GL_LINES);
  glColor3ub(255,255,255);
  glVertex2f(-0.2f,0.8f);
  glVertex2f(-0.18f,0.77f);

  glColor3ub(255,255,255);
  glVertex2f(-0.18f,0.77f);
  glVertex2f(-0.15f,0.79f);

  glColor3ub(255,255,255);
  glVertex2f(-0.13f,0.8f);
  glVertex2f(-0.11f,0.77f);

  glColor3ub(255,255,255);
  glVertex2f(-0.11f,0.77f);
  glVertex2f(-0.08f,0.79f);

  glEnd();
}

void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(2);
	sky();
    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    cloud1();
    bird();
    cloud2();
    cloud3();
    bird2();
    glPopMatrix();
    mainshape();
    stairs();
    pool();
    flags();
    field();
    Tree1();
    Tree2();
    Tree3();
    Tree4();
    Tree5();
    Tree6();
    Tree7();
    Tree8();
	glFlush();
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(840, 640);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("National Martyrs Memorial");
    glutDisplayFunc(display);
 glutTimerFunc(10, update, 0);
    glutMainLoop();
    return 0;
}
