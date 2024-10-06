#include <iostream>
using namespace std;
int printArr(int arr[], int n, int idx){
            if(idx == n) return 0;
           cout<<arr[idx]<<" ";
           printArr(arr,n,idx+1);
}
int main(){
            int arr[] = {1,2,3,4,5,3,5,6,54,2,3,4,5,6,7,8,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
            int n = sizeof(arr)/sizeof(arr[0]);
            printArr(arr,n,0);
}