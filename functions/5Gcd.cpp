#include <iostream>
using namespace std;
int gcd(int a, int b){
            int gcd;
            for(int i = 1; i <= a && i <= b; i++){
                        if(a%i == 0 && b%i == 0){
                                    gcd = i;
                        }
            }
            return gcd;
}
int main(){
                                                                                     gcd(10,15);
            return 0;                        
}