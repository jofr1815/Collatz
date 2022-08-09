#include <string>

struct Node
{
    int num;
    Node* next;
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