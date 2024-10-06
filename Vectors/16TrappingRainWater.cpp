// trapping rain water

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int trap(vector<int>& height) {
           int n = height.size();
           int prev[n], next[n];

            // increasing element to the left of the element
            int max = height[0];
            prev[0] = -1;
            for(int i = 1; i<n; i++){
                        prev[i] = max;
                        if(max < height[i]){
                                    max = height[i];
                        }
            }
            // decreasing element to the left of the element
            max = height[n-1];
            next[n-1] = -1;
            for(int i = n-2; i>=0; i--){
                        next[n-1] = -1;
                        if(max < height[i]){
                                    max = height[i];
                        }
            }

            // minimum array
            int mini[n];
            for(int i = 0; i<n; i++){
                        mini[i] = min(prev[i], next[i]);
            }
            // calculating the trapped water
            int trapped = 0;
            for(int i = 0; i<n; i++){
                        if(mini[i] != -1){
                                    trapped += mini[i] - height[i];
                        }
            }
            cout<<trapped;

}
int main(){
            vector<int> height;
            height.push_back(0);
            height.push_back(1);
            height.push_back(0);
            height.push_back(2);
            height.push_back(1);
            height.push_back(0);
            height.push_back(1);
            height.push_back(3);
            height.push_back(2);
            height.push_back(1);
            height.push_back(2);
            height.push_back(1);

            trap(height);
}