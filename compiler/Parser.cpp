//
// Created by Diego on 1/4/2024.
//

#include "Parser.h"

Parser::Parser(std::vector<Token *> _tokens) {
    this->tokens = _tokens;
}


std::vector<std::string> Parser::parse_expr(std::vector<Token *> _tokens) {
    int index = 0;

    if (!tokens.empty()) {


        if (tokens[index]->getTokenType() == NUMBER) {

            std::string left = tokens[index]->getTokenValue();

            if(tokens[index+1]->getTokenType() == OPERATOR){

                if(tokens[index+1]->getTokenValue() == "multiply" || tokens[index+1]->getTokenValue() == "divide"){

                    std::string root = tokens[index+1]->getTokenValue();
                    std::string right = tokens[index+2]->getTokenValue();





                }

            }


        }


    }
}

AbstractSintaxTree<std::string> *  Parser::parse_var_declaration(std::vector<Token *> _tokens) {
    int index =0;

    auto ast = new AbstractSintaxTree<std::string>();

    if(!tokens.empty()){

        Node<std::string> *left_node = new Node<std::string>();

        if(tokens[index]->getTokenType() == NUMBER || tokens[index]->getTokenType() == IDENTIFIER){
             left_node->setValue(tokens[index]->getTokenValue());
        }

        index++;

    }


}
