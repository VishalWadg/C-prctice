#include<iostream>
using namespace std;

struct Node
{
    int value;
    Node *left, *right;
    Node(int val): value(val),left(nullptr), right(nullptr){}
};

Node* insertNode (Node * root, int value) {
    if (root == nullptr)
    {
        return new Node(value);
    }
    if (value <= root -> value)
    {
        root -> left = insertNode(root -> left, value);
    }
    else 
    {
        root -> right = insertNode(root -> right, value);
    }
    return root;
}

int findLongestPath(Node *root) {
    if (root == nullptr)
    {
        return 0;
    }
    return max(findLongestPath(root->left),findLongestPath(root->right));
}

int findMinVal(Node *root) {
    if (root == nullptr)
    {
        cout<<"tree Empty !\n";
        return -1;
    }

    while (root -> left != nullptr)
    {
        root = root -> left;
    }
    return root->value;
}

void swapPointers(Node *root) {
    if (root == nullptr)
    {
        return;
    }
    Node *temp = root -> left;
    root->left = root -> right;
    root -> right = temp;
    swapPointers(root -> left);
    swapPointers(root -> right);
}

bool searchValue(Node *root, int value) {
    if (root == nullptr)
    {
        return false;
    }
    if (root -> value == value)
    {
        return true;
    }
    else if (value < root -> value)
    {
       return searchValue(root->left, value);
    } 
    else 
    {
        return searchValue(root -> right, value);
    }
}

int main(){
    Node * root = nullptr;
    root = insertNode(root, 5);
    root = insertNode(root, 7);
    root = insertNode(root, 3);
    root = insertNode(root, 2);
    root = insertNode(root, 1);
    root = insertNode(root, 6);
    root = insertNode(root, 8);
    cout<<"> "<<findMinVal(root);
    if (searchValue(root, 1))
    {
        cout<<"found";
    }
    
    cout<<"> "<< searchValue(root, 1);
    return 0;
}