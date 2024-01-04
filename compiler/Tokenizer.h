//
// Created by Diego on 1/3/2024.
//

#ifndef SIMPLE_SCANNER_TOKENIZER_H
#define SIMPLE_SCANNER_TOKENIZER_H
#include "Token.h"
#include <fstream>
#include <vector>
class Tokenizer {
    std::string source_code;
    std::string get_text_from_file(std::ifstream *p_file);


    std::unordered_map<char,std::string> operators = {
            {'+',"Plus"},
            {'-',"Minus"},
            {'*',"multiply"},
            {'/',"divide"}
    };


public:
    Tokenizer(std::ifstream *p_file);
    Tokenizer(std::string input_text);
    std::vector<Token*> get_tokens();


};


#endif //SIMPLE_SCANNER_TOKENIZER_H
