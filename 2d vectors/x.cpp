#include <iostream>
#include <vector>
#include <algorithm> // Include this header for std::reverse

using namespace std;

int main() {
            int num[3] = {1, 2, 3};
            reverse(num, num + 3);

            // Print the reversed array to verify
            for(int i = 0; i < 3; ++i) {
                        cout << num[i] << " ";
            }
            cout << endl;

            return 0;
}