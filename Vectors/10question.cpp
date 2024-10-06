// rotate the array
// reverse the part of array

#include <iostream>
#include <vector>
using namespace std;
int reverse(vector<int>& v, int start, int end)
{
    while(start <= end){
                int temp = v[start];
                v[start] = v[end];
                v[end] = temp;
                start++;
                end--;
    }
    return 0;
}
int main()
{
            vector<int> v;
            int n;
            cout<<"Enter the number of elements of array: ";
            cin>>n;
            for(int i=0; i<n; i++)
            {
                int x;
                cin>>x;
                v.push_back(x);
            }
            cout<<"Original Array: [";
            for(int i=0; i<n; i++)
            {
                cout<<v[i]<<",";
            }
            cout<<"]"<<endl;
            cout<<endl;
            int k;
            cout<<"Enter the snumber of rotation: ";
            cin>>k;
            if(k>n)
            {
                k = k%n;
            }
            int x = n-k;
            reverse(v, 0, x-1);
            reverse(v, x, n-1);
            reverse(v, 0, n-1);   

           
//             while(start <= end){
//                         int temp = v[start];
//                         v[start] = v[end];
//                         v[end] = temp;
//                         start++;
//                         end--;
//             }
            cout<<"Reverse Array: [";
            for(int i=0; i<n; i++)
            {
                cout<<v[i]<<",";
            }
            cout<<"]"<<endl;
            return 0;
}