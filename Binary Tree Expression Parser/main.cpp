
// Team members tasks:
// ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// 1) Katie: Creating the test cases and validating the output ( Can use last project's test cases ), in-line comments for Token header and cpp files, Tree_Node header and cpp files
// 2) Timothy: Need to complete the Expression_Tree.cpp file ( in-line comments on Expression_Tree.cpp - spelling mistakes)
// 3) Tyler: Need to complete the main.cpp ( in-line comments in the main file )
// 4) AJ: Review the code

// Bugs needs to be Fixed:
// -------------------------------------------------------------------------------------------------------------
// 1) 

// Questions for Professor:
// -------------------------------------------------------------------------------------------------------------


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
        if (infix_expression != "") { //Checks to make sure the line being read in isn't empty
            int result = parser.parse_and_evaluate(infix_expression);
            if (result != -9999999) { cout << result << endl; } //-9999999 would indicate an invalid expression
        }
    }


    // Closing the input file
    input_file.close();

	return 0;
}