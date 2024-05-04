#ifndef BUILD_TREE_H
#define BUILD_TREE_H
#include <iostream>
#include <string>
#include <cctype>
#include <sstream>

// Importing the modules
#include "Tree_Node.h"
#include "Expression_Tree.h"
#include "Token.h"
#include <stack>

// Creating the Build Tree class
class Build_Tree {

public:

	// Constructor
	Build_Tree();

	// Destructor
	~Build_Tree();

	// tree_builder function for building an expression tree from a postfix string
	Tree_Node* tree_builder(const string&);

};



#endif
