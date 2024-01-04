//
// Created by Diego on 1/3/2024.
//

#include "Token.h"

Token::Token(Token_type tokenType, const std::string &tokenValue) : token_type(tokenType), token_value(tokenValue) {}

Token_type Token::getTokenType() const {
    return token_type;
}

void Token::setTokenType(Token_type tokenType) {
    token_type = tokenType;
}

const std::string &Token::getTokenValue() const {
    return token_value;
}

void Token::setTokenValue(const std::string &tokenValue) {
    token_value = tokenValue;
}


std::string Token::toString() {
    std::stringstream s;

    s<<"Token type:" << token_type_names[getTokenType()] << "  Token value: " << getTokenValue() << std::endl;

    return s.str();
}