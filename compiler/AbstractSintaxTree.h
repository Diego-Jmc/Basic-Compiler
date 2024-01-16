//
// Created by Diego on 1/15/2024.
//

#ifndef SIMPLE_SCANNER_ABSTRACTSINTAXTREE_H
#define SIMPLE_SCANNER_ABSTRACTSINTAXTREE_H
#include "Node.cpp"
#include <sstream>

template<class T>
class AbstractSintaxTree {

private:
    Node<T> *root;
    string post_orden(Node<T> *node);
public:


    AbstractSintaxTree();

    string show_post_orden();

    Node<T> *getRoot() const;

    void setRoot(Node<T> *root);

};



#endif //SIMPLE_SCANNER_ABSTRACTSINTAXTREE_H
