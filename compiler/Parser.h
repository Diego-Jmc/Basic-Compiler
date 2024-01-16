//
// Created by Diego on 1/4/2024.
//

#ifndef SIMPLE_SCANNER_PARSER_H
#define SIMPLE_SCANNER_PARSER_H
#include "Tokenizer.h"
#include "AbstractSintaxTree.cpp"
#include "CompliationError.h"

class Parser {

private:
    std::vector<Token*> tokens;
public:
    Parser(std::vector<Token* > _tokens);
    std::vector<std::string> parse_expr(std::vector<Token*> _tokens);
    AbstractSintaxTree<std::string> * parse_var_declaration(std::vector<Token*> _tokens);

};


#endif //SIMPLE_SCANNER_PARSER_H
