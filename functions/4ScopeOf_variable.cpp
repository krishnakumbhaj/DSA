#include<iostream>
using namespace std;

int a = 10; // global variable can be access in any function

int fun(){
    cout << a << endl; // 10
}
int defaultArgu(int x = 3){
    cout << x << endl; // 10
}

int multidatatype(int a, float b, char c){
    cout << a << " " << b << " " << c << endl;
}
int main(){

            cout << a << endl; // 10

            defaultArgu(); // 3

            multidatatype(10, 10.5, 'A'); // 10 10.5 A
            
            // keep remember agar default argument de rahe ho to uske baad ke sare argument ko default dena padega


}
