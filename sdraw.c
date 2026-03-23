#include "sdraw.h"

//-----Drawing Functions-----//
// Window //
void InitWindow(Window *window)
{
	int lines = window->res.height;
	int columns = window->res.width;

	for (int y = 0; y <= lines; y++)
	{
		for (int x = 0; x <= columns; y++)
		{
			window->render[x + (10 * y)] = ' ';
		}
		window->render[columns + 1] = '\n';
	}
}

void UpdateWindow(Window *window)
{

}

void DrawWindow(Window window)
{

}

// Objects //
void DrawPoint(DPoint point)
{

}

void DrawLine(Dline line)
{

}

void DrawTriangle(DTriangle triangle)
{

}

void DrawRectangle(DRectangle rectangle)
{

}

void DrawCircle(DCircle circle)
{

}

//-----Drawable Converters-----//
DPoint DrawablePoint(Point point, Color color, Shape_Type type)
{

}

DLine DrawableLine(Line line, Color color, Shape_Type type)
{

}

DTriangle DrawableTriangle(Triangle triangle, Color color, Shape_Type type)
{

}
