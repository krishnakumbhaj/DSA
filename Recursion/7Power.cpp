#include <iostream>
using namespace std;
int power(int n, int p){
            if(p == 1) return p;
            int ans = power(n,p/2);
            return ans*ans;
}
int main(){
            int n,p;
            cout<<"Enter the number: ";
            cin>>n;
            cout<<"Enter the power: ";
            cin>>p;
            cout << n << " raised to the power " << p << " is " << power(n,p) << endl;
}