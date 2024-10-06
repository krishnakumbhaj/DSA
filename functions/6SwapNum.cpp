#include <iostream>
using namespace std;
int swap(int a, int b){
            int temp;
            temp = a;
            a = b;
            b = temp;
            cout << "After Swapping: " << a << " " << b << endl;
}
int main(){
            int x = 10;
            int y = 20;
            cout << "Before Swapping: " << x << " " << y << endl;
            swap(x,y);
            return 0;
}


