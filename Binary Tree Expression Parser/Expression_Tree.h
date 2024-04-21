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

	// Parising infix string and evualting the postfix
	int parse_and_evaluate(const string&);

	// Power function to calculate exponenets
	int power_function(int, int);

	// Precedence method to evaluate the expression by orders of operation
	int precedence(const string&);

private:

	// handle_error method for any exception
	void handle_error(const string&);
};

#endif
