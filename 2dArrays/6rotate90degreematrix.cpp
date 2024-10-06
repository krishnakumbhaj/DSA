#include <iostream>
#include <vector>
using namespace std;
void Rotate(vector<vector<int>> &v){
            // transpose
            for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v[i].size();j++){
                        int temp = v[i][j];
                        v[i][j] = v[j][i];
                        v[j][i] = temp;
            }
            cout<<endl;
            }
            int n = v.size();
            for(int k = 0; k<n;k++){
                int i = 0;
                int j = n-1;
                while(i<j){
                    int temp = v[k][i];
                    v[k][i] = v[k][j];
                    v[k][j] = temp;
                    i++;
                    j--;
                }
            }
            // print
            for(int i=0;i<v.size();i++){
                for(int j=0;j<v[i].size();j++){
                    cout<<v[i][j]<<" ";
                }
                cout<<endl;
            }


           
}
int main(){
            vector<vector<int>> v = {{1,2,3},{4,5,6},{7,8,9}};

            Rotate(v);
}