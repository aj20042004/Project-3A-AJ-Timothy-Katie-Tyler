#ifndef BUILD_TREE_H
#define BUILD_TREE_H
#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
#include "Tree_Node.h"
#include "Expression_Tree.h"
#include "Token.h"
#include <stack>

class Build_Tree {

public:

	Build_Tree();

	~Build_Tree();

	Tree_Node* tree_builder(const string&);

};



#endif
