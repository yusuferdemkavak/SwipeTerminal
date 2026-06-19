#include "sdraw.h"

Window stdwindow;

//-----Drawing Functions-----//
// Window //
void InitWindow(Window *window)
{
	int lines = window->res.height;
	int columns = window->res.width;

	window->render = malloc(lines);

	for (int y = 0; y <= lines; y++)
	{
		for (int x = 0; x <= columns; x++)
			window->render[y][x] = '#';

		window->render[y][columns] = '\n';
	}
}

void UpdateWindow(Window *window)
{

}

void DrawWindow(Window window)
{
	int lines = window.res.height;
	int columns = window.res.width;

	for (int y = 0; y < lines; y++)
	{
		for (int x = 0; x < columns; x++)
			printf("%c", window.render[y][x]);
	}
}

// Objects //
void DrawPoint(DPoint point)
{
	//int x = point.point.x;
	//int y = point.point.y;

	//stdwindow->render[y][x];
}

void DrawLine(DLine line)
{
	int x_0 = line.line.pos_start.x;
	int y_0 = line.line.pos_start.y;

	int x_1 = line.line.pos_end.x;
	int y_1 = line.line.pos_end.y;

	int dx = x_1 - x_0;
	int dy = y_1 - y_0;

	int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

	int x_inc = dx / steps;
	int y_inc = dy / steps;

	int x_cur = x_0;
	int y_cur = y_0;

	for (int i = 0; i <= steps; i++)
	{
		DPoint point_cur = DrawablePoint((Point){x_cur, y_cur}, line.color);
		DrawPoint(point_cur);

		x_cur += x_inc;
		y_cur += y_inc;
	}
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
DPoint DrawablePoint(Point point, Color color)
{

}

DLine DrawableLine(Line line, Color color)
{

}

DTriangle DrawableTriangle(Triangle triangle, Color color, Shape_Type type)
{

}
