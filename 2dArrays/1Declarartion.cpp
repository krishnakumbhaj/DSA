
#include <iostream>
using namespace std;
int main(){
           
            int n,m;
            cin>>n>>m;
            int crr[][3] = {{1,2,3},{4,5,6},{7,8,9}}; // correct
            int brr[3][3] = {1,2,3,4,5,6,7,8,9}; // correct
            // int drr[3][] = {1,2,3,4,5,6,7,8,9}; // incorrect
            int arr[n][m];
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    cin>>arr[i][j];
                }
                cout<<endl;
            }
}