#include "Array_Queue.hpp"
#include <iostream>
using namespace std;

bool Array_Queue::is_Empty()
{
    if (frontIndex == -1 && rearIndex == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Array_Queue::is_Full()
{
    if (rearIndex == MAX_Queue_SIZE - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Array_Queue::enqueue(int data)
{
    if (is_Full())
    {
        cout << "Queue Overflow!" << endl;
    }
    else if (is_Empty())
    {
        frontIndex = rearIndex = 0;
        A_Queue[rearIndex] = data;
    }
    else
    {
        rearIndex++;
        A_Queue[rearIndex] = data;
    }
}

int Array_Queue::dequeue()
{
    if (is_Empty())
    {
        cout << "Queue Underflow!" << endl;
    }
    else if (frontIndex == rearIndex)
    {
        frontIndex = rearIndex = -1;
    }
    else
    {
        int temp = A_Queue[frontIndex];
        frontIndex++;
        return temp;
    }
}

int Array_Queue::front()
{
    if (is_Empty())
    {
        cout << "Queue is empty." << endl;
    }
    else
    {
        return (A_Queue[frontIndex]);
    }
}

int Array_Queue::back()
{
    if (is_Empty())
    {
        cout << "Queue is empty." << endl;
    }
    else
    {
        return (A_Queue[rearIndex]);
    }
}

void Array_Queue::display()
{
    if (is_Empty())
    {
        cout << "Queue is empty." << endl;
    }
    else
    {
        int i = frontIndex;
        cout << "The elements are: " << endl;
        for (i; i < rearIndex + 1; i++)
        {
            cout << A_Queue[i] << " ";
        }
        cout << endl;
    }
}
