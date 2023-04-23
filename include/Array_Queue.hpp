#ifndef ARRAY_QUEUE_HPP
#define ARRAY_QUEUE_HPP
#define MAX_Queue_SIZE 10
#include "Queue.hpp"

class Array_Queue : public Queue
{
private:
    int A_Queue[MAX_Queue_SIZE];
    int frontIndex = -1;
    int rearIndex = -1;

public:
    void enqueue(int data);
    int dequeue();
    int front();
    int back();
    bool is_Empty();
    bool is_Full();
    void display();
};

#endif