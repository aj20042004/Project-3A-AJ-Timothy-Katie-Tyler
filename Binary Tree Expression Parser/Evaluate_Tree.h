#ifndef EVALUATE_TREE_H
#define EVALUATE_TREE_H

// importing the modules
#include <iostream>
#include "Token.h"
#include "Tree_Node.h"
#include "Expression_Tree.h"

// Creating the class
class Evaluate_Tree {

public:

	// Constructor
	Evaluate_Tree();

	// Destructor
	~Evaluate_Tree();

	// Evaluator function for calculating the result
	int Evaluator(Tree_Node*);

};


#endif
