#include <iostream>
#include <vector>
#include <algorithm> // Add this line to include the <algorithm> header
using namespace std;

// vecor use pass by value not pass by reference
int notchange(vector<int> v)
{
    v.at(0) = 11;
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " "; // 11 2 3 4 5 
    } 
    cout << endl;
}
int change(vector<int>& v)
{
    v.at(0) = 11;
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << " "; // 11 2 3 4 5 
    } 
    cout << endl;
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    notchange(v);
    
    for(int i=0; i<v.size(); i++)
    {
            cout << v[i] << " "; // 1 2 3 4 5
    }
    // that means the vector is not changed in the main function.
            cout << endl;
    change(v);



     for(int i=0; i<v.size(); i++)
    {
            cout << v[i] << " "; // 1 2 3 4 5
    }
     
}