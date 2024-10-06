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
            int x =10;
            int y = 20;

            // cout << "Max: " << max(x,y) << endl;
            // cout << "Min: " << min(x,y) << endl;
            // cout << "Abs: " << abs(x) << endl;
            // cout << "Abs: " << abs(-x) << endl;
            // cout << "Abs: " << abs(-y) << endl;
            // cout << "Abs: " << abs(y) << endl;
            // cout << "Abs: " << abs(-10) << endl;
            // cout << sqrt(25) << endl;
            // cout << pow(2,3) << endl;
            // cout << round(4.6) << endl;
            // cout << ceil(4.1) << endl;
            // cout << floor(4.9) << endl;
            // cout << fmax(10,20) << endl;
            // cout << fmin(10,20) << endl;





            return 0;
            
}