#ifndef TREE_NODE_H
#define TREE_NODE_H
#include"Token.h"

struct Tree_Node {
	// Data fields.
	Token data;
	Tree_Node* left, right;

	// Constructor.
	Tree_Node(const Token& token);

};

#endif