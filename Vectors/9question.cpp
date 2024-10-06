// reverse the part of array

#include <iostream>
#include <vector>
using namespace std;
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
            int start , end;
            cout<<"Enter the starting index: ";
            cin>>start;
            cout<<"Enter the ending index: ";
            cin>>end;
            while(start <= end){
                        int temp = v[start];
                        v[start] = v[end];
                        v[end] = temp;
                        start++;
                        end--;
            }
            cout<<"Reverse Array: [";
            for(int i=0; i<n; i++)
            {
                cout<<v[i]<<",";
            }
            cout<<"]"<<endl;
            return 0;
}