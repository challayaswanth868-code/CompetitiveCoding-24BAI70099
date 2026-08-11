#include <iostream>
#include <vector>
using namespace std;

int bruteForce(vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target)
            return i;
    }

    return -1;
}

int main() {
    int n, target;

    cout << "Enter length of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter rotated sorted array elements:\n";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target value: ";
    cin >> target;

    int result = bruteForce(arr, target);

    if (result != -1)
        cout << "Target found at index: " << result << endl;
    else
        cout << "Target not found" << endl;

    return 0;
}
