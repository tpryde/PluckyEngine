// PluckyEngine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <glad/glad.h> 

#include "WindowHandler.h"
#include "EditorWindowParameters.h"

int main()
{
    const EditorWindowParameters WindowParameters(0, 0, 1920, 1080, "PluckyEngine");
    std::unique_ptr<WindowHandler> WindowHandler = WindowHandler::Create(WindowParameters);

    if (WindowHandler != nullptr)
    {
        WindowHandler->Run();
    }
    WindowHandler.reset();
}
