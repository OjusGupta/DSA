#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* right;
    Node* left;
};

Node* createNode (int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

void printPreOrder(Node* node) {
    if (node == nullptr) {
        return;
    }

    cout << node->data << endl;
    printPreOrder(node->left);
    printPreOrder(node->right);
}

void printInOrder(Node* node) {
    if (node == nullptr) {
        return;
    }

    printInOrder(node->left);
    cout << node->data << endl;
    printInOrder(node->right);
}

void printPostOrder(Node* node) {
    if (node == nullptr) {
        return;
    }

    printPostOrder(node->left);
    printPostOrder(node->right);
    cout << node->data << endl;

}

int main() {
    //Level 1
    Node* root = createNode(1);

    //Level 2
    root->left = createNode(2);
    root->right = createNode(3);

    //Level 3
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    //Level 4
    root->left->right->left = createNode(9);
    root->right->right->left = createNode(15);

    printInOrder(root);
    printPreOrder(root);
    printPostOrder(root);

    return 0;

}