#include<iostream>
#include<vector>
using namespace std;
void substring(string original,string ans){
            if(original.length() == 0){
                        cout<<ans<<endl;
                        return;
            }
            for(int i = 0; i < original.length(); i++){
                        char ch = original[i];
                        string left = original.substr(0,i);
                        string right = original.substr(i+1);
                        substring(left+right,ans+ch);
            }
}
int main()
{
            string str = "abc";
            substring(str,"");
}