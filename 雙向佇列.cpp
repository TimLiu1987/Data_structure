#include <iostream>
using namespace std;

class Queue
{
public:
    Queue();
    void Enqueue(int x);
    int Dequeue();
    int PrintQueue();
    void BackEnqueue(int x);
    int BackDequeue();
    int arr[10];
    int rear=0;
    int front=0;

};

void Queue::Enqueue(int x) {
    arr[++rear]=x;
    if(rear>9)
    {
        rear=0;
    }
}

int Queue::Dequeue() {
    front++;
    if(front>9)
    {
        front=0;
    }
}

int Queue::PrintQueue() {
    for(int i=front;i!=rear;)
    {
        i=(i+1)%10;
        cout << arr[i] << " ";
    }
    cout << "rear:" << rear << " front:" << front;
}

Queue::Queue() {

}

void Queue::BackEnqueue(int x) {
    if(front<0)
    {
        front=10-1; //陣列的最後一個位置
    }
    arr[front]=x;
    front--;
}

int Queue::BackDequeue() {
    if(rear<0)
    {
        rear=10-1;
    }
    rear--;
}

int main(int argc, char* argv[]) {
    Queue queue;
    int times, input;
    cin >> times;
    for (int j = 0; j < times; j++) {
        cin >> input;
        queue.Enqueue(input);
    }
    cin >> times;
    for (int j = 0; j < times; j++) {
        queue.Dequeue();
    }
    cin >> times;
    for (int j = 0; j < times; j++) {
        cin >> input;
        queue.BackEnqueue(input);
    }
    cin >> times;
    for (int j = 0; j < times; j++) {
        queue.BackDequeue();
    }
    queue.PrintQueue();
}
