#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (key < arr[mid]) {
            end = mid - 1;
        }
        else if (key > arr[mid]) {
            start = mid + 1;
        }
        else return mid;
    }
    return -1;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    cout << BinarySearch(arr, n, key);
}
