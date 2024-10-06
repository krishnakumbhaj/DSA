#include <iostream>
#include <vector>
using namespace std;
int main()
{
            vector<int> v1;
            v1.push_back(1);
            v1.push_back(2);
            v1.push_back(3);

            vector<int> v2;
            v2.push_back(4);
            v2.push_back(5);
            v2.push_back(6);
            v2.push_back(7);
            v2.push_back(8);

            vector<int> v3;
            v3.push_back(9);
            v3.push_back(10);

            vector< vector<int>> v;  //{ {1,2,3}, {4,5,6,7,8}, {9,10} }
            v.push_back(v1);
            v.push_back(v2);
            v.push_back(v3);

            // printing the 2d vector
            cout <<v[0][0] << " " << v[1][1] << " " << v[2][2] << endl;

            // cout <<v[0][3]<< endl; // this will give error as v[0] has only 3 elements


// Declaring 2-

//       d vector with 3 rows and 4 columns
            vector< vector<int>> v4(3, vector<int>(4, 0)); // 3 rows and 4 columns with 0
            vector<int> v5(4,3); // 4 columns with initial value 3 {3,3,3,3}

}