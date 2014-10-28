#include "glut.h"
#include "main.h"

void draw() {
	drawKinectData();
	glutSwapBuffers();
}

void loop() {
	getKinectData();
	moveCamera();
	draw();
}

void execute() {
    glutMainLoop();
}

bool init(int argc, char* argv[]) {
    glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(width*1.5, height*1.5);
    glutCreateWindow("Live Kinect View");
	glutDisplayFunc(loop);
	glutIdleFunc(loop);
	glutKeyboardFunc(keyDown);
	glutKeyboardUpFunc(keyUp);
	glewInit();
    return true;
}
