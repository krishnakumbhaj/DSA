#include <iostream>
#include <vector>
using namespace std;

int main()
{
            vector<int> v1;
            int n;
            
            cout << "Enter the number of elements of array: ";
            cin >> n;
            
            for (int i = 0; i < n; i++)
            {
                        int x;
                        cin >> x;
                        v1.push_back(x);
            }
            
            vector<int> v2;
            
            for (int i = n - 1; i >= 0; i--)
            {
                        v2.push_back(v1[i]);
            }
            
            cout << "Original Array: ";
            
            for (int i = 0; i < n; i++)
            {
                        cout << v1[i] << " ";
            }
            
            cout << "Reverse Array: ";
            
            for (int i = 0; i < n; i++)
            {
                        cout << v2[i] << " ";
            }
            
            return 0;
}