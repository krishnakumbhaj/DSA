#include <iostream>
#include <cmath>
using namespace std;
void sqrt(int n){
            int l = 0, h = n, mid;
            while(l<=h){
                        mid = (l+h)/2;
                        if(mid*mid == n){
                                    cout << "The square root of " << n << " is: " << mid;
                                    return;
                        }
                        else if(mid*mid < n){
                                    l = mid+1;
                        }
                        else{
                                    h = mid-1;
                        }
            }
             cout << "The square root of " << n << " is near to: " << h;
                                    return;

}
int main(){
            int n =20;
            sqrt(n);
}