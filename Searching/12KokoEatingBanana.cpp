// leetcode 875
#include <iostream>
#include <vector>
using namespace std;

bool ischeck(int mid, vector<int>& piles, int h) {
            int count = 0;
            int n = piles.size();
            for (int i = 0; i < n; i++) {
                        if (count > h) return false;
                        if (mid >= piles[i]) count++;
                        else if (piles[i] % mid == 0) count += piles[i] / mid;
                        else count += piles[i] / mid + 1;
            }
            if (count > h) return false;
            else return true;
}

int minEatingSpeed(vector<int>& piles, int h) {
            int n = piles.size();
            int lo = 1;
            int hi = piles[0];
            int ans = 0;
            for (int i = 0; i < n; i++) {
                        if (hi <= piles[i]) hi = piles[i];
            }
            while (lo <= hi) {
                        int mid = (lo + hi) / 2;
                        if (ischeck(mid, piles, h)) {
                                    hi = mid - 1;
                                    ans = mid;
                        } else {
                                    lo = mid + 1;
                        }
            }
            return ans;
}

int main() {
            vector<int> piles = {3, 6, 7, 11};
            int h = 8;
            cout << "Minimum eating speed: " << minEatingSpeed(piles, h) << endl;

            piles = {30, 11, 23, 4, 20};
            h = 5;
            cout << "Minimum eating speed: " << minEatingSpeed(piles, h) << endl;

            piles = {30, 11, 23, 4, 20};
            h = 6;
            cout << "Minimum eating speed: " << minEatingSpeed(piles, h) << endl;

            return 0;
}