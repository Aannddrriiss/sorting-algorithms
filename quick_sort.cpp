#include <iostream>

using namespace std;

void quick_sort(int arr[], int low, int high)
{
    if (low >= high) return;

    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (i < j && arr[j] >= pivot)
            j--;

        if (i < j)
        {
            arr[i] = arr[j];
            i++;

            while (i < j && arr[i] <= pivot)
                i++;

            if (i < j)
            {
                arr[j] = arr[i];
                j--;
            }
        }
    }

    arr[i] = pivot;

    quick_sort(arr, low, i - 1);
    quick_sort(arr, i + 1, high);
}

void printArray(int arr[], int m)
{
    for (int i = 0; i < m; i++) cout << arr[i] << ' ';
}

int main()
{
    int data[] = {64, 34, 25, 12, 22, 11, 90, 43};
    int n = sizeof(data) / sizeof(data[0]);

     quick_sort(data, 0, n - 1);

     printArray(data, n);

    return 0;
}