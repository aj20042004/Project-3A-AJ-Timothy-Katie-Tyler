#include <string>
#include <iostream>
#include "Expression_Tree.h"
#include "Convert_to_postfix.h"
#include "Evaluate_Tree.h"

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
	
	// Try and catch block for parse and evaluating expression tree
	try {

		Convert_to_postfix exp_parser_obj;
		Evaluate_Tree exp_tree_obj;

		// Converting infix to postfix
		string postfix_string = exp_parser_obj.infix_to_postfix(infix_string);
		
		// Evaluating binary tree postfix
		int result_num = exp_tree_obj.Evaluator(Tree_Node* root);

		// Returning the result number
		return result_num;
	}
	catch (const exception& error) {

		// Catching the error message
		handle_error(error.what());
		return -9999999;
	}
}

/** Returns the precedence of an operator.
	@param str_operator: operator to return its precedence
	@return precedence
	@throws exception: "Operator Unsupported"
*/
int Expression_Tree::precedence(const string& str_operator) {

	// Precedence of power
	if (str_operator == "^") {
		return 7;
	}

	// Precedence of multiply, divide, and mod
	if (str_operator == "*" || str_operator == "/" || str_operator == "%") {
		return 6;
	}

	// Precedence of add and subtract
	if (str_operator == "+" || str_operator == "-") {
		return 5;
	}

	// Precedence of comparision
	if (str_operator == ">" || str_operator == ">=" || str_operator == "<" || str_operator == "<=") {
		return 4;
	}

	// Precedence of equality
	if (str_operator == "==" || str_operator == "=") {
		return 3;
	}

	// Precedence of logicad "and"
	if (str_operator == "&&") {
		return 2;
	}

	// Precedence of logical "or"
	if (str_operator == "||") {
		return 1;
	}

	throw exception("Unsupported Operator");
}

/** Returns the calculation of (left_operand ^ right_operand)
	@param left_operand: base
	@param right_operand: exponent
	@retun result of (left_operand ^ right_operand)
*/
int Expression_Tree::power_function(int left_operand, int right_operand) {
	if (right_operand == 0) { return 1; }
	return left_operand * power_function(left_operand, right_operand - 1);
}

/** handles the error and throws the error message
	@param: error_message
*/
void Expression_Tree::handle_error(const string& error_message) {
	cerr << "Error: " << error_message << endl;
}