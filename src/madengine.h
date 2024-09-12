#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdlib.h>
#ifdef __APPLE__
    #define GL_SILENCE_DEPRECATION
    #include <OpenGL/gl.h>
    #include <OpenGL/glu.h>
    #include <GL/glut.h>
#else
    #include <GL/glut.h>
#endif
#include <math.h>

using namespace std;

#include "console.h"
#include "renderer.h"
