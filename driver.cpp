#include <iostream>
#include <string>
#include "CollatzTree.hpp"

using namespace std;

int main()
{
    CollatzTree Tree;
    int input;

    cout << "Enter a number: " << endl;
    cin >> input;
    
    if (Tree.validInput(input)){
        int response = Tree.basicCollatz(input);
        cout << response << endl;
    }
}