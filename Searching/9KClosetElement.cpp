// leetcode 658
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
            vector<int> findClosestElements(vector<int>& arr, int k, int x) {
                        int n = arr.size();
                        vector<int> v(k);

                        if (x < arr[0]) {
                                    for (int i = 0; i < k; i++) {
                                                v[i] = arr[i];
                                    }
                                    return v;
                        }

                        if (x > arr[n - 1]) {
                                    int i = n - 1;
                                    int j = k - 1;
                                    while (j >= 0) {
                                                v[j] = arr[i];
                                                j--;
                                                i--;
                                    }
                                    return v;
                        }

                        int lo = 0, hi = n - 1, mid = -1;
                        bool flag = false;
                        int t = 0;

                        while (lo <= hi) {
                                    mid = (lo + hi) / 2;
                                    if (arr[mid] == x) {
                                                flag = true;
                                                v[t++] = arr[mid];
                                                break;
                                    } else if (arr[mid] > x) {
                                                hi = mid - 1;
                                    } else {
                                                lo = mid + 1;
                                    }
                        }

                        int lb = hi, ub = lo;
                        if (flag) {
                                    lb = mid - 1;
                                    ub = mid + 1;
                        }

                        while (t < k && lb >= 0 && ub <= n - 1) {
                                    int d1 = abs(x - arr[lb]);
                                    int d2 = abs(x - arr[ub]);
                                    if (d1 <= d2) {
                                                v[t++] = arr[lb--];
                                    } else {
                                                v[t++] = arr[ub++];
                                    }
                        }

                        while (t < k && lb >= 0) {
                                    v[t++] = arr[lb--];
                        }

                        while (t < k && ub <= n - 1) {
                                    v[t++] = arr[ub++];
                        }

                        sort(v.begin(), v.end());
                        return v;
            }
};

int main() {
            // Example usage
            Solution sol;
            vector<int> arr = {1, 2, 3, 4, 5};
            int k = 4;
            int x = 3;
            vector<int> result = sol.findClosestElements(arr, k, x);

            for (int num : result) {
                        cout << num << " ";
            }
            cout << endl;

            return 0;
}