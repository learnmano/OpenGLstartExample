// OpenGL.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include<gl/glut.h>
#include<gl/glu.h>
#include<gl/gl.h>

void run()  
{  
      
      
    const GLubyte* name = glGetString(GL_VENDOR); //���ظ���ǰOpenGLʵ�ֳ��̵�����  
    const GLubyte* biaoshifu = glGetString(GL_RENDERER); //����һ����Ⱦ����ʶ����ͨ���Ǹ�Ӳ��ƽ̨  
    const GLubyte* OpenGLVersion =glGetString(GL_VERSION); //���ص�ǰOpenGLʵ�ֵİ汾��  
    const GLubyte* gluVersion= gluGetString(GLU_VERSION); //���ص�ǰGLU���߿�汾  
    printf("OpenGLʵ�ֳ��̵����֣�%s\n", name);  
    printf("��Ⱦ����ʶ����%s\n", biaoshifu);  
    printf("OOpenGLʵ�ֵİ汾�ţ�%s\n",OpenGLVersion );  
    printf("OGLU���߿�汾��%s\n", gluVersion);  
      
}  
 
void renderScene(void)  
  
{  
  
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);  
  
    glLoadIdentity();  
  
    glBegin(GL_TRIANGLES);  
  
    glVertex3f(-0.5,-0.5,0.0);  
  
    glVertex3f(0.5,0.0,0.0);  
  
    glVertex3f(0.0,0.5,0.0);  
  
    glEnd();  
  
    glutSwapBuffers();  
  
}  
  
  
  
int _tmain(int argc, _TCHAR* argv[])  
  
{  
  
    glutInit(&argc,(char** )argv);  
    //��ʾģʽ��ʼ��  
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA|GLUT_DEPTH);  
    //���崰�ڴ�С  
    glutInitWindowSize(300,300);  
    //���崰��λ��  
    glutInitWindowPosition(100,100);  
    //��������  
          
    glutCreateWindow("Hello OpenGL");  
  
    glutDisplayFunc(renderScene);  
  
      
    run();  
      
  
    glutMainLoop();//enters the GLUT event processing loop.  
  
    return 0;  
  
}  