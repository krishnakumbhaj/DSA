#include <iostream>
#include <vector>
#include <algorithm> // Add this line to include the <algorithm> header
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(21);
    v.push_back(322);
    v.push_back(233);
    v.push_back(4);
    v.push_back(235);
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    // "at" use to change the value of the vector
    v.at(0) = 11;

    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    // "sort" function is used to sort the vector
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }                                           
    cout << endl;
    
}