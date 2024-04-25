#include "Token.h"

using namespace std;

// Constructor.
Token::Token(Type token_type_1, const string& value_1) : Token_type(token_type_1), value(value_1) {}

// Getter for type.
Token::Type Token::get_type() const {
	return Token_type;
}

// Getter for value.
string Token::get_value() const {
	return value;
}

