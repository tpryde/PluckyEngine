#pragma once

struct EditorWindowParameters
{
	EditorWindowParameters() {}
	EditorWindowParameters(int posX, int posY, int width, int height, const char* name)
	{
		PosX = posX;
		PosY = posY;

		Width = width;
		Height = height;

		Name = name;
	}

	int PosX = 0;
	int PosY = 0;

	int Width = 800;
	int Height = 600;

	const char* Name = "Default";
};