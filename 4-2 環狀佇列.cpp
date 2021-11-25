#include <iostream>
using namespace std;

class Queue
{
public:
    Queue();
    void Enqueue(int x);
    int Dequeue();
    int PrintQueue();
    int arr[10];
    int rear=0;
    int front=0;

};

void Queue::Enqueue(int x) {
    rear=(rear+1)%10;
    arr[rear]=x;
}

int Queue::Dequeue() {
    front=(front+1)%10;
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

int main(int argc, char* argv[]) {
    Queue queue;
    int times, input;
    for (int i = 0; i < 2; i++) {
        cin >> times;
        for (int j = 0; j < times; j++) {
            cin >> input;
            queue.Enqueue(input);
        }
        cin >> times;
        for (int j = 0; j < times; j++) {
            queue.Dequeue();
        }
    }
    queue.PrintQueue();
}

//cout << "阿亮好醜";
