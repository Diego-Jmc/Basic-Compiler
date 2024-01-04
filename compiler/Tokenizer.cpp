//
// Created by Diego on 1/3/2024.
//

#include "Tokenizer.h"

Tokenizer::Tokenizer(std::string input_text) {
    this->source_code = input_text;
}

std::string Tokenizer::get_text_from_file(std::ifstream *p_file) {

    std::string line , input_text;

    if(p_file->is_open()){
        while(!p_file->eof()){
            std::getline(*p_file,line);
            input_text+=line;
        }
    }

    p_file->close();

    return input_text;
}

Tokenizer::Tokenizer(std::ifstream *p_file) {

    this->source_code = get_text_from_file(p_file);

}


std::vector<Token*> Tokenizer::get_tokens() {

    std::vector<Token*> tokens;

    for(int i=0;  i < source_code.size() ; i++ ){

        if(source_code[i] == ' '){
            tokens.push_back(new Token(WHITESPACE,""));
        }

        if(operators.count(source_code[i])){
            tokens.push_back(new Token(OPERATOR,operators[source_code[i]]));
        }

        if(source_code[i] == '\n'){
            tokens.push_back(new Token(BREAKLINE,"\n"));
        }

        if(isdigit(source_code[i])){

            std::string token_value = "";
            int temp_index = i;
            while(std::isdigit(source_code[temp_index]) || source_code[temp_index] == '.' && temp_index <= source_code.size()){

                if(source_code[temp_index] == '.'){
                    if( temp_index+1 <= source_code.size() && !std::isdigit(source_code[temp_index+1])  ){
                        break;
                    }
                }

                token_value+=source_code[temp_index];
                temp_index++;
            }

            i = temp_index-1;
            tokens.push_back(new Token(NUMBER, token_value));

        }


    }


    return tokens;
}