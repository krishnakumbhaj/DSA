// find the next permutation of a given number
// step 1: find the pivot element
// step 2 : pivot+1 to end reverse
// step 3: swap pivot with the element just greater than pivot

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void operation(vector<int>& v){
            int n = v.size();
            int pivot = -1;
            // chcking th pivot element
            for(int i = n-2; i>=0; i--){
                        if(v[i] < v[i+1]){
                                    pivot = i;
                                    break;
                        }
            }
            // if array is already in descending order
            if(pivot == -1){
                        reverse(v.begin(), v.end());
                        return;
            }
            // finding the element just greater than pivot
            int j = -1;
            for(int i = pivot+1; i<n; i++){
                        if(v[i] > v[pivot]){
                                    j = i;
                                    break;
                        }
            }
            // swapping pivot with j
            swap(v[pivot], v[j]);
            // reversing the array from pivot+1 to end
            reverse(v.begin()+pivot+1, v.end());

}
int main(){
            vector<int> v;
            v.push_back(1);
            v.push_back(4);
            v.push_back(3);
            v.push_back(2);
            operation(v);
}