#include <iostream>
#include <vector>
using namespace std;

int matrixScore(vector<vector<int>>& grid) {
            int row = grid.size();
            int col = grid[0].size();
  
            // Flip rows to ensure the first column is all 1s
            for (int i = 0; i < row; i++) {
                        if (grid[i][0] == 0) {
                                    for (int j = 0; j < col; j++) {
                                                grid[i][j] = 1 - grid[i][j];  // Flip the row
                                    }
                        }
            }

            // Flip columns to maximize the number of 1s
            for (int j = 0; j < col; j++) {
                        int noz = 0;
                        int noo = 0;
                        for (int i = 0; i < row; i++) {
                                    if (grid[i][j] == 0) noz++;
                                    else noo++;
                        }
                        // Flip column if there are more 0s than 1s
                        if (noz > noo) {
                                    for (int i = 0; i < row; i++) {
                                                grid[i][j] = 1 - grid[i][j];
                                    }
                        }
            }

            // Calculate the sum
            int sum = 0;
            for (int i = 0; i < row; i++) {
                        int x = 1;
                        for (int j = col - 1; j >= 0; j--) {
                                    sum += grid[i][j] * x;
                                    x *= 2;  // Update the place value (binary weight)
                        }
            }

            return sum;
}

int main() {
            vector<vector<int>> v = {{0, 0, 1, 1}, {1, 0, 1, 0}, {1, 1, 0, 0}};
            cout << "Maximum score: " << matrixScore(v) << endl;
            return 0;
}
