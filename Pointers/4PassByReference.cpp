#include <iostream>
using namespace std;
int swap(int* x, int* y){
            int temp = *x;
            *x = *y;
            *y = temp;
            return;
}
int main()
{
            int x,y;
            cout<< "Enter the value of x: ";
            cin>> x;
            cout<< "Enter the value of y: ";
            cin>>y;

            swap(&x,&y);

            return 0;
}