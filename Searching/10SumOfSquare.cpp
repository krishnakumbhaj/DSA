// leetcode 633

#include <iostream>
#include <math.h>
using namespace std;

bool isPerfectSquare(int n) {
            int root = sqrt(n);
            return root * root == n;
}

bool judgeSquareSum(int c) {
            int x = 0;
            int y = c;
            while (x <= y) {
                        if (isPerfectSquare(x) && isPerfectSquare(y)) {
                                    return true;
                        } else if (!isPerfectSquare(y)) {
                                    y = (int)sqrt(y) * (int)sqrt(y);
                                    x = c - y;
                        } else {
                                    x = (int)(sqrt(x) + 1) * (int)(sqrt(x) + 1);
                                    y = c - x;
                        }
            }
            return false;
}

int main() {
            int c;
            cout << "Enter a number: ";
            cin >> c;

            if (judgeSquareSum(c)) {
                        cout << c << " can be expressed as the sum of squares of two integers." << endl;
            } else {
                        cout << c << " cannot be expressed as the sum of squares of two integers." << endl;
            }

            return 0;
}