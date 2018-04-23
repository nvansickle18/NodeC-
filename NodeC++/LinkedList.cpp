#include "LinkedList.hpp"
#include "Node.hpp"



LinkedList::LinkedList(){
    
}

void LinkedList::add(std::string string){
    
    Node* newTop = new Node(string,top);
    top = newTop;
    size++;
    
}

std::string LinkedList::remove(){
    if(size == 0){
        return "ERROR: size is 0";
    }
    std::string data = (*top).get_Data();
    top = (*top).get_Node();
    size--;
    return data;
    
}

LinkedList::~LinkedList(){
    
    delete top;
    
}


int LinkedList::getSize(){
    
    return size;
    
}
