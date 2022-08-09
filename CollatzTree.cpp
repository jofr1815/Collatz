#include <iostream>
#include <string>
#include "CollatzTree.hpp"

using namespace std; 

CollatzTree::CollatzTree()
{
    
}

CollatzTree::~CollatzTree()
{

}

void CollatzTree::traverseToOne(int num)
{

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
    if (num <= 0){
        cout << "Error, the collatz conjecture only applies to non-negative numbers" << endl;
        return false;
    }
    // Checks if overflow will occur
    else if (num % 2 != 0 && num > ((3 * num) + 1)){
        cout << "Error, input would cause overflow with 3x+1 operation" << endl;
        return false;
    }

    return true;
}