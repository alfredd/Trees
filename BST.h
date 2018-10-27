//
// Created by alfredd on 10/26/18.
//

#ifndef BINARYSEARCHTREE_BST_H
#define BINARYSEARCHTREE_BST_H

#include <vector>

using namespace std;

class BST {
        BST *left, *right, *p;
        int key;

    void traverse_in_order(vector<int> &, BST*);

    public:

        vector<int>& inorder();

        vector<int>& preorder();

        vector<int>& postorder();

};


#endif //BINARYSEARCHTREE_BST_H
