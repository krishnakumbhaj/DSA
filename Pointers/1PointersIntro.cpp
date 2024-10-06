#include <iostream>
using namespace std;
int main(){
            int a = 10;
            int* p = &a;
            // int *p = &a;
            cout<< &a <<endl;
            cout<< p <<endl;
            cout<< *p <<endl;   // print the value of the variable stored at the address p 
            *p = 6; // store the value as a variable pointed to the pointer p
            cout<< a <<endl;
            cout<< *p <<endl;                   

}