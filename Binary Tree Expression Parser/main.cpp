
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

#include <codecvt>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "Expression_Tree.h"

using namespace std;

int main() {

    ifstream input_file("Test_case_1.txt"); // Opens the input file
    
    // Creating the instance for Expression_Tree 
    Expression_Tree parser;

    // Initializing the variable
    string infix_expression;

    // Returns an error if no input file exists
    if (!input_file) {

        cout << "Error! Sorry...Cannot read the file" << endl;
        return -1; // Return error code indicating failure
    }

    // Using getline to read the entire line
    while (getline(input_file, infix_expression)) {

        // Checking if the line string is empty
        if (infix_expression == "") {
            break;
        }
        
        // Parsing and evaluating the formatted infix string using the parser instance
        int result = parser.parse_and_evaluate(infix_expression);
        
        // Checking for Error
        if (result != -9999999) {
            cout << "The Result is: " << result << endl;
        }
       
    }


    // Closing the input file
    input_file.close();

    // Returning
	return 0;
}