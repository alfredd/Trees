//
// Created by alfredd on 10/26/18.
//

#include "BST.h"


vector<int> &BST::inorder() {
    static vector<int> v;
    traverse_in_order(v, this);
    return v;
}

vector<int> &BST::preorder() {
    static vector<int> v;
    return v;
}

vector<int> &BST::postorder() {
    static vector<int> v;
    return v;
}

void BST::traverse_in_order(vector<int> & v, BST *bst) {
    while (bst -> left!= nullptr)
        traverse_in_order(v,bst->left);

    v.push_back(bst->key);

    while (bst-> right != nullptr) {
        traverse_in_order(v, bst->right);
    }
}
