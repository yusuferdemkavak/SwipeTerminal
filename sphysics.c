#include "sphysics.h"


// Collision Detection (Identical Objects) //
bool CheckCollisionPoints(Point point_1, Point point_2)
{
	if (point_1.x == point_2.x && point_1.y == point_2.y)
		return true;

	return false;
}

bool CheckCollisionLines(Line line_1, Line line_2)
{
	return false;
}

bool CheckCollisionTriangles(Triangle triangle_1, Triangle triangle_2)
{
	return false;
}

bool CheckCollisionRectangles(Rectangle rectangle_1, Rectangle rectangle_2)
{
	return false;
}

bool CheckCollisionCircles(Circle circle_1, Circle circle_2)
{
	return false;
}

// Collision Detection (Distinct Objects) //
bool CheckCollisionPointToLine(Point point, Line line)
{
	return false;
}

bool CheckCollisionPointToTriangle(Point point, Triangle triangle)
{
	return false;
}

bool CheckCollisionPointToRectangle(Point point, Rectangle rectangle)
{
	return false;
}

bool CheckCollisionPointToCircle(Point point, Circle circle)
{
	return false;
}

bool CheckCollisionLineToTriangle(Line line, Triangle triangle)
{
	return false;
}

bool CheckCollisionLineToRectangle(Line line, Rectangle rectangle)
{
	return false;
}

bool CheckCollisionLineToCircle(Line line, Circle circle)
{
	return false;
}

bool CheckCollisionTriangleToRectangle(Triangle triangle, Rectangle rectangle)
{
	return false;
}

bool CheckCollisionTriangleToCircle(Triangle triangle, Circle circle)
{
	return false;
}

bool CheckCollisionRectangleToCircle(Rectangle rectangle, Circle circle)
{
	return false;
}
