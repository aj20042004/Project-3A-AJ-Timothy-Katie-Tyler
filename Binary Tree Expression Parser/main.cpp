
// Importing the modules
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "Expression_Tree.h"

using namespace std;

int main() {

    // Opens the input file
    ifstream input_file("Test_case_1.txt"); 
    
    // Creates an instance for Expression_Tree 
    Expression_Tree parser;

    // Initializes the variable
    string infix_expression;

    // Returns an error if no input file exists
    if (!input_file) {
        cout << "Error! File not found" << endl;

        // No file found, returns an error
        return -1; 
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