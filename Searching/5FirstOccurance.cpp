#include <iostream>
using namespace std;
int main(){
            int arr[20] = {1,2,2,2,3,3,3,3,5,6,7,9,9,9,15,18,21,21,21,24};
            int n ;
            cout << "Enter the number you want to search: ";
            cin >> n;
            int start = 0, end = 19, mid;
            while(start <= end)
            {      
                        mid = (start+end)/2;
                        if(arr[mid] == n){
                                    if(arr[mid-1] == n){
                                                end = mid-1;
                                    }
                                    else{
                                                cout << "The First Occurance of x is : " << mid;
                                                return 0;
                                    }
                        }
                        else if(arr[mid] < n){
                                    start = mid+1;
                        }
                        else{
                                    end = mid-1;                    
                        }
                   
            }
} 