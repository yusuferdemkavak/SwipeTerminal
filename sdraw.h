#ifndef SDRAW_H
#define SDRAW_H

#include "swipe.h"
#include "sphysics.h"

//-----Drawing Porperties-----//
typedef struct Color
{
	int r;
	int g;
	int b;
	int a;
} Color;

typedef enum Shape_Type 
// Whether the shape is filled inside
{
	EMPTY,
	FILLED
} Shape_Type;

//-----Geometric Objects-----//
// Used in drawing functions to draw physical shapes
// with extra visual properties.
// "D" in the names stand for "Drawable"

// 0D //
typedef struct DPoint 
{
	Point point;
	Color color;
} DPoint;

// 1D //
typedef struct DLine
{
	Line line;
	Color color;
} Dline;

// 2D Shapes //
typedef struct DTriangle
{
	Triangle tri;
	Color color;
	Shape_Type type;
} DTriangle;

typedef DTriangle DTri; // DTriangle Alias

typedef struct DRectangle
{
	Rectangle rect;
	Color color;
	Shape_Type type;
} DRectangle;

typedef DRectangle DRect; // DRectangle Alias

typedef struct DCircle
{
	Circle circ;
	Color color;
	Shape_Type type;
} DCircle;

typedef DCircle DCirc; // DCircle Alias

//-----Function Declaration-----//
// Drawing Functions //
void DrawPoint(DPoint point);
void DrawLine(Dline line);
void DrawTriangle(DTriangle triangle);
void DrawRectangle(DRectangle rectangle);
void DrawCircle(DCircle circle);

// Drawable Converters //
DPoint DrawablePoint(Point point, Color color, Shape_Type type);
DLine DrawableLine(Line line, Color color, Shape_Type type);
DTriangle DrawableTriangle(Triangle triangle, Color color, Shape_Type type);
DRectangle DrawableRectangle(Rectangle rectangle, Color color, Shape_Type type);
DCircle DrawableCircle(Circle circle, Color color, Shape_Type type);

#endif
