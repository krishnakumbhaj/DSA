#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
            string s;
            cout<<"Enter the string: ";
            getline(cin,s);
            reverse(s.begin() + 0,s.begin() + s.length()/2);
            cout<<s<<endl;
}