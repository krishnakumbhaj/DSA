// // sort 0s and 1s in an array
// #include <iostream>
// #include <vector>
// using namespace std;
// int sort(vector<int> &v)
// {
//      for(int i = 0; i < v.size(); i++)
//      {
//             if(v[i]==1)
//             {
//                for(int j = i+1; j < v.size(); j++)
//                {
//                   if(v[j]==0)
//                   {
//                         int temp = v[i];
//                         v[i] = v[j];
//                         v[j] = temp;
//                         break;
//                   }
//                }
//             }
//      }
// }
// int display(vector<int> &v)
// {
//      for(int i = 0; i < v.size(); i++)
//      {
//             cout << v[i] << " ";
//      }
//      cout << endl;
// }
// int main()
// {
//             vector<int> v;
//             v.push_back(0);
//             v.push_back(1);
//             v.push_back(1);
//             v.push_back(0);
//             v.push_back(1);
//             v.push_back(1);
//             v.push_back(0);
//             v.push_back(0);
//             v.push_back(1);
//             v.push_back(0);
//             sort(v);
//             display(v);
// }








// Second Method

// #include <iostream>
// #include <vector>
// using namespace std;
// void sort01(vector<int> &v)
// {
//             int n = v.size();
//            int num0 = 0;
//            int num1 = 0;
//             for(int i = 0; i < v.size(); i++)
//             {
//                    if(v[i]==0)
//                    {
//                            num0++;
//                    }
//                    else
//                    {
//                            num1++;
//                    }
//             }
//             for(int i = 0; i < n ; i++)
//             {
//                    if(i < num0)
//                    {
//                            v[i] = 0;
//                    }
//                    else
//                    {
//                            v[i] = 1;
//                    }
//             }
//             {
                  
//             }
//             for(int i = 0; i < n; i++)
//             {
//                     cout << v[i] << " ";
//             }
// }
// int main()
// {
//             vector<int> v;
//             v.push_back(0);
//             v.push_back(1);
//             v.push_back(1);
//             v.push_back(0);
//             v.push_back(1);
//             v.push_back(1);
//             v.push_back(0);
//             v.push_back(0);
//             v.push_back(1);
//             v.push_back(0);
//             sort01(v);
           
// }








// Third Methord

#include <iostream>
#include <vector>
using namespace std;
int sort(vector<int> &v)
{
            int n = v.size();
            int i = 0;
            int j = n-1;
            while(i < j)
            {
                        if(v[i]==0) i++;
                        if(v[j]==1) j--;
                        if(i>j) break;
                        if(v[i]==1 && v[j]==0)
                        {
                                    v[i] = 0;
                                    v[j] = 1;
                                    i++;
                                    j--;
                        }
                       
            }
           
}
void display(vector<int> &v)
{
            for(int i = 0; i < v.size(); i++)
            {
                        cout << v[i] << " ";
            }
}
int main()
{
            vector<int> v;
            v.push_back(0);
            v.push_back(1);
            v.push_back(1);
            v.push_back(0);
            v.push_back(1);
            v.push_back(1);
            v.push_back(0);
            v.push_back(0);
            v.push_back(1);
            v.push_back(0);
            sort(v);
            display(v);
}

