#include<GL/gl.h>
#include<GL/glut.h>

void initRendering()
{
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);
	glClearColor(0.5f, 0.7f, 0.8f, 1.0f);
}

void handleResize(int w, int h)
{
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

float _angle = 30.0f;
float _cameraAngle = 0.0f;

void drawScene()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	glRotatef(-_cameraAngle, 0.0f, 1.0f, 0.0f);
	glTranslatef(0.0f, 0.0f, -6.0f);

	glPushMatrix();
	glTranslatef(0.0f, -1.0f, 0.0f);
	glRotatef(_angle, 0.0f, 0.0f, -1.0f);

	glBegin(GL_QUADS);

	glColor3f(0.65f, 0.75f, 0.0f);
	glVertex3f(-0.7f, -0.5f, 0.0f);
	glVertex3f(0.7f, -0.5f, 0.0f);
	glVertex3f(0.7f, 0.5f, 0.0f);
	glVertex3f(-0.7f, 0.5f, 0.0f);

	glEnd();

	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.0f, 1.0f, 0.0f);
	glRotatef(_angle, 0.0f, 1.0f, 0.0f);
	glScalef(0.7f, 0.7f, 0.7f);

	glBegin(GL_TRIANGLES);
	glColor3f(0.25f, 0.45f, 0.65f);

	glVertex3f(-0.5f, -0.5f, 0.0f);
	glVertex3f(0.5f, -0.5f, 0.0f);
	glVertex3f(-0.5f, 0.0f, 0.0f);

	glColor3f(0.35f, 0.55f, 0.65f);

	glVertex3f(-0.5f, 0.0f, 0.0f);
	glVertex3f(0.5f, -0.5f, 0.0f);
	glVertex3f(0.5f, 0.0f, 0.0f);

	glColor3f(0.95f, 0.15f, 0.65f);

	glVertex3f(-0.5f, 0.0f, 0.0f);
	glVertex3f(0.5f, 0.0f, 0.0f);
	glVertex3f(0.0f, 0.5f, 0.0f);

	glEnd();

	glPopMatrix();

	glPushMatrix();
	glTranslatef(-1.0f, 1.0f, 0.0f);
	glRotatef(_angle, 1.0f, 0.0f, 0.0f);

	glBegin(GL_TRIANGLES);

	glColor3f(0.8f, 0.5f, 0.2f);
	glVertex3f(0.5f, -0.5f, 0.0f);
	glVertex3f(0.0f, 0.5f, 0.0f);
	glVertex3f(-0.5f, -0.5f, 0.0f);

	glEnd();

	glPopMatrix();

	glutSwapBuffers();
}

void update(int value)
{
	_angle += 2.0f;
	if (_angle > 360)
		_angle -= 360;

	glutPostRedisplay(); //Tell GLUT that the scene has changed
	glutTimerFunc(25, update, 0);
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(600, 500);
        glutInitWindowPosition(600, 200);
	glutCreateWindow("Lab3_Demo");
	initRendering();
	glutDisplayFunc(drawScene);
	glutReshapeFunc(handleResize);
	glutTimerFunc(10, update, 0);
	glutMainLoop();
	return 0;
}









