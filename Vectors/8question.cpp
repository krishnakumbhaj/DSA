// reverse the array without using another array.

#include <iostream>
#include <vector>
using namespace std;
int swap(int a , int b)
{
    int temp = a;
    a = b;
    b = temp;
    return 0;
}

int main()
{
            vector<int> v;
            int n;
            
            cout << "Enter the number of elements of array: ";
            cin >> n;
            for(int i=0; i<n; i++)
            {
                int x;
                cin >> x;
                v.push_back(x);
            }
            cout << "Original Array: ";
            for(int i=0; i<n; i++)
            {
                cout << v[i] << " ";
            }

            cout <<endl<< "Reverse Array: "<<endl;
            
           int i = 0;
           int j = v.size()-1;

            while(i<=j)
            {
                       int temp = v[i];
                        v[i] = v[j];
                        v[j] = temp;
                        i++;
                        j--;
                        if(i==j)
                        {
                            break;
                        }
            }
            for(int i=0; i<n; i++)
            {
                cout << v[i] << " ";
            }

            
            
}
