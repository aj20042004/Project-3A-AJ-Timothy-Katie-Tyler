#include <string>
#include <iostream>
#include "Expression_Tree.h"
using namespace std;

// Constructor
Expression_Tree::Expression_Tree() {}

// Destructor
Expression_Tree::~Expression_Tree() {}

/** Returns the result of the infix expression after evaluating
	@param infix_string: expression to be converted into postfix
	@return: result number
	@throws exception: error message
*/
int Expression_Tree::parse_and_evaluate(const string& infix_string) {
	
}


/** handles the error and throws the error message
	@param: error_message
*/
void Expression_Tree::handle_error(const string& error_message) {
	cerr << "Error: " << error_message << endl;
}