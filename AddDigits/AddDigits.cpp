#include <iostream>
using namespace std;

class Solution {
public:
    int addDigits(int num) {
        if (num == 0) {
            return 0;
        }

        return 1 + (num - 1) % 9;
    }
};

int main() {
    Solution solution;

    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Digital root: " << solution.addDigits(num) << endl;

    return 0;
}