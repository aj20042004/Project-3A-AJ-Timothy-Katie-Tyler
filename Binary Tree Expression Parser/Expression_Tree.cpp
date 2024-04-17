#include <string>
#include <iostream>
#include "Expression_Tree.h"
using namespace std;

// Constructor
Expression_Tree::Expression_Tree() {}

// Destructor
Expression_Tree::~Expression_Tree() {}

/** handles the error and throws the error message
	@param: error_message
*/
void Expression_Tree::handle_error(const string& uhoh) {
	cerr << "ERROR: " << uhoh << endl;
}

/** Returns the result of the infix expression after evaluating
	@param infix_string: expression to be converted into postfix
	@return: result number
	@throws exception: error message
*/
int Expression_Tree::parse_and_evaluate(const string& infix_string) {
	int outp = 5;
	if (infix_string == "a") {
		handle_error("TEST ERROR");
		return -1;
	}
	return outp; // Placeholder just to get my basic stuff errorless. Actually filling this function isn't my job here.
}