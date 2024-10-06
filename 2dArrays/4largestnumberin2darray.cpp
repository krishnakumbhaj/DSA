#include <iostream>
using namespace std;
int maxelement(int arr[3][3],int n,int m){
    int max = arr[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }
    }
    return max;
}    
int sum(int arr[3][3],int n,int m){
    int sum = 0;
   for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum += arr[i][j];
        }
    }
    return sum;
}
int addtomatrix(int arr[3][3],int arr1[3][3],int arr3[3][3],int n,int m){
    int sum = 0;
    int arr2[3][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           arr3[i][j] = arr[i][j] + arr1[i][j];
        }
    }
            for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                        cout<<arr3[i][j]<<" ";
            }
            cout<<endl;
            }
}
int transpose(int arr[3][3],int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
           
            int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
            int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
            int arr3[3][3];

            // cout<<maxelement(arr,3,3);
            // cout<<sum(arr,3,3);
            addtomatrix(arr,arr1,arr3,3,3);
            // cout<<transpose(arr,3,3);

}