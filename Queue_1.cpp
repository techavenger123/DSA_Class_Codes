//modulo is the best operator for reseting.
#include <iostream>
using namespace std;

class Queue
{
    int front, rear, size;
    int *arr;
public:
    Queue(int s)
    {
        front = -1;
        rear = -1;
        size = s;
        arr = new int[size];  
    }
    void enqueue(int val)
    {
        if (rear == size - 1)
        {
            cout << "Queue is full\n\n";
            return;  
        }
        arr[++rear] = val;
        cout << "enqueued element : " << val << "\n";
        if (front == -1)
        {
            front++;
        }
    }

    bool isempty()
    {
        return (front > rear || front == -1);
    }

    void deque()
    {
        if (isempty())
        {
            cout << "Queue is empty...\n\n";
            return;  
        }
        cout << "dequeued element : " << arr[front] << "\n";
        front++;
    }

    void peek()
    {
        if (isempty())
        {
            cout << "The queue is empty...\n\n";
            return;  
        }
        cout << "The first element is : " << arr[front] << "\n";
    }
};

int main() {
    Queue q(5);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(7);
    q.enqueue(10);
    q.peek();
    cout<<2%5;
    return 0;
}
