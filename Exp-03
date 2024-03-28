#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

// Function to display the elements of the array
void displayArray(int arr[], int size) {
    cout << "Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to insert an element at a user-defined location in the array
void insert(int arr[], int& size, int element, int position) {
    if (size >= MAX_SIZE) {
        cout << "Cannot insert more elements" << endl;
        return;
    }

    if (position < 0 || position > size) {
        cout << "Invalid position<< endl;
        return;
    }

    // Shift elements to make space for the new element
    for (int i = size - 1; i >= position; --i) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element
    arr[position] = element;
    size++;
}

// Function to delete an element from a user-defined location in the array
void delete(int arr[], int& size, int position) {
    if (size <= 0) {
        cout << "Array is empty. Cannot delete any element." << endl;
        return;
    }

    if (position < 0 || position >= size) {
        cout << "Invalid position. Please enter a position between 0 and " << size - 1 << "." << endl;
        return;
    }

    // Shift elements to remove the element at the specified position
    for (int i = position; i < size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    // Decrease the size of the array
    size--;
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;

    // Insert some initial elements into the array
    insert(arr, size, 10, 0);
    insert(arr, size, 20, 1);
    insert(arr, size, 30, 2);

    // Display the array
    displayArray(arr, size);

    // Insert an element at a user-defined position
    int element, position;
    cout << "Enter the element to insert: ";
    cin >> element;
    cout << "Enter the position to insert the element: ";
    cin >> position;
    insertElement(arr, size, element, position);
    displayArray(arr, size);

    // Delete an element from a user-defined position
    cout << "Enter the position of the element to delete: ";
    cin >> position;
    delete(arr, size, position);
    displayArray(arr, size);

    return 0;
}
