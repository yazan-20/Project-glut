#include<GL/glut.h>
#include<math.h>

int main(int argc, char** argv)
{
	void Train(void);
	void init(void);
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1000, 600);
	glutInitWindowPosition(400, 100);
	glutCreateWindow("Train");
	init();
	glutDisplayFunc(Train);
	glutMainLoop();
	return 0;
}

void Train(void)
{

	glClear(GL_COLOR_BUFFER_BIT);


	glColor3f(0.3, 0.3, 0.3);
	glBegin(GL_TRIANGLES);
	glVertex2i(40, 190);
	glVertex2i(100, 190);
	glVertex2i(100, 270);
	glEnd();


	glColor3f(1.0, 0.80, 0.65);
	glBegin(GL_QUADS);
	glVertex2i(700, 200);
	glVertex2i(900, 200);
	glVertex2i(900, 400);
	glVertex2i(700, 400);

	glColor3f(0.8, 0.5, 0.2);
	glBegin(GL_QUADS);
	glVertex2i(700, 200);
	glVertex2i(900, 200);
	glVertex2i(900, 270);
	glVertex2i(700, 270);

	glColor3f(1.0, 0.80, 0.65);  
	glBegin(GL_QUADS);
	glVertex2i(470, 200);
	glVertex2i(670, 200);
	glVertex2i(670, 400);
	glVertex2i(470, 400);

	glColor3f(0.8, 0.5, 0.2);  
	glBegin(GL_QUADS);
	glVertex2i(470, 200);
	glVertex2i(670, 200);
	glVertex2i(670, 270);
	glVertex2i(470, 270);

	glColor3f(1.0, 0.5, 0.0);
	glBegin(GL_QUADS);
	glVertex2i(300, 200);
	glVertex2i(430, 200);
	glVertex2i(430, 400);
	glVertex2i(300, 400);

	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_QUADS);
	glVertex2i(100, 200);
	glVertex2i(300, 200);
	glVertex2i(300, 340);
	glVertex2i(100, 340);

	glColor3f(0.3, 0.3, 0.3);
	glBegin(GL_QUADS);
	glVertex2i(100, 275);
	glVertex2i(90, 275);
	glVertex2i(90, 330);
	glVertex2i(100, 330);
	glEnd();
	
	glColor3f(0.3, 0.3, 0.3);
	glBegin(GL_QUADS);
	glVertex2i(700, 205);
	glVertex2i(700, 220);
	glVertex2i(670, 220);
	glVertex2i(670, 205);
	glEnd();
	
	glColor3f(0.3, 0.3, 0.3);
	glBegin(GL_QUADS);
	glVertex2i(430, 205);
	glVertex2i(430, 220);
	glVertex2i(470, 220);
	glVertex2i(470, 205);
	glEnd();
	
	glColor3f(0.7, 0.7, 0.7);
	glBegin(GL_QUADS);
	glVertex2i(110, 340);
	glVertex2i(110, 380);
	glVertex2i(150, 380);
	glVertex2i(150, 340);
	glEnd();
	
	glColor3f(0.3, 0.3, 0.3);
	glBegin(GL_QUADS);
	glVertex2i(105, 380);
	glVertex2i(105, 395);
	glVertex2i(155, 395);
	glVertex2i(155, 380);
	glEnd();
	
	glColor3f(0.3, 0.3, 0.3);
	glBegin(GL_QUADS);
	glVertex2i(290, 400);
	glVertex2i(290, 415);
	glVertex2i(440, 415);
	glVertex2i(440, 400);
	glEnd();
	
	glColor3f(0.3, 0.3, 0.3);
	glBegin(GL_QUADS);
	glVertex2i(460, 400);
	glVertex2i(460, 415);
	glVertex2i(680, 415);
	glVertex2i(680, 400);
	glEnd();
	
	glColor3f(0.3, 0.3, 0.3);
	glBegin(GL_QUADS);
	glVertex2i(690, 400);
	glVertex2i(690, 415);
	glVertex2i(910, 415);
	glVertex2i(910, 400);
	glEnd();
	
	glColor3f(0.0, 0.9, 1.0);
	glBegin(GL_QUADS);
	glVertex2i(315, 290);
	glVertex2i(315, 370);
	glVertex2i(415, 370);
	glVertex2i(415, 290);
	glEnd();
	
	glColor3f(0.0, 0.9, 1.0);
	glBegin(GL_QUADS);
	glVertex2i(495, 290);
	glVertex2i(495, 350);
	glVertex2i(560, 350);
	glVertex2i(560, 290);
	glEnd();
	
	glColor3f(0.0, 0.9, 1.0);
	glBegin(GL_QUADS);
	glVertex2i(580, 290);
	glVertex2i(580, 350);
	glVertex2i(645, 350);
	glVertex2i(645, 290);
	glEnd();
	
	glColor3f(0.0, 0.9, 1.0);
	glBegin(GL_QUADS);
	glVertex2i(725, 290);
	glVertex2i(725, 350);
	glVertex2i(790, 350);
	glVertex2i(790, 290);
	glEnd();
	
	glColor3f(0.0, 0.9, 1.0);
	glBegin(GL_QUADS);
	glVertex2i(810, 290);
	glVertex2i(810, 350);
	glVertex2i(875, 350);
	glVertex2i(875, 290);
	glEnd();
	
	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	for (float m = 0; m <= 360; m += 0.5)
		glVertex2d(150 + sin(m) * 25,195+ cos(m) * 25);
	glEnd();
	
	glColor3f(0, 0, 0);
	glLineWidth(3);
	glBegin(GL_LINES);
	for (float f = 0; f <= 360; f += 0.5)
		glVertex2d(150 + sin(f) * 25, 195 + cos(f) * 25);
	glEnd();

	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	for (float c = 0; c <= 360; c += 0.5)
		glVertex2d(250 + sin(c) * 25, 195 + cos(c) * 25);
	glEnd();

	glColor3f(0, 0, 0);
	glLineWidth(3);
	glBegin(GL_LINES);
	for (float h = 0; h <= 360; h += 0.5)
		glVertex2d(250 + sin(h) * 25, 195 + cos(h) * 25);
	glEnd();


	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	for (float r = 0; r <= 360; r += 0.5)
		glVertex2d(370 + sin(r) * 35, 195 + cos(r) * 35);
	glEnd();

	glColor3f(0, 0, 0);
	glLineWidth(3);
	glBegin(GL_LINES);
	for (float w = 0; w <= 360; w += 0.5)
		glVertex2d(370 + sin(w) * 35, 195 + cos(w) * 35);
	glEnd();

	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	for (float q = 0; q <= 360; q += 0.5)
		glVertex2d(520 + sin(q) * 25, 195 + cos(q) * 25);
	glEnd();

	glColor3f(0, 0, 0);
	glLineWidth(3);
	glBegin(GL_LINES);
	for (float n = 0; n <= 360; n += 0.5)
		glVertex2d(520 + sin(n) * 25, 195 + cos(n) * 25);
	glEnd();

	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	for (float b = 0; b <= 360; b += 0.5)
	glVertex2d(620 + sin(b) * 25, 195 + cos(b) * 25);
	glEnd();
	
	glColor3f(0, 0, 0);
	glLineWidth(3);
	glBegin(GL_LINES);
	for (float z = 0; z <= 360; z += 0.5)
	glVertex2d(620 + sin(z) * 25, 195 + cos(z) * 25);
	glEnd();

	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	for (float x = 0; x <= 360; x += 0.5)
		glVertex2d(750 + sin(x) * 25, 195 + cos(x) * 25);
	glEnd();

	glColor3f(0, 0, 0);
	glLineWidth(3);
	glBegin(GL_LINES);
	for (float y = 0; y <= 360; y += 0.5)
		glVertex2d(750 + sin(y) * 25, 195 + cos(y) * 25);
	glEnd();

	glColor3f(1, 1, 1);
	glBegin(GL_POLYGON);
	for (float e = 0; e <= 360; e += 0.5)
		glVertex2d(850 + sin(e) * 25, 195 + cos(e) * 25);
	glEnd();

	glColor3f(0, 0, 0);
	glLineWidth(3);
	glBegin(GL_LINES);
	for (float i = 0; i <= 360; i += 0.5)
		glVertex2d(850 + sin(i) * 25, 195 + cos(i) * 25);
	glEnd();


	glFlush();
}


void init(void)
{
	glClearColor(0.8, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 1000.0, 0.0, 600.0);
}
