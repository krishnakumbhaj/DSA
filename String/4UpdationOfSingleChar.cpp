// string are mutable in c++ so we can update the string like s[0] = 'J' 
#include <iostream>
#include <string>
using namespace std;
int main(){
            string s;  
            getline(cin,s); // getline reads the whole line including spaces
            s[0]='J'; // updating the first character of the string
            cout<<s<<endl;
}