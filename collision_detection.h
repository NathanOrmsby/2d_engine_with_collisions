/*
 * collision_detection.h
 *
 *  Created on: Nov 22, 2022
 *      Author: norms
 */

#ifndef COLLISION_DETECTION_H_
#define COLLISION_DETECTION_H_

#include "vectors.h"
// Axis Aligned Bounding Boxes (AABBs). Rectangles that bound objects
class AABB
{
public:
	// Bottom left point
	Vector min;
	// Top right point
	Vector max;

	// AABB methods

};

// Classes for the Binary collision tree
// Node on the binary tree. Made up of nodes and leaves
class Node
{
public:
	AABB box;
	int object_index;
	int parent_index;
	int child1;
	int child2;
	bool is_leaf;
};

// The tree containing all of the nodes
class Tree
{
public:
	Node *nodes;
	int node_count;
	int root_index;

	// Inserting a leaf
	void insert_leaf(int object_index, AABB box);
};



#endif /* COLLISION_DETECTION_H_ */
