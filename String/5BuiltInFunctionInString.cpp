#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
            string s = "hello my name is krishna Sharma";

            cout<<s.length()<<endl; // 30 

            cout<<s.size()<<endl; // 30

            s.push_back('A'); // hello my name is krishna SharmaA

            s.pop_back(); // hello my name is krishna Sharma

            s.append("A"); // hello my name is krishna SharmaA 

            s.insert(5,"A"); // helloA my name is krishna SharmaA

            s.erase(5,1); // hello my name is krishna SharmaA

            s.replace(5,1,"A"); // helloA my name is krishna SharmaA

            reverse(s.begin() + 0,s.begin() + 10); // ollehA my name is krishna SharmaA
            
            s.clear(); // ""

            // s.substr(index,length); // returns the substring of the string
            s.substr(0,5); // hello
            
            int x =12;
            string s1 = to_string(x); // "12"
            


          
}