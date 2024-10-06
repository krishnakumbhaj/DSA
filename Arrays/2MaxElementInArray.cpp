#include <iostream>
using namespace std;

int max(int x[], int n) {
            int max = x[0];
            for(int i = 1; i < n; i++) {
                        if(x[i] > max) {
                                    max = x[i];
                        }
            }
            
            return max;
}

int main() {
            cout << "Enter the number of elements in the array: ";
            int n;
            cin >> n;
            int x[n];
            for(int i = 0; i < n; i++) {
                        cout << "Enter the number " << i+1 << ": ";
                        cin >> x[i];
            }
           int y = max(x, n);
            cout << "The maximum element in the array is: " << y << endl;
            return 0;
}