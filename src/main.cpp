#include "Array_Queue.hpp"
#include "Linked_List_Queue.hpp"
#include <iostream>
using namespace std;
int main()
{
    cout << "The following are the outputs of Queue implementation using Array:" << endl;
    Array_Queue aQueue;
    cout << (aQueue.is_Empty() ? "Queue is empty." : "Queue is not empty.") << endl;

    aQueue.enqueue(4);
    cout << "Enqueued: 4" << endl;
    aQueue.enqueue(5);
    cout << "Enqueued: 5" << endl;
    aQueue.enqueue(6);
    cout << "Enqueued: 6" << endl;
    aQueue.enqueue(7);
    cout << "Enqueued: 7" << endl;

    cout << "Dequeued: " << aQueue.dequeue() << endl;
    cout << "Front element is: " << aQueue.front() << endl;
    cout << "Rear element is: " << aQueue.back() << endl;
    aQueue.display();

    cout << "\nThe following are the outputs of Queue implementation using Linked List:" << endl;
    Linked_List_Queue Queue;
    cout << (Queue.is_Empty() ? "Queue is empty." : "Queue is not empty.") << endl;

    Queue.enqueue(0);
    cout << "Enqueued: 0" << endl;
    Queue.enqueue(1);
    cout << "Enqueued: 1" << endl;
    Queue.enqueue(2);
    cout << "Enqueued: 2" << endl;
    Queue.enqueue(3);
    cout << "Enqueued: 3" << endl;

    cout << "Dequeued: " << Queue.dequeue() << endl;
    cout << "Front element is: " << Queue.front() << endl;
    cout << "Rear element is: " << Queue.back() << endl;
    Queue.display();

    return 0;
}
