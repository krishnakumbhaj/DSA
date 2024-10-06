#include <iostream>
using namespace std;
void print(int n){
            if(n == 0) return;
            cout<<"Pre "<<n<<endl;
            print(n-1);
            cout<<"In "<<n<<endl;
            print(n-1);
            cout<<"Post "<<n<<endl;
}
int main(){
            int n =2;
            print(n);
}