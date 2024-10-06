// color problem
// Dutch National Flag Problem
#include <iostream>
#include <vector>
using namespace std;
int main()
{
            vector<int> v;
            v.push_back(0);
            v.push_back(2);
            v.push_back(1);
            v.push_back(2);
            v.push_back(1);
            v.push_back(1);
            v.push_back(0);
            v.push_back(0);
            v.push_back(2);
            v.push_back(0);
            int n = v.size();
            int low = 0;
            int mid = 0;
            int high = n-1;
            while (mid <= high)
            {
                    if(v[mid] == 0)
                    {
                        int temp = v[low];
                        v[low] = v[mid];
                        v[mid] = temp;
                        low++;
                        mid++;
                    }
                    else if(v[mid] == 1)
                    {
                            mid++;
                    }
                    else
                    {
                            swap(v[mid], v[high]);
                            high--;
                    }
                   
            }
            for(int i = 0; i < n; i++)
            {
                    cout << v[i] << " ";
            }
            
}