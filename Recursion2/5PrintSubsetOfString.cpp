#include<iostream>
using namespace std;
void substring(string s, string ans){
            if(s == ""){
                        cout<<ans<<endl;
                        return;
            }
            char ch = s[0];
            substring(s.substr(1),ans + ch);
            substring(s.substr(1),ans);
}
int main(){
            string s = "abc";
            substring(s,"");
}