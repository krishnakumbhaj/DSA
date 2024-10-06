#include <iostream>
#include <vector>
using namespace std;
int main()
{           int n;
            cout << "Enter the length of pascel triangle: ";
            cin >> n;
            vector< vector<int>> v;
            // making it 2d vector
            for(int i=0; i<n; i++)
            {
                 vector<int> a(i+1);
                 v.push_back(a);
            }

            // filling the 2d vector
            
            for(int i=0; i<n; i++)
            {
              for(int j=0; j<=i; j++)
              {
                if(j==0 || j==i)
                {
                  v[i][j] = 1;
                }
                else
                {
                  v[i][j] = v[i-1][j] + v[i-1][j-1];
                }
              }
            }
            // printing the 2d vector

            for(int i=0; i<n; i++)
            {
                        for(int j=0; j<=i; j++)
                        {
                                    cout << v[i][j] << " ";
                        }
                        cout << endl;
            }







}