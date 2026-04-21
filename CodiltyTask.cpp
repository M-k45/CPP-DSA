#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

int solution(vector<int> &A) {
    int left = 0;
    int right = A.size() - 1;

    int count = 0;
    long long last = LLONG_MIN;

    while (left <= right) {
        long long leftSide = llabs((long long)A[left]);
        long long rightSide = llabs((long long)A[right]);

        long long current;

        if (leftSide > rightSide) {
            current = leftSide;
            left++;
        } else {
            current = rightSide;
            right--;
        }

        if (current != last) {
            count++;
            last = current;
        }
    }

    return count;
}

// Test for absolute values
int main() {
    vector<int> A = {-6, -3, -1, 1, 3, 6};

    cout << solution(A) << endl;

    return 0;
}