#ifndef SDRAW_H
#define SDRAW_H

#include "swipe.h"
#include "sphysics.h"

//-----Window-----/
typedef struct Resolution
{
	int width;
	int height;
} Resolution;

typedef Struct Window
{
	char * render;
	Resolution res;
} Window;

extern Window window;

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
	FILLED,
	STRIPEDV,
	STRIPED_VERTICAL = STRIPEDV, // STRIPEDV Alias
	STRIPEDH,
	STRIPED_HORIZONTAL = STRIPEDH // STRIPEDH Alias
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
//-----Drawing Functions-----//
// Window //
void InitWindow(Window *window);
void UpdateWindow(Window *window);
void DrawWindow(Window window);

// Objects //
void DrawPoint(DPoint point); // Draws a Point on the window
void DrawLine(Dline line); // Draws a Line on the window
void DrawTriangle(DTriangle triangle); // Draws a Triangle on the window
void DrawRectangle(DRectangle rectangle); // Draws a Rectangle on the window
void DrawCircle(DCircle circle); // Draws a Circle on the window

//-----Drawable Converters-----//
DPoint DrawablePoint(Point point, Color color, Shape_Type type); // Returns  DPoint from a Point and drawing properties
DLine DrawableLine(Line line, Color color, Shape_Type type); // Returns a DLine from a Line and drawing properties
DTriangle DrawableTriangle(Triangle triangle, Color color, Shape_Type type); // Returns a DTriangle from a Triangle and drawing properties
DRectangle DrawableRectangle(Rectangle rectangle, Color color, Shape_Type type); // Returns a DRectangle from a Rectangle and drawing properties
DCircle DrawableCircle(Circle circle, Color color, Shape_Type type); // Returns a DCircle from a circle and drawing properties

#endif
