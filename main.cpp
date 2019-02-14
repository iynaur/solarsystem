//#include <GL/gl.h>
//#include <GL/glu.h>
#include <GL/glut.h>

int time;

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
    glutInitWindowSize(450, 450);
    glutInitWindowPosition(150, 150);
    glutCreateWindow("rotate sphere");
    //glutDisplayFunc(display);
    //glutReshapeFunc(reshape);
    //glutIdleFunc(myIdle);
    //glutMouseFunc(mouseFunc);
    //init();
    glutMainLoop();
    return EXIT_SUCCESS;
}
