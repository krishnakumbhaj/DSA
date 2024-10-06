// in built function

#include <iostream>
#include <cmath>
using namespace std;

int factorial(int n){
            int fact = 1;
            for(int i = 1; i <= n; i++){
                        fact *= i;
            }
            return fact;
}

int permutation(int n, int r){
            return (factorial(n)/factorial(n-r));
}
int combination(int n, int r){
            return (factorial(n)/(factorial(r)*factorial(n-r)));
}
int main(){
            cout << "Permutation: " << permutation(5,3) << endl;
            cout << "Combination: " <<
            combination(5,3);
            return 0;
}