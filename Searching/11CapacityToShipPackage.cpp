//  leetcode 1011

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool check(int mid, vector<int>& weights, int days) {
    int n = weights.size();
    int m = mid; // Initialize daily capacity to mid
    int count = 1; // Start with day 1

    for (int i = 0; i < n; i++) {
        if (m >= weights[i]) {
            m -= weights[i];
        } else {
            count++; // Increment day count
            m = mid - weights[i]; // Start a new day with capacity `mid` minus the current weight
            if (count > days) return false; // Early exit if days exceed allowed limit
        }
    }
    return count <= days;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int hi = 0, lo = INT_MIN;
        for(int i = 0; i < n; i++){
            if(lo < weights[i]) lo = weights[i];
             hi = hi + weights[i];
        }
        int MinCapacity = hi;

        while(lo <= hi){
            int mid = (lo + hi)/2;
            if(check(mid,weights,days)){
                MinCapacity = mid;
                hi = mid -1;
            }
            else lo = mid + 1;

        }

        return MinCapacity;
    }
int main() {
 
         vector<int> weights = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
         int days = 5;
         cout<< "Minimum capacity to ship within " << days << " days: " <<shipWithinDays(weights, days) << endl;
            return 0;
}