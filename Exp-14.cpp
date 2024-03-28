#include <iostream>
using namespace std;

int Floor(int arr[], int size, int key) {
    int left = 0, right = size - 1, floor = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
            return arr[mid];

        if (arr[mid] < key) {
            floor = arr[mid];
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return floor;
}

int Ceil(int arr[], int size, int key) {
    int left = 0, right = size - 1, ceil = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key)
            return arr[mid];

        if (arr[mid] > key) {
            ceil = arr[mid];
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return ceil;
}

int Peak(int arr[], int size) {
    int left = 0, right = size - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] > arr[mid + 1])
            return arr[mid];
        else if (arr[mid] < arr[mid + 1])
            left = mid + 1;
    }

    return arr[left];
}

int Minimum(int arr[], int size) {
    int left = 0, right = size - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] > arr[right])
            left = mid + 1;
        else
            right = mid;
    }

    return arr[left];
}

int main() {
    int arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 4;

    cout << "Floor of " << key << " is: " << Floor(arr, size, key) << endl;
    cout << "Ceiling of " << key << " is: " << Ceil(arr, size, key) << endl;
    cout << "Peak element in the array is: " << Peak(arr, size) << endl;
    cout << "Minimum element in the array is: " << Minimum(arr, size) << endl;

    return 0;
}
