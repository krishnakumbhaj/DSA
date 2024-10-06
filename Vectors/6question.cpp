// find the doublet in the given array whose sum is equal to the given number

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> v = {1,3,2,4,3,4,1,6};
            int x;
            cout<<"Enter the sum of number you want to search: ";
            cin>>x;
            cout<<v.size()<<endl;
            for(int i = 0; i<v.size(); i++)
            {
                for(int j = i+1; j<v.size(); j++)
                {
                        if(v[i]+v[j] == x)
                        {
                            cout<<"("<<i<<","<<j<<")"<<endl;
                        //     break;
                        }
                        // else
                        // {
                        //     cout<<"The doublet is not found"<<endl;
                        //     break;
                        // }
                   
            }
            }

}