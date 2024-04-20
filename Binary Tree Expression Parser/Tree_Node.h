#ifndef TREE_NODE_H
#define TREE_NODE_H
#include <iostream>
#include"Token.h"

using namespace std;

struct Tree_Node {
	
	// Data fields.
	Token data;
	Tree_Node* left;
    Tree_Node* right;

	// Constructor.
	Tree_Node(const Token&);

};

#endif