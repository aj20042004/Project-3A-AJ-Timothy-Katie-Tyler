#include "Evaluate_Tree.h"

using namespace std;

// Constructor
Evaluate_Tree::Evaluate_Tree() {}

// Destructor
Evaluate_Tree::~Evaluate_Tree() {}

/** Returns the final result number of the infix expression
	@param root: A root node of the expression tree
	@return: the result number after evaluating the tree.
*/
int Evaluate_Tree::Evaluator(Tree_Node* root) {

	// Creating Expression Tree object
	Expression_Tree exp_tree_obj;

	// Checking whether the root node exists
	if (!root) { return 0; }

	// Checking whether current node value is a operand
	if (root->data.get_type() == Token::OPERAND) {

		// Converting the operand value from string to int
		return stoi(root->data.get_value());
	}

	// Evaluating the left subtree
	int left_val = Evaluator(root->left);

	// Evaluating the right subtree
	int right_val = Evaluator(root->right);

	// Supported operators
    // Addition operator
	if (root->data.get_value() == "+") { return left_val + right_val; }

	// Subtraction operator
	if (root->data.get_value() == "-") { return left_val - right_val; }

	// Multiplication operator
	if (root->data.get_value() == "*") { return left_val * right_val; }

	// Mod operator
	if (root->data.get_value() == "%") {

		// Checking whether the denominator is 0 and throwing error message
		if (!right_val) { throw exception("Divide by zero"); }
		return left_val % right_val;

	}

	// Division operator
	if (root->data.get_value() == "/") {
		
		// Checking whether the denominator is 0 and throwing error message
		if (!right_val) { throw exception("Divide by zero"); }
		return left_val / right_val;

	}

	// Power operator
	if (root->data.get_value() == "^") {

		if (!right_val) { return 1; }
		return exp_tree_obj.power_function(left_val, right_val);

	}

	// Greater than operator
	if (root->data.get_value() == ">") {

		if (left_val > right_val) { return 1; }
		else { return 0; }

	}

	// Greater than or equal operator
	if (root->data.get_value() == ">=") {

		if (left_val >= right_val) { return 1; }
		else { return 0; }

	}

	// Less than operator
	if (root->data.get_value() == "<") {

		if (left_val < right_val) { return 1; }
		else { return 0; }

	}

	// Less than or equal operator
	if (root->data.get_value() == "<=") {

		if (left_val <= right_val) { return 1; }
		else { return 0; }

	}

	// Equal equal operator
	if (root->data.get_value() == "==") {

		if (left_val == right_val) { return 1; }
		else { return 0; }

	}

	// Not equal operator
	if (root->data.get_value() == "!=") {

		if (left_val != right_val) { return 1; }
		else { return 0; }

	}

	// Logical and operator
	if (root->data.get_value() == "&&") {

		if (left_val && right_val) { return 1; }
		else { return 0; }

	}

	// Logical or operator
	if (root->data.get_value() == "||") {

		if (left_val || right_val) { return 1; }
		else { return 0; }

	}

}

