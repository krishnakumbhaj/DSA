#include<iostream>
#include<string>
using namespace std;
int main(){
            char str1[5] = {'H','e','\0','l','o'};
            char str2[5] = "helo";; // This is a string literal  and it is not a string

            // cout<<str1[5]<<endl;
            // cout<<int(str1[5])<<endl;   
            // last character of string is null character 

            cout<<str1<<endl; // print He only because \0 means null character and it is used to terminate the string

            for(int i = 0; str1[i] != '\0'; i++){
                        cout<<str1[i]<<" ";
            }




}