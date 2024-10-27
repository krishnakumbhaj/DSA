#include <iostream>
#include <string>
#include <vector>
using namespace std;
void storesubstring(string ans,string s,vector<string> &v,bool flag)
{
            if(s.length() == 0){
            v.push_back(ans);
            return;
            }
    char ch = s[0];
    if(s.length() == 1){

            if(flag == true) storesubstring(ans+ch,s.substr(1),v,true);
            storesubstring(ans,s.substr(1),v,true);
            return;
    }
    char dh = s[1];
    if(ch == dh){
            if(flag == true) storesubstring(ans+ch,s.substr(1),v,false);
            storesubstring(ans,s.substr(1),v,false);
    }
    else{
            if(flag == true) storesubstring(ans+ch,s.substr(1),v,true);
            storesubstring(ans,s.substr(1),v,true);
    }

}
int main()
{
     string s = "aab";
     vector<string> v;
     storesubstring("",s,v,true);
     for(int i=0;i<v.size();i++)
     {
          cout<<v[i]<<endl;
     }

}