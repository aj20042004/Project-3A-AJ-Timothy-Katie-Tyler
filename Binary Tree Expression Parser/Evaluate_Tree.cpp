#include "Evaluate_Tree.h"

using namespace std;

Evaluate_Tree::Evaluate_Tree() {}

Evaluate_Tree::~Evaluate_Tree() {}

int Evaluate_Tree::Evaluator(Tree_Node* root) {

	Token token_obj;
	Expression_Tree exp_tree_obj;

	if (!root) { return 0; }

	// Need to work on this once the Token class has been implemented. Use get() methods
	if (root->data.Token_type == Token::OPERAND) {
		return stoi(root->data.value);
	}

	int left_val = Evaluator(root->left);
	int right_val = Evaluator(root->right);

	if (root->data.value == "+") { return left_val + right_val; }

	if (root->data.value == "-") { return left_val - right_val; }

	if (root->data.value == "*") { return left_val * right_val; }

	if (root->data.value == "%") {

		if (!right_val) { throw exception("Divide by zero"); }
		return left_val % right_val;

	}

	if (root->data.value == "/") {
		
		if (!right_val) { throw exception("Divide by zero"); }
		return left_val / right_val;

	}

	if (root->data.value == "^") {

		if (!right_val) { return 1; }
		return exp_tree_obj.power_function(left_val, right_val);

	}

	// Greater than operator
	if (root->data.value == ">") {

		if (left_val > right_val) { return 1; }
		else { return 0; }

	}

	// Greater than or equal operator
	if (root->data.value == ">=") {

		if (left_val >= right_val) { return 1; }
		else { return 0; }

	}

	// Less than operator
	if (root->data.value == "<") {

		if (left_val < right_val) { return 1; }
		else { return 0; }

	}

	// Less than or equal operator
	if (root->data.value == "<=") {

		if (left_val <= right_val) { return 1; }
		else { return 0; }

	}

	// Equal equal operator
	if (root->data.value == "==") {

		if (left_val == right_val) { return 1; }
		else { return 0; }

	}

	// Not equal operator
	if (root->data.value == "!=") {

		if (left_val != right_val) { return 1; }
		else { return 0; }

	}

	// Logical and operator
	if (root->data.value == "&&") {

		if (left_val && right_val) { return 1; }
		else { return 0; }

	}

	// Logical or operator
	if (root->data.value == "||") {

		if (left_val || right_val) { return 1; }
		else { return 0; }

	}







}
