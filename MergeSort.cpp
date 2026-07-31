#include <iostream>
using namespace std;

void Merge(int arr[], int low, int mid, int high) {
    int temp[100];
    int left = low;
    int right = mid + 1;
    int k = low;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp[k] = arr[left];
            left++;
        } else {
            temp[k] = arr[right];
            right++;
        }
        k++;
    }

    while (left <= mid) {
        temp[k] = arr[left];
        left++;
        k++;
    }

    while (right <= high) {
        temp[k] = arr[right];
        right++;
        k++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = temp[i];
    }
}

void MergeSort(int arr[], int low, int high) {
    if (low >= high)
        return;

    int mid = (low + high) / 2;

    MergeSort(arr, low, mid);
    MergeSort(arr, mid + 1, high);

    Merge(arr, low, mid, high);
}

int main() {
    int arr[] = {6,3,8,2,9,1,5,8};
    int n = sizeof(arr) / sizeof(arr[0]);

    MergeSort(arr, 0, n - 1);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
