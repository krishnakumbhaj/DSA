// leetcode 2187
#include <iostream>
#include <vector>
using namespace std;

bool check(long long mid, vector<int>& time, int totalTrips) {
            int n = time.size();
            long long trips = 0;
            for (int i = 0; i < n; i++) {
                        trips += mid / time[i];
            }
            return trips >= (long long)totalTrips;
}

long long minimumTime(vector<int>& time, int totalTrips) {
            int n = time.size();
            int mx = 0;
            for (int i = 0; i < n; i++) {
                        if (mx <= time[i]) mx = time[i];
            }
            long long lo = 1;
            long long hi = (long long)mx * (long long)totalTrips;
            long long ans = -1;
            while (lo <= hi) {
                        long long mid = (lo + hi) / 2;
                        if (check(mid, time, totalTrips)) {
                                    ans = mid;
                                    hi = mid - 1;
                        } else {
                                    lo = mid + 1;
                        }
            }
            return ans;
}

int main() {
            vector<int> time = {1, 2, 3};
            int totalTrips = 5;
            cout << "Minimum time to complete " << totalTrips << " trips: " << minimumTime(time, totalTrips) << endl;
            return 0;
}