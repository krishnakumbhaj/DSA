#include<iostream>
#include<vector>
using namespace std;
void subvector(int arr[],int n,int idx,vector<int> ans){
            if(idx == n){
               if(ans.size() == 3) {
               for(int i = 0; i<ans.size(); i++){
                           cout<<ans[i]<<" ";
               }
               cout<<endl;
               }
               return;
            } 
           if(ans.size()+n-idx<3) return;                                  
           subvector(arr,n,idx+1,ans);
            ans.push_back(arr[idx]);
           subvector(arr,n,idx+1,ans);

}
int main(){
            int arr[] = {1,2,3,4,5};
            int n = sizeof(arr)/sizeof(arr[0]);
            vector<int> v;
            subvector(arr,n,0,v);
}