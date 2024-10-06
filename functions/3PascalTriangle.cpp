#include <iostream>
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
int pascaltriangle(int n){
          for(int i = 0; i<=n ; i++){
           for(int j = 0; j<=i; j++){
            cout << combination(i,j) << " ";
           }
          }
}           
int main(){
            pascaltriangle(5);
            
            return 0;
}