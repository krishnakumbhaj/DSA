#include <iostream>
using namespace std;
int fun(int a, int b){
            int sum = 0;
            if(a > b) return 0;
            if(a % 2 == 0) return a + fun(a+1,b);
            return a + fun(a+1,b);
}
int main(){
            int a = 5, b = 9;
            if (b > a) cout<<fun(a,b);
            

}