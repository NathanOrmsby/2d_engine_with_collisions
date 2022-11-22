/*
 * collision_detection.cpp
 *
 *  Created on: Nov 22, 2022
 *      Author: norms
 */

#include "collision_detection.h"
#include "vectors.h"
// Functions dealing with the collision detection of objects


// Union of two AABBs
AABB union_aabbs(AABB *a, AABB *b)
{
	// Create a single AABB surrounding two AABBs
	AABB result;
	// Use minimum and maximum operations
	result.min = minimum_vector(a->min, b->min);
	result.max = maximum_vector(a->max, b->max);

	return result;
}

// Surface Area (Area) of AABB
float AABB::area(void)
{
	Vector d = max - min;
	return d.x * d.y;
}

// Inserting leaves into AABB tree
void insert_leaf(Tree tree, int object_index, AABB box)
{

}





