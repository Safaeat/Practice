#include<GL/gl.h>
#include<GL/glut.h>

void display(void)
{
    /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_TRIANGLES); //Begin triangle coordinates

	glColor3f(0.0, 0.0, 0.75);
	glVertex3f(0.10f, 0.65f, 0.0f);
	glVertex3f(0.40f, 0.65f, 0.0f);
	glVertex3f(0.25, 0.85f, 0.0f);

	glEnd();//End triangle coordinates

	glBegin(GL_QUADS); //Begin quadrilateral coordinates

	glColor3f(0.5, 0.0, 0.0);
	glVertex3f(0.05f, 0.05f, 0.0f);
	glVertex3f(0.35f, 0.05f, 0.0f);
	glVertex3f(0.35f, 0.35f, 0.0f);
	glVertex3f(0.05f, 0.35f, 0.0f);

	glEnd(); //End quadrilateral coordinates

	glBegin(GL_TRIANGLES); //Begin triangle coordinates

	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(0.5f, 0.05f, 0.0f);
	glVertex3f(0.75f, 0.05f, 0.0f);
	glVertex3f(0.5f, 0.35f, 0.0f);

	glColor3f(0.0, 1.0, 0.0);
	glVertex3f(0.5f, 0.35f, 0.0f);
	glVertex3f(0.75f, 0.05f, 0.0f);
	glVertex3f(0.75f, 0.35f, 0.0f);

	glEnd();//End triangle coordinates

	glBegin(GL_POLYGON);

    glColor3f(1.0f, 1.0f, 0.0f);
    glVertex2f(0.6f, 0.55f);
    glVertex2f(0.8f, 0.55f);
    glVertex2f(0.9f, 0.75f);
    glVertex2f(0.8f, 0.95f);
    glVertex2f(0.6f, 0.95f);
    glVertex2f(0.5f, 0.75f);

    glEnd();

    // start processing buffered OpenGL routines
    glFlush();
}


void init(void)
{
    /* select clearing (background) color */
    glClearColor(0.0, 0.0, 0.0, 0.0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -10.0, 10.0);
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(600, 150);
    glutCreateWindow("Lab2_Demo");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

/* Learn about
GL_POINTS, GL_LINES, GL_LINE_STRIP, GL_LINE_LOOP, GL_POLYGON,
GL_TRIANGLES, GL_TRIANGLE_STRIP, GL_TRIANGLE_FAN, GL_QUADS, GL_QUAD_STRIP*/
