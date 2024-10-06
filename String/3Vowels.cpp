#include <iostream>
#include <string>
using namespace std;
int main(){
            string s;
            getline(cin,s);
            int count = 0;
            int i = 0;
           while(i < s.length()){
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                    count++;
                }
                i++;
            }
            cout<<count<<endl;
}