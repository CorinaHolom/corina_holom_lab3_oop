//
// Created by holom on 14.03.2020.
//

#ifndef LAB3_NODE_H
#define LAB3_NODE_H

class Node{

    friend class Tree;
private:
    int wert;
    Node *son;
    Node *father;

public:
    Node(int wert);
};

#endif //LAB3_NODE_H
