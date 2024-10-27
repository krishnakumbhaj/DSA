#include <iostream>
using namespace std;

int main() {
    int arr[] = {6,8,20,28,33,1,3,4};
    int n = 8;
    int l = 0, h = n, mid, pivot, target = 20;
    while(l<=h){
          if(arr[mid] < arr[mid+1] && arr[mid] < arr[mid-1]){
              pivot = mid;
              break;
          }
          else if(arr[mid] > arr[mid -1] && arr[mid] > arr[mid +1]){
            pivot = mid +1;
            break;
          }
          else if(arr[mid] > arr[h]) l = mid +1;
          else h = mid -1; 
    }
    if(target >= arr[0] && target <= arr[pivot -1]){
        l = 0;
        h = pivot -1;
        while(l <=h){
            mid = l + (h-l)/2;

            if(arr[mid] == target) return mid;
            else if(arr[mid] > target)  h = mid -1;
            else l = mid +1;
        }
    }
    else {
        l = pivot;
        h = n;
        while(l <=h){
            mid = l + (h-l)/2;

            if(arr[mid] == target) return mid;
            else if(arr[mid] > target)  h = mid -1;
            else l = mid +1;
        }
    }
    return 0;
}