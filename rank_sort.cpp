#include <iostream>

using namespace std;

void RankSort(int arr[], int m) {
    int pos[m];
    int srtd[m];

    for (int i = 0; i < m; i++) pos[i] = 0;

    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < m; j++) {
            if (arr[j] <= arr[i]) {
                pos[i]++;
            } else {
                pos[j]++;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        srtd[pos[i]] = arr[i];
    }

    for (int i = 0; i < m; i++) {
        arr[i] = srtd[i];
    }
}

void printArray(int arr[], int m) {
    for (int i = 0; i < m; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int data[] = {64, 34, 25, 12, 22, 11, 90, 43};
    int n = sizeof(data) / sizeof(data[0]);

    RankSort(data, n);
    printArray(data, n);

    return 0;
}