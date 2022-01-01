#include <iostream>
using namespace std;

class Queue
{
public:
    int arr[10]={};
    int rear=0;
    int front=0;

    Queue(){};
    void Enqueue(int x)
    {
        rear++;
        if(rear>9)
        {
            rear=0;
        }

        arr[rear]=x;

    };

    int Dequeue()
    {
        front++;
        if(front>9)
        {
            front=0;
        }
        return front;

    };

    void PrintQueue()
    {
        for(int i=front+1;i!=rear;)
        {
            i=(i+1)%10;
            cout << arr[i] << " ";
        }
        cout << "rear:" << rear << " " << "front:" << front;
    };
};

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
