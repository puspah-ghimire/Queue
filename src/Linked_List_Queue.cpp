#include "Linked_List_Queue.hpp"
#include <iostream>
using namespace std;

bool Linked_List_Queue ::is_Empty()
{
    return (list.isEmpty()); // If linked list is empty, Queue is empty.
}

void Linked_List_Queue ::enqueue(int data)
{
    list.addToTail(data);
}

int Linked_List_Queue ::dequeue()
{
    if (is_Empty())
    {
        cout << "Queue Underflow!" << endl;
    }
    else
    {
        return (list.removeFromHead());
    }
}

int Linked_List_Queue ::front()
{
    if (is_Empty())
    {
        cout << "Queue is empty." << endl;
    }
    else
    {
        return (list.HEAD->info);
    }
}

int Linked_List_Queue ::back()
{
    if (is_Empty())
    {
        cout << "Queue is empty." << endl;
    }
    else
    {
        return (list.TAIL->info);
    }
}

void Linked_List_Queue ::display()
{
    if (is_Empty())
    {
        cout << "Queue is empty." << endl;
    }
    else
    {
        list.traverse();
    }
}