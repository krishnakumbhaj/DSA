#include <iostream>
using namespace std;
int main()
{
            int x =3 , y=4;
            int *p1 = &x;
            // cout<< p1 <<endl;
            // cout<< *p1 <<endl;
            // cout<< p1 <<endl;
            // p1 = p1 + 1; // p1 = p1 + 1* sizeof(int) = p1 + 4 bytes
            // cout<< p1 <<endl;    // but didnt mean that the address is increased by 1 
            // for that you have to typecast it to int* p1 = (int*)p1 + 1;
            (*p1)++; // it will increase the value of x by 1
            cout<< x <<endl;                    
            cout<< *p1 <<endl;

            int x = 4;
            int* p1 = &x;
            cout<< *p1 <<endl;
            (*p1)++; // it will increase the value of x by 1
            cout<< *p1 <<endl;
}
