#ifndef QUEUE_HPP
#define QUEUE_HPP
class Queue
{
public:
    Queue() {}
    virtual void enqueue(int data) = 0;
    virtual int dequeue() = 0;
    virtual int front() = 0;
    virtual int back() = 0;
    virtual bool is_Empty() = 0;
};

#endif