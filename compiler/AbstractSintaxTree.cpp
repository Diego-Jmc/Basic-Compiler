//
// Created by Diego on 1/15/2024.
//

#include "AbstractSintaxTree.h"

template<class T>
AbstractSintaxTree<T>::AbstractSintaxTree() {
    root = new Node<T>();
}


template<class T>
string AbstractSintaxTree<T>::post_orden(Node<T> *node) {
    std::stringstream s;


    if(node->getLeft()){
       s<< post_orden(node->getLeft());
    }

    if(node->getRight()){
        s<<post_orden(node->getRight());
    }

    s<<node->getValue()<<std::endl;


    return s.str();
}


template<class T>
string AbstractSintaxTree<T>::show_post_orden() {
    return post_orden(this->root);
}


template<class T>
Node<T> *AbstractSintaxTree<T>::getRoot() const {
    return root;
}

template<class T>
void AbstractSintaxTree<T>::setRoot(Node<T> *root) {
    AbstractSintaxTree::root = root;
}
