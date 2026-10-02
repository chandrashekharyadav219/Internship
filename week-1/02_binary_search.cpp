#include <iostream>
using namespace std;

// Binary Search: array MUST be sorted (ascending).
// Repeatedly halve the search range.
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;   // avoids overflow
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;                  // search right half
        else
            high = mid - 1;                 // search left half
    }
    return -1;
}

int main() {
    int n, key;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100];
    cout << "Enter " << n << " SORTED elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Enter element to search: ";
    cin >> key;

    int idx = binarySearch(arr, n, key);
    if (idx != -1)
        cout << "\nElement " << key << " found at index " << idx << endl;
    else
        cout << "\nElement " << key << " not found." << endl;
    return 0;
}
