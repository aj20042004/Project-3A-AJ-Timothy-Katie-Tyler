
// Team members tasks:
// -------------------------------------------------------------------------------------------------------------
// Tyler: Need to implement main file, handle_error method in the Expression_Tree class. Create Test cases
// Katie: Need to implement Tree_Node class header, Token class header and cpp file.
// Timothy: Need to implement Expression_Tree class header, cpp file
// AJ: Need to implement Build_Tree header and cpp file, Evaluate_Tree header and cpp file.

// Bugs needs to be Fixed:
// -------------------------------------------------------------------------------------------------------------
// 1) 

// Questions for Professor:
// -------------------------------------------------------------------------------------------------------------
// 

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "Expression_Tree.h"

using namespace std;

int main() {

    ifstream input_file("input.txt"); // Opens the input file
    
    string infix_expression;

    // Returns an error if no input file exists
    if (!input_file) {

        cout << "Error! Sorry...Cannot read the file" << endl;
        return 1; // Return error code indicating failure
    }

    Expression_Tree parser;

    // Reads stuff in
    while (input_file >> infix_expression) {

        int result = parser.parse_and_evaluate(infix_expression);
        cout << result << endl;

    }


    // Closing the input file
    input_file.close();

	return 0;
}