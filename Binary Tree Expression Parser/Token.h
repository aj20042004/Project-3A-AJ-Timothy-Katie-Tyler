#ifndef TOKEN_H
#define TOKEN_H
#include <iostream>
#include <string>

using namespace std;

class Token {

public:
	enum Type { OPERATOR, OPERAND };

	// Constructor.
	Token(Type,const string&);

	// Getter methods.
	Type get_type() const;

	string get_value() const;

private:
	Type Token_type;
	string value;
};

#endif
