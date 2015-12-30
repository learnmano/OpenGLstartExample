// OpenGL.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include<gl/glut.h>
#include<gl/glu.h>
#include<gl/gl.h>

void run()  
{  
      
      
    const GLubyte* name = glGetString(GL_VENDOR); //返回负责当前OpenGL实现厂商的名字  
    const GLubyte* biaoshifu = glGetString(GL_RENDERER); //返回一个渲染器标识符，通常是个硬件平台  
    const GLubyte* OpenGLVersion =glGetString(GL_VERSION); //返回当前OpenGL实现的版本号  
    const GLubyte* gluVersion= gluGetString(GLU_VERSION); //返回当前GLU工具库版本  
    printf("OpenGL实现厂商的名字：%s\n", name);  
    printf("渲染器标识符：%s\n", biaoshifu);  
    printf("OOpenGL实现的版本号：%s\n",OpenGLVersion );  
    printf("OGLU工具库版本：%s\n", gluVersion);  
      
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
    //显示模式初始化  
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA|GLUT_DEPTH);  
    //定义窗口大小  
    glutInitWindowSize(300,300);  
    //定义窗口位置  
    glutInitWindowPosition(100,100);  
    //创建窗口  
          
    glutCreateWindow("Hello OpenGL");  
  
    glutDisplayFunc(renderScene);  
  
      
    run();  
      
  
    glutMainLoop();//enters the GLUT event processing loop.  
  
    return 0;  
  
}  
