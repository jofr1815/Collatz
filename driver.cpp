#include <iostream>
#include <string>
#include "CollatzTree.hpp"

using namespace std;

int main()
{
    // Create and initialize variables
    CollatzTree Tree;
    int input;

    // Gather user input number
    cout << "Enter a number: " << endl;
    cin >> input;
    
    // Check for valid input, and return one step of the collatz conjecture
    if (Tree.validInput(input)){
        int response = Tree.basicCollatz(input);
        cout << response << endl;
        Tree.traverseToOne(input);
    }
}