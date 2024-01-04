//
// Created by Diego on 1/3/2024.
//

#ifndef SIMPLE_SCANNER_TOKEN_H
#define SIMPLE_SCANNER_TOKEN_H
#include <iostream>
#include <sstream>
#include <unordered_map>

enum Token_type{
   NUMBER,
   IDENTIFIER,
   OPERATOR,
   WHITESPACE,
   BREAKLINE,
};


class Token {

private:
    Token_type token_type;
    std::string token_value;
    std::unordered_map<int, std::string> token_type_names = {
            {NUMBER, "Number"},
            {IDENTIFIER, "Identifier"},
            {OPERATOR, "Operator"},
            { WHITESPACE,"Whitespace"},
            {BREAKLINE,"Breakline"}
    };


public:
    Token(Token_type tokenType, const std::string &tokenValue);

    Token_type getTokenType() const;

    void setTokenType(Token_type tokenType);

    const std::string &getTokenValue() const;

    void setTokenValue(const std::string &tokenValue);

    std::string toString();

};


#endif //SIMPLE_SCANNER_TOKEN_H
