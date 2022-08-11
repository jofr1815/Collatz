
struct Node
{
    int key = 1;
    Node* next = nullptr;
    Node* prev = nullptr;
};


class CollatzTree{
    private:
    Node* root;
    public:
    CollatzTree();
    ~CollatzTree();
    void traverseToOne(int num);
    int basicCollatz(int num);
    bool validInput(int num);
    void addBranch(int num);
};