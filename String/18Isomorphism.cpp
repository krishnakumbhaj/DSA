#include <iostream>
#include <vector>
#include <String>
#include <algorithm>
#include <unordered_set>
using namespace std;
int main()
{
    vector <string> v1 ={"egg", "adr"};
    vector <int> v2(150,1000);
    string s1 = v1[0];
    string s2 = v1[1];
    if(s1.size() != s2.size())
    {
        return false;
    }
    for(int i = 0; i < s1.size(); i++)
    {
        int f1 = int(s1[i]);
        int f2 = int(s2[i]);
        int sub = f1 - f2;
        if(v2[f1] == 1000 || v2[f1] == sub)
        {
            v2[f1] = sub;
        }
        else
        {
            cout<<"false";
            return false;
        }
       
    }
    for(int i = 0; i < v2.size(); i++)
    {
        v2[i] = 1000;
    }
    for(int i = 0; i < s1.size(); i++)
    {
        int f1 = int(s1[i]);
        int f2 = int(s2[i]);
        int sub = f1 - f2;
        if(v2[f2] == 1000 || v2[f2] == sub)
        {
            v2[f2] = sub;
        }
        else
        {
            cout<<"false";
            return false;
        }
       
    }




    cout<<"true";
    return true;
}
