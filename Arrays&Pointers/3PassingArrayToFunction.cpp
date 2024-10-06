#include <iostream>
using namespace std;
int displayp(int *p,int n){
        for(int i = 0; i < n; i++){    
                cout << p[i] << " ";    
        }
}
int displayarr(int arr[],int n){
      for(int i = 0; i < n; i++){    
                cout << arr[i] << " ";    
        }
}
int main(){
       int arr[] = {1,2,3,4,5};
       int n = 5;
            int *p = arr;
            cout << *p << endl; // 1
            displayarr(arr,n);
            displayp(p,n);
}