#include <iostream>
#include <vector>
using namespace std;
int main()
{
            vector<int> v = {1,3,2,4,3,4,1,6};
            int x ;
            cout<<"Enter the number you want to search: ";
            cin>>x;
            for(int i = v.size(); i >= 0; i--)
            {
                        if(v[i] == x)
                        {
                                    cout<<"The number is found at index: "<<i<<endl;
                                    break;
                        }
            }
}
// What is the output of this code?