#pragma once

#include <memory>

class GLFWwindow;
struct EditorWindowParameters;

class WindowHandler
{
public:
	virtual ~WindowHandler() {}

	// Actions
	void Run();
	void Close();

	bool IsRunning();

	// Static
	static std::unique_ptr<WindowHandler> Create(const EditorWindowParameters params);
	static void FramebufferSizeCallback(GLFWwindow* window, int width, int height);

private:
	WindowHandler() {}

	void ProcessInput(GLFWwindow* window);
	void Render(GLFWwindow* window);

	void DrawShapeTest();

	GLFWwindow* window = nullptr;
	bool isRunning = false;

	const char* vertexShaderSource = "#version 330 core\n"
		"layout (location = 0) in vec3 aPos;\n"
		"void main()\n"
		"{\n"
		"   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
		"}\0";

	const char* fragmentShaderSource = "#version 330 core\n"
		"out vec4 FragColor;\n"
		"void main()\n"
		"{\n"
		"   FragColor = vec4(1.0f, 0.5f, 0.2f, 1.0f);\n"
		"}\0";
};

