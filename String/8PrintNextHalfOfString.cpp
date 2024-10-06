#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
            string s;
            cout<<"Enter the string: ";
            getline(cin,s);
           cout<<s.substr(s.length()/2);
            // cout<<s<<endl;
}
