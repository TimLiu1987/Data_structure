#include <iostream>
using namespace std;

class BinTree
{
public:
    BinTree();
    void BuildTree(int data[], int n);
    void Print();
    int arr[100]={};
    int tail;

};

BinTree::BinTree() {

}

void BinTree::BuildTree(int *data, int n) {
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            arr[0]=data[i];
        }
        else
        {
            int tmp=0;
            while(true)
            {
                if(data[i]>arr[tmp])
                {
                    tmp = tmp*2+2;
                }
                else
                {
                    tmp = tmp*2+1;
                }

                if(arr[tmp]==0)
                {
                    arr[tmp] = data[i];
                    break;
                }
            }
        }
    }

    for(int j=99;j>=0;j--)
    {
        if(arr[j]!=0)
        {
            tail = j;
            break;
        }
    }

}

void BinTree::Print() {
    for(int i=0;i<=tail;i++)
    {
        cout << arr[i] << " ";
    }
}

int main(int argc, char *argv[])
{
    BinTree tree1;
    int n;
    cin >> n;
    int* data=new int[n];
    for (int i = 0; i < n; i++) cin >> data[i];
    tree1.BuildTree(data, n);
    tree1.Print();
}
