//
// Created by Diego on 1/4/2024.
//

#include "Node.h"

template<typename K>
Node<K>::Node(K value):value(value) {
    right= nullptr;
    left= nullptr;
}
