#include <iostream>
#include <string>
#include "CollatzTree.hpp"

using namespace std; 

CollatzTree::CollatzTree()
{
    root = new Node;
    root->key = 1;
}

CollatzTree::~CollatzTree()
{
    delete root;
}

void CollatzTree::traverseToOne(int num)
{
    Node* head = new Node;
    cout << head->key << endl;
    head->key = num;

    Node* currNode = head;

    // Build doubly linked list of nodes, output each key
    while (currNode->key != 1){
        // Create new node
        Node* newNode = new Node;
        // Set newNode key
        newNode->key = basicCollatz(currNode->key);
        // Connect newNode to the pervious node
        currNode->next = newNode;
        newNode->prev = currNode;
        // Set Currnode to newNode
        currNode = newNode;
        // Output currNode key
        cout << "CurrNode Key: " << currNode->key << endl;
    }
    cout << "Reached One. Collatz Confirmed for " << head->key << endl;
    cout << "Begin reversing up list to input number" << endl;
    cout << "CurrNode key: " << currNode->key << endl;
    while(currNode != head){
        // set currNode to previous node
        currNode = currNode->prev;
        // Output currNode key
        cout << "CurrNode key: " << currNode->key << endl;
    }
    cout << "Successed, traversed back to initial value of " << currNode->key << " from root node 1" << endl;
    return;
}

int CollatzTree::basicCollatz(int num)
{
    if ((num % 2) == 0)
        return num / 2;
    else
        return (3 * num) + 1;
}

bool CollatzTree::validInput(int num)
{
    // Checks if input is less than or equal to 0
    if (num <= 1){
        cout << "Error, the collatz conjecture only applies to intergers greater than 0" << endl;
        return false;
    }
    // Checks if overflow will occur
    else if (num % 2 != 0 && num > ((3 * num) + 1)){
        cout << "Error, input would cause overflow with 3x+1 operation" << endl;
        return false;
    }

    return true;
}

void CollatzTree::addBranch(int num){
    // Warning: Development in progress, creates new branch independant of all others, only connects to root node

    // Validate input number
    if(!validInput(num)){
        return;
    }
    // Create new head node, output value
    Node* leaf = new Node;
    leaf->key = num;
    cout << "Leaf node value: " << leaf->key << endl;

    // Create currNode pointer, set to head
    Node* currNode = leaf;
    
    // Build branch down to root
    while(currNode->key != 2){
        Node* newNode = new Node;
        newNode->key = basicCollatz(currNode->key);
        currNode = newNode;
        cout << "CurrNode key: " << currNode->key << endl;
    }

    // Connect new branch to root
    currNode->next = root;

    return;
}