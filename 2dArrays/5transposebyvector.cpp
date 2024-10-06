#include <iostream>
#include <vector>
using namespace std;
void transpose(vector<vector<int>> arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
int transformthismatrix(vector<vector<int>> arr){
            for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr[i].size();j++){
                        int temp = arr[i][j];
                        arr[i][j] = arr[j][i];
                        arr[j][i] = temp;
            }
            cout<<endl;
            }
            // print
            for(int i=0;i<arr.size();i++){
                for(int j=0;j<arr[i].size();j++){
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
            
}
int main(){
           
           vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
//            transpose(arr);
           transformthismatrix(arr);
}