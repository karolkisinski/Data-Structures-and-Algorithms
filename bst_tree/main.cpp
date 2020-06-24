#include <iostream>

using namespace std;

///structure for BST TREE

struct node{
    int key;
    node* parent;
    node* left;
    node* right;
};


///function to make a node

node* make_node(int value)
{
    node* n = new node;
    n->key = value;
    n->left = nullptr;
    n->right = nullptr;
    n->parent = nullptr;
    return n;
}

///function to add an item to BST tree

void add_item(int value, node* &root)
{
    if(root==nullptr)
    {
        root = make_node(value);
        return;
    }
    node* temp = root;
    while(true)
    {
        if(value>=temp->key)
        {
            if(temp->right==nullptr)
            {
                temp->right = make_node(value);
                temp->right->parent = temp;
                return;
            }
            else
            {
                temp = temp->right;
            }
        }
        else
        {
            if(temp->left = nullptr)
            {
                temp->left = make_node(value);
                temp->left->parent = temp;
                return;
            }
            else
            {
                temp = temp->left;
            }
        }
    }
}

///function to display bst tree in postorder

void postorder(node* root)
{
    if(root!=nullptr)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->key << " ";
    }
}

///function to display bst tree in inorder

void inorder(node* root)
{
    if(root!=nullptr)
    {
        inorder(root->left);
        cout << root->key << " ";
        inorder(root->right);
    }
}
///function to find an item in bst tree

node* find_item(node* root, int value)
{
    while(root!=nullptr)
    {
        if(root->key==value)
        {
            return root;
        }
        if(value>root->key)
        {
            root = root->right;
        }
        else
        {
            root=root->left;
        }
    }
    return nullptr;
}

///function to delete the bst tree

void deleteTree(node* root)
{
    if(root!=nullptr)
    {
        root->left = nullptr;
        root->right = nullptr;
        root->parent = nullptr;
    }
}

///function to check that is bst tree empty

void isEmpty(node* root)
{
    if(root==nullptr)
    {
        cout << endl << "BST Tree is empty" << endl;
    }
    else
    {
        cout << endl << "BST Tree is not empty" << endl;
    }
}

///menu to operate on bst tree
void menu()
{
    int value;
    node* root = nullptr;
    unsigned short choice;
    while(choice!=0)
    {
        cout << endl << "What do you want?" << endl
         << "1 -> Check that is bst tree empty" << endl
         << "2 -> Add an item to tree" << endl
         << "3 -> postorder" << endl
         << "4 -> inorder" << endl
         << "5 -> delete bst tree" << endl
         << "0 -> exit" << endl
         << "Your choice:";
        cin >> choice;
        switch(choice)
        {
            case 1 : isEmpty(root); break;
            case 2 : cout << "What value do u want to add: "; cin >> value; add_item(value, root); break;
            case 3 : postorder(root); break;
            case 4 : inorder(root); break;
            case 5 : deleteTree(root); root = nullptr; cout << endl << "Drzewo zostalo usuniete" << endl; break;
            case 0 : break;
            default: cout << "Nie ma takiego zadania" << endl;
        }
    }
}
int main()
{
    menu();
    return 0;
}
