#include <iostream>
using namespace std;

// Linear Search: check every element one by one.
// Returns index of key, or -1 if not found.
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int n, key;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[100];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Enter element to search: ";
    cin >> key;

    int idx = linearSearch(arr, n, key);
    if (idx != -1)
        cout << "\nElement " << key << " found at index " << idx
             << " (position " << idx + 1 << ")" << endl;
    else
        cout << "\nElement " << key << " not found in the array." << endl;
    return 0;
}
