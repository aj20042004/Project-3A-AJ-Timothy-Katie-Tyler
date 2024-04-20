#include "Build_Tree.h"
#include <iostream>

using namespace std;

Build_Tree::Build_Tree() {}

Build_Tree::~Build_Tree() {}

Tree_Node* Build_Tree::tree_builder(const string& postfix_string) {

	stack<Tree_Node*> tree_build_stack;

	for (char each_char : postfix_string) {

		if (each_char == ' ') { continue; }

		if (isdigit(each_char)) {
					
			tree_build_stack.push(new Tree_Node(Token(Token::OPERAND, string(1, each_char)))); // Convert char to int
		}

		else {
			// Create a new node for the operator
			Tree_Node* operator_node = new Tree_Node(Token(Token::OPERATOR, string(1, each_char)));

			// Pop two operands from the stack
			Tree_Node* right_operand = tree_build_stack.top();
			
			tree_build_stack.pop();

			Tree_Node* left_operand = tree_build_stack.top();
			
			tree_build_stack.pop();

			// Set the left and right children of the operator node
			operator_node->left = left_operand;
			operator_node->right = right_operand;

			// Push the operator node back onto the stack
			tree_build_stack.push(operator_node);
		}
	}

	return tree_build_stack.top();

}

