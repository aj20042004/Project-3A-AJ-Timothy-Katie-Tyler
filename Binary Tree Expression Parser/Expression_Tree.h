#ifndef EXPRESSION_TREE_H
#define EXPRESSION_TREE_H
#include <string>
#include <iostream>

using namespace std;

class Expression_Tree {
public:

	//Constructor
	Expression_Tree();

	//Destructor
	~Expression_Tree();

	int parse_and_evaluate(const string&);

private:

	// handle_error method for any exception
	void handle_error(const string&);
};

#endif
