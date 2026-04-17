#include <iostream>

using namespace std;

void BubbleSort(int arr[],int m)
{
    bool sorted = false;
    int i,k=1;

    while(!sorted)
    {
    sorted = true;

    for(i=0;i<m-k;i++)
        {
        if(arr[i]>arr[i+1])
            {
            swap(arr[i],arr[i+1]);
            sorted = false;
            }
        }
    k++;
    }
}

void printArray(int arr[],int m)
{
for(int i=0;i<m;i++)cout<<arr[i]<<" ";
}

int main()
{
int n;

int data[] = {64, 34, 25, 12, 22, 11, 90, 43};
n = sizeof(data)/sizeof(data[0]);

BubbleSort(data,n);
printArray(data,n);
}
