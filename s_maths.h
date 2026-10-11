#ifndef S_MATHS_H
#define S_MATHS_H

#include "swipe.h"
#include "s_physics.h"

typedef enum Axis
{
	x = 0,
	y = 1
} Axis;

typedef int Coordinate[2];

// ----- Vector Arithmetic ----- //
Vector AddVectors(Vector vector_1, Vector vector_2);
Vector SubstractVectors(Vector vector_1,Vector vector_2);
Vector ScaleVector(Vector vector, double scalar);

#endif
