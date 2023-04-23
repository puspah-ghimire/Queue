#ifndef LINKED_LIST_QUEUE_HPP
#define LINKED_LIST_QUEUE_HPP
#include "Queue.hpp"
#include "Linked_List.hpp"

class Linked_List_Queue : public Queue
{
private:
    Linked_List list;

public:
    Linked_List_Queue(){};
    ~Linked_List_Queue(){};

    void enqueue(int data);
    int dequeue();
    int front();
    int back();
    bool is_Empty();
    void display();
};

#endif