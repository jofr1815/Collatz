#include <string>

struct Node
{
    int key = 1;
    Node* next = nullptr;
    Node* prev = nullptr;
    bool headNode;
};


class CollatzTree{
    private:

    public:
    CollatzTree();
    ~CollatzTree();
    void traverseToOne(int num);
    int basicCollatz(int num);
    bool validInput(int num);
};