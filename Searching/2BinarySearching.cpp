#include <iostream>
using namespace std;
int main()
{
            int arr[30] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                           11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
                           21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
            int n ;
            cout << "Enter the number you want to search: ";
            cin >> n;
            int start = 0, end = 29, mid;
            while(start<=end){
                        mid = (start+end)/2;
                        if(arr[mid] == n){
                                    cout << "Number found at index: " << mid;
                                    return 0;
                        }
                        else if(arr[mid] < n){
                                    start = mid+1;
                        }
                        else{
                                    end = mid-1;
                        }
            }
}