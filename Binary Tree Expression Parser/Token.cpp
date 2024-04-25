#include "Token.h"

using namespace std;

// Constructor.
Token::Token(Token_type type, const string& value) : type(type), value(value) {}

// Getter for type.


// Getter for value.
string Token::get_value() const {
	return value;
}

