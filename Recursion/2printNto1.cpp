#include <iostream>
using namespace std;
void print(int n){
         if(n == 0) return;
         else {
             cout<<n<<" ";
             return print(n-1);   
         }
}
int main(){
            int n;
            cout<<"Enter the number: ";
            cin>>n;
           cout<<"Numbers from "<<n<<" to 1 are: ";
           print(n);
            cout<<endl;
}