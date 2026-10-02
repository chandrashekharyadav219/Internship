#include <iostream>
using namespace std;

// Bubble Sort: repeatedly swap adjacent elements if out of order.
// Returns the total number of swaps performed.
int bubbleSort(int arr[], int n) {
    int swaps = 0;
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps++;
                swapped = true;
            }
        }
        if (!swapped) break;   // already sorted -> stop early
    }
    return swaps;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int swaps = bubbleSort(arr, n);

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\nTotal swaps : " << swaps << endl;
    return 0;
}
