#include <iostream>

using namespace std;

void SelectionSort(int arr[],int m)
{
    int i,pos,j;

    for(i=0;i<m-1;i++)
    {
    pos=i;
    for(j=i+1;j<m;j++)
        if(arr[j]<arr[pos])pos=j;

    swap(arr[i],arr[pos]);
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

SelectionSort(data,n);
printArray(data,n);
}
