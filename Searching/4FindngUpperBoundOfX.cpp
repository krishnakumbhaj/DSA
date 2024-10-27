#include<iostream>
using namespace std;
int main(){
            int arr[9] = {1,2,4,5,9,15,18,21,24};
            int n ;
            cout << "Enter the number you want to search: ";
            cin >> n;
            int start = 0, end = 8, mid;
            if(n>arr[8]){
                        cout<<"no upper bound exist";
                        return 0;
            }
            while(start<=end){
                        mid = (start+end)/2;
                        if(arr[mid] == n){
                                    cout << "The Lower Bound of x is : " <<arr[mid+1];
                                    return 0;
                        }
                        else if(arr[mid] < n){
                                    start = mid+1;
                        }
                        else{
                                    end = mid-1;
                        }
            }
            cout<< "number is :"<<arr[start];
            
}