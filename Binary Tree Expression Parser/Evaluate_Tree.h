#ifndef EVALUATE_TREE_H
#define EVALUATE_TREE_H
#include <iostream>
#include "Token.h"
#include "Tree_Node.h"
#include "Expression_Tree.h"

class Evaluate_Tree {

public:

	Evaluate_Tree();

	~Evaluate_Tree();

	int Evaluator(Tree_Node*);

};


#endif
