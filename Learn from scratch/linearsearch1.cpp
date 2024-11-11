#include<iostream>
using namespace std;

int linearsearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Return the index if the target is found
        }
    }
    return -1;  // Return -1 if the target is not found
}

int main() {
    int arr[5] = {1, 3, 5, 7, 8};
    int target = 3;
    
    int index = linearsearch(arr, 5, target);
    
    if (index != -1) {
        cout << "Target found at index: " << index << endl;
    } else {
        cout << "Target not found." << endl;
    }

    return 0;
}
