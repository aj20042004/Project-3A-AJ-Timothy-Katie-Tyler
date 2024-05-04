#ifndef TREE_NODE_H
#define TREE_NODE_H

// Importing the modules
#include <iostream>
#include"Token.h"

using namespace std;

// Creating a struct for Tree_Node
struct Tree_Node {
	
	// Data fields.
	Token data;
	Tree_Node* left;
    Tree_Node* right;

	// Constructor.
	Tree_Node(const Token&);

};

#endif