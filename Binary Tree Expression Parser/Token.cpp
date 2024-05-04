#include "Token.h"

using namespace std;

// Constructor.
Token::Token(Type token_type_1, const string& value_1) : Token_type(token_type_1), value(value_1) {}

// Getters

/** Returns the Type of a Token node
	@return: Type of the Token
*/
Token::Type Token::get_type() const {
	return Token_type;
}

/** Returns the value of a Token node
	@return: value of the Token
*/
string Token::get_value() const {
	return value;
}

