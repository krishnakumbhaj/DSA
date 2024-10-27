// Q1. Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’ does not exist return -1.

#include <iostream>
#include <vector>
using namespace std;

int main() {
            vector<int> v = {1,2,3,3,4,4,4,5};
            int t = 4;
            int n = v.size();
            for(int i = n; i>=0; i--){
                        if(v[i] == t){ 
                                    cout<<i;
                                    break;
                        }
            }
           
}