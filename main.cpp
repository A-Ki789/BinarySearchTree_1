#include "BinaryTree.h"
#include "Node.h"

#include <iostream>

using namespace std;

int main(){
    auto* tree = new BinaryTree();
    tree->insert(10);
    tree->insert(32);
    tree->insert(12);
    tree->insert(3);
    tree->insert(55);

    cout<<tree->root->left->right->value<<endl;
    return 0;
}