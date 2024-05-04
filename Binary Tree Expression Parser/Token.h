#ifndef TOKEN_H
#define TOKEN_H

// Importing the modules
#include <iostream>
#include <string>

using namespace std;

// Creating the class
class Token {

public:

	// Creating enum "Type" 
	enum Type { OPERATOR, OPERAND };

	// Constructor.
	Token(Type,const string&);

	// Getter methods.
	Type get_type() const;         // Returns the type of a Token
	string get_value() const;      // Return the value of a Token
		
private:

	// Data fields
	Type Token_type;              // Stores the Token Type
	string value;                 // Stores the Token value
};

#endif
