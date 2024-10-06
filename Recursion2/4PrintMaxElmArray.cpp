#include<iostream>
#include<climits>
using namespace std;
void maxelem(int arr[], int n, int idx, int max){
            if(idx == n){
                        cout<<max;
                        return;
            }
            if(max<arr[idx]) max = arr[idx];
            maxelem(arr,n,idx+1,max);

}
int main(){
            int arr[] = {2,5,3,6,12,76,87,3,9,2};
            int n = sizeof(arr)/sizeof(arr[0]);
            maxelem(arr,n,0,INT_MIN);
}