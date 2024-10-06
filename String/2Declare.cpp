#include <iostream>
#include <string>
using namespace std;
int main(){
            string s;  

            // cin stops reading when it encounters a space or a newline character ex- hello world will be read as hello only
            // cin>>s; // read only hello

            getline(cin,s); // getline reads the whole line including spaces

}