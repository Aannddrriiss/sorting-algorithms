#include <iostream>

using namespace std;

void InsertionSort(int arr[],int m)
{
    int i,j,temp;

    for(i=1; i<m; i++)
    {
        j=i;
        temp=arr[i];
        while(j>=1 && temp<arr[j-1] )
        {
            arr[j]=arr[j-1];
            j--;
        }

        arr[j]=temp;
    }
}

void printArray(int arr[],int m)
{
    for(int i=0; i<m; i++)cout<<arr[i]<<" ";
}

int main()
{
    int data[] = {64, 34, 25, 12, 22, 11, 90, 43};
    int n = sizeof(data)/sizeof(data[0]);

    InsertionSort(data,n);
    printArray(data,n);
}

