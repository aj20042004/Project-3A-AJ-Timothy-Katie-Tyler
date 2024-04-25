#ifndef TOKEN_H
#define TOKEN_H

#include <string>

using namespace std;

enum Token_type {
	OPERATOR,
	OPERAND
};

class Token {
public:
	// Constructor.
	Token(Token_type type, const string& value);

	// Getter methods.
	Token_type get_type() const {
		return type;
	}

	string get_value() const {
		return value;
	}

private:
	Token_type type;
	string value;
};

#endif
