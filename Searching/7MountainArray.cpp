#include <iostream>
using namespace std;
int main(){
            int arr[] = {1,3,4,5,4,3,1};
            int l = 0 , h = 6, mid;
            while(l<=h){
                        mid = (l+h)/2;
                        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
                                    cout << "The peak element is: " << arr[mid];
                                    return 0;
                        }
                        else if(arr[mid] < arr[mid+1]){
                                    l = mid+1;
                        }
                        else{
                                    h = mid-1;
                        }

            }
            cout << "No peak element found";
}