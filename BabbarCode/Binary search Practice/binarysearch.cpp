#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {2, 3, 4, 10, 40};
    int target;

    cout << "Enter the target element to search for: ";
    cin >> target;

    int left = 0;
    int right = arr.size() - 1;
    int foundIndex = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            foundIndex = mid;
            break;
        }

        if (arr[mid] < target)
            left = mid + 1;
         else
            right = mid - 1;
    }

    if (foundIndex != -1)
        cout << "Element found at index " << foundIndex << endl;
    else
        cout << "Element not found in the array" << endl;

    return 0;
}
