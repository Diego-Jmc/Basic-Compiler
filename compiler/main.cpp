
#include "Parser.h"


void compile_line(){
    std::string source_code;
    std::cout<<"GreenHorn>> ";
    std::getline(std::cin,source_code);
    Tokenizer *tokenizer = new Tokenizer(source_code);

    auto tokens = tokenizer->get_tokens();

    for(auto &token : tokens){
        std::cout<<token->toString();
    }


}

int main() {

    std::string source_code = "+*1";

    Tokenizer *tokenizer = new Tokenizer(source_code);

    auto tokens = tokenizer->get_tokens();

    Parser *parser = new Parser(tokens);


    auto ast = parser->parse_var_declaration(tokens);

    std::cout << ast->show_post_orden() << std::endl;

    return 0;
}
