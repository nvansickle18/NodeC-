#include "Node.hpp"
class LinkedList
{
public:
    LinkedList();
    void add(std::string string);
    std::string remove();
    ~LinkedList();
    int getSize();
private:
    int size;
    Node* top;
    
    
};
