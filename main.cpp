#include "GL/glew.h"
#include "GLFW/glfw3.h"
#include <glm/glm.hpp>
#include <iostream>

using namespace glm;
using namespace std;

int main() {
	glewExperimental = true; // Needed for core profile
    if( !glfwInit() )
    {
        cerr << "Failed to initialize GLFW"  << endl;
        return -1;
    }
	return 0;
}
