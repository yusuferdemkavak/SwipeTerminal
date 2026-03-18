#ifndef SPHYSICS_H
#define SPHYSICS_H

#include "swipe.h"

//-----Geometric Objects-----//
// Used for physical calculations

// 0D //
typedef struct Vector
{
	int x;
	int y;
} Vector;

typedef Vector Point; // Vector Alias

// 1D //
typedef struct Line 
{
	Point pos_start;
	Point pos_end;
} Line;

// 2D Shapes //
// Note that the origin of every shape
// is the top left corner
typedef struct Triangle
{
	Point pos_1;
	Point pos_2;
	Point pos_3;
} Triangle;

typedef Triangle Tri; // Triangle Alias

typedef struct Rectangle
{
	Point pos;
	int height;
	int width;
} Rectangle;

typedef Rectangle Rect; // Rectangle Alias

typedef struct Circle
{
	Point pos;
	int radius;
} Circle;

typedef Circle Circ; // Circle Alias

//-----Function Declaration-----//
// Collision Checks (Identical Objects) //
bool CheckCollisionPoints(Point point_1, Point point_2); // Check if 2 Points collide
bool CheckCollisionLines(Line line_1, Line line_2); // Check if 2 Lines collide
bool CheckCollisionTriangles(Triangle triangle_1, Triangle triangle_2); // Check if 2 Triangles collide
bool CheckCollisionRectangles(Rectangle rectangle_1, Rectangle rectangle_2); // Check if 2 Rectangles collide
bool CheckCollisionCircles(Circle circle_1, Circle circle_2); // Check if 2 Circles collide

// Collision Checks (Distinct Objects) //
bool CheckCollisionPointToLine(Point point, Line line); // Check if a Point and Line collide
bool CheckCollisionPointToTriangle(Point point, Triangle triangle); // Check if a Point and Triangle collide
bool CheckCollisionPointToRectangle(Point point, Rectangle rectangle); // Check if a Point and Rectangle collide
bool CheckCollisionPointToCircle(Point point, Circle circle); // Check if a Point and Circle collide
bool CheckCollisionLineToTriangle(Line line, Triangle triangle); // Check if a Line and Triangle collide
bool CheckCollisionLineToRectangle(Line line, Rectangle rectangle); // Check if a Line and Rectangle collide
bool CheckCollisionLineToCircle(Line line, Circle circle); // Check if a Line and Circle collide
bool CheckCollisionTriangleToRectangle(Triangle triangle, Rectangle rectangle); // Check if a Triangle and Rectangle collide
bool CheckCollisionTriangleToCircle(Triangle triangle, Circle circle); // Check if a Triangle and Circle collide
bool CheckCollisionRectangleToCircle(Rectangle rectangle, Circle circle); // Check if a Rectangle and Circle collide

#endif
