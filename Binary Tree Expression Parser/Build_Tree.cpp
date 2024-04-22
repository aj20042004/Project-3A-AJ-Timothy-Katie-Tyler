#include "Build_Tree.h"
#include <iostream>

using namespace std;

Build_Tree::Build_Tree() {}

Build_Tree::~Build_Tree() {}

Tree_Node* Build_Tree::tree_builder(const string& postfix_string) {

	stack<Tree_Node*> tree_build_stack;

	for (int i = 0; i < postfix_string.size(); i++) {

		char each_char = postfix_string[i];

		if (each_char == ' ') { continue; }

		if (isdigit(each_char)) {

			// Setting the index variable equal to i
			int index = i;

			string operand;

			// Creating a digit operand
			while (isdigit(postfix_string[index])) {
				operand += postfix_string[index];
				index++;
			}

			tree_build_stack.push(new Tree_Node(Token(Token::OPERAND, operand)));

			// Setting the correct index
			i = index - 1;
		}

		else {

			string char_token = string(1, each_char);

			// Checking if token's next character is either '=', '&', '|'
			if (each_char == '>' || each_char == '<' || each_char == '=' || each_char == '!' || each_char == '&' || each_char == '|') {

				if (i < postfix_string.size() && (postfix_string[i + 1] == '=' || postfix_string[i + 1] == '&' || postfix_string[i + 1] == '|')) {
					char_token += postfix_string[i + 1];
					i = i + 1;
				}

			}


			// Create a new node for the operator
			Tree_Node* operator_node = new Tree_Node(Token(Token::OPERATOR, char_token));

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

