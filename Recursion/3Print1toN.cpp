#include <iostream>
using namespace std;
void print(int n, int i){
         if(i == n+1) return;
         else {
             cout<<i<<" ";
             return print(n,i+1);   
         }
}
int main(){
            int n;
            cout<<"Enter the number: ";
            cin>>n;
            cout<<"Numbers from 1 to "<<n<<" are: ";
            int i = 1;      
            print(n,i);

}