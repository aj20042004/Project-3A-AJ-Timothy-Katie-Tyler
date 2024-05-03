
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

#include <codecvt> //I don't even know what this is for
#include <sstream> //With my implementation of file reading, this library is probably unnecessary. Program still works with both libraries removed.
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "Expression_Tree.h"

using namespace std;

int main() {

    // Opens the input file
    ifstream input_file("Test_case_2.txt"); 
    
    // Creates an instance for Expression_Tree 
    Expression_Tree parser;

    // Initializes the variable
    string infix_expression;

    // Returns an error if no input file exists
    if (!input_file) {
        cout << "Error! File not found" << endl;
        return -1; // No file found, returns an error
    }

    // Uses getline to read in an entire line
    while (getline(input_file, infix_expression)) {

        // Checks if the line is empty
        if (infix_expression == "") { break; }
        
        // Parses and evaluates the formatted infix string using the parser instance
        int result = parser.parse_and_evaluate(infix_expression);
        
        // Checks for any Errors
        if (result != -9999999) { cout << "The Result is: " << result << endl; }
    }


    // Closes the input file
    input_file.close();

    // End of program
	return 0;
}