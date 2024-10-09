#include <iostream>
using namespace std;

// Define the structure for a binary tree node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Function to insert a new node into the binary tree
Node* insertNode(Node* root, int value) {
    if (root == NULL) {
        root = new Node();
        root->data = value;
        root->left = root->right = NULL;
    } else if (value < root->data) {
        root->left = insertNode(root->left, value);
    } else {
        root->right = insertNode(root->right, value);
    }
    return root;
}

// Inorder recursive traversal function
void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    Node* root = NULL;

    // Insert nodes into the binary tree
    root = insertNode(root, 4);
    insertNode(root, 5);
    insertNode(root, 2);
    insertNode(root, 9);
    insertNode(root, 1);
    insertNode(root, 3);

    // Perform inorder traversal
    cout << "In-Order traversal of the Binary Search Tree is: ";
    inorder(root);
    cout << endl;

    return 0;
}
