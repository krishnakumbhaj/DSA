#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
            string s;
            cout<<"Enter the string: ";
            getline(cin,s);
            reverse(s.begin() + 1,s.begin() + 5);
            cout<<s<<endl;
}
