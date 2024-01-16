//
// Created by Diego on 1/4/2024.
//

#ifndef SIMPLE_SCANNER_NODE_H
#define SIMPLE_SCANNER_NODE_H
#include <iostream>

using std::string;

template<typename K>
class Node {

private:
    K value;
    Node *right;
    Node *left;
public:
    Node() {}

    explicit Node(K value);


    K getValue() const {
        return value;
    }

    void setValue(K value) {
        Node::value = value;
    }

    Node *getRight() const {
        return right;
    }

    void setRight(Node *right) {
        Node::right = right;
    }

    Node *getLeft() const {
        return left;
    }

    void setLeft(Node *left) {
        Node::left = left;
    }


};


#endif //SIMPLE_SCANNER_NODE_H
