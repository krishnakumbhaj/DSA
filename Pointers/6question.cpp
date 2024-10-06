#include <iostream>
using namespace std;
int push(int n, int* p1, int* p2){
            *p2 = n%10;   
            while(n>9){
                        n/=10;           
            }
            *p1 = n;
            return 0;


}
int main(){
           int n,f,l;
            cout<<"Enter the number: ";
           cin>>n;
           int *p1 = &f , *p2 = &l;
           push(n,p1,p2);
           cout<< f << " " << l <<endl;
}