#include "Tokenizer.h"

int main() {


    std::string source_code = "1 + 1";

    Tokenizer *tokenizer = new Tokenizer(source_code);

    auto tokens = tokenizer->get_tokens();

    for(auto &element :  tokens){
        std::cout<< element->toString();
    }






    return 0;
}
