#include <iostream>
#include <vector>
using namespace std;

int lowerBoundApproach(vector<int>& arr, int target) {
    int n = arr.size();

    if (n == 0)
        return 0;

    int left = 0;
    int right = n;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid;
    }

    return left;
}

int main() {
    int n, target;

    cout << "Enter length of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter sorted array elements:\n";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target value: ";
    cin >> target;

    int position = lowerBoundApproach(arr, target);

    cout << "Output: " << position << endl;

    return 0;
}
