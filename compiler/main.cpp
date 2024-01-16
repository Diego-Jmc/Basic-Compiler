
#include "Parser.h"
#include "AbstractSintaxTree.cpp"

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

 /*   std::string source_code = "1*+1";

    Tokenizer *tokenizer = new Tokenizer(source_code);

    auto tokens = tokenizer->get_tokens();

    Parser *parser = new Parser(tokens);*/

    auto ast = new AbstractSintaxTree <std::string>();
    ast->getRoot()->setValue("->");
    ast->getRoot()->setLeft(new Node<std::string>("1"));
    ast->getRoot()->setRight(new Node<std::string>("2"));

    std::cout<<ast->show_post_orden();

    return 0;
}
