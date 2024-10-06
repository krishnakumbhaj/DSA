#include <iostream>
using namespace std;
int main()
{
            int m;
            cout << "Enter the number of rows of the matrix: ";
            cin >> m;
            int n;
            cout << "Enter the number of columns of the matrix: ";
            cin >> n;
            int arr[m][n];
            cout << "Enter the elements of the matrix: ";
            cout<<endl;
            for (int i = 0; i < m; i++)
            {
            for (int j = 0; j < n; j++)
            {
                        cin >> arr[i][j];
            }
            }
            cout<<endl;
            int minr = 0, minc = 0, maxr = m-1, maxc = n-1, count = 0;
            int total = m*n;
            for(int i = 0; i < total; i++)
            {
                        // --->
                        for(int j = minc; j <= maxc; j++)
                        {
                                    cout << arr[minr][j] << " ";
                                    count++;
                        }
                                    minr++;
                        // |
                       //  V
                       for(int i = minr+1; i <= maxr; i++)
                       {
                                   cout << arr[i][maxc] << " ";
                                    count++;
                       }
                                   maxc--;
                       // <--
                       for(int j = maxc; j>=minc; j--)
                       {
                                  cout<< arr[maxr][i]<<" ";
                                      count++;
                       }  
                                        maxr--;
                       //  ^
                      //   |
                      for(int i = maxr; i>=minr; i--)
                      {
                                  cout<< arr[i][minc]<<" ";
                                      count++;
                      }
                                  minc++;
            }       
}