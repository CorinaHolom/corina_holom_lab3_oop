//
// Created by holom on 14.03.2020.
//

#ifndef LAB3_TREE_H
#define LAB3_TREE_H

#include "Node.h"
#include <string>
class Tree{
    friend class Node;

public:
    //ma gandeam ca ii putem trimite un vectori de noduri si dupa vedem cum il construim...ca nush cum facem cu tatal
    Tree(Node *noduri);
    //chestiile astea au mai multa logica sa fie pe arbore in sine si nu pe nod
    int countNodes(Tree arbore); //gen sigur vrea sa calculam nr total de noduri
    int countEdges(Tree arbore); //si nr total de laturi etc.
    int height(Tree arbore);
    std::string inorder(Node n);//si astea din cate imi aduc aminte puteai sa pornesti parca din orice nod, deci mno raman nod
    std::string preorder(Node n);
    std::string postorder(Node n);
    void loschen(Node n);
    void insert(Node n);

};

#endif //LAB3_TREE_H
