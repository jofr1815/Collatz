#pragma once

#include <string>

struct Node
{
    int num;
    Node* next;
};


class CollatzTree{
    private:
    Node* validInput();

    public:
    CollatzTree();
    ~CollatzTree();
    traverseToOne();

}