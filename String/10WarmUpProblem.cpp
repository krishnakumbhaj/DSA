// input a string and return the number of times the neighbouring characters are different from each other.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
            string s;
            cout<<"Enter the string: ";
            getline(cin,s);
            int count = 0;
            if(s.length() == 1){
                cout<<0<<endl;
                return 0;
            }
            if(s.length() == 2 && s[0] != s[1]){
                cout<<1<<endl;
                return 0;
            }
            for(int i = 0; i < s.length(); i++){
              
              if(i == 0){
                        if(s[i] != s[i+1]){
                            count++;
                        }
              }
              else if(i == s.length()-1){
                        if(s[i] != s[i-1]){
                            count++;
                        }
              }
              else{
                        if(s[i] != s[i+1] && s[i] != s[i-1]){
                            count++;
                        }
              }
            }
            cout<<count<<endl;
}