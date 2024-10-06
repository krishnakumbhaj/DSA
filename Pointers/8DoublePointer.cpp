// DoublePointers
#include <iostream>
using namespace std;
int main() {
            int x = 5; 
            int *ptr = &x;
            int **ptr_ptr = &ptr;
            cout<<"address of the x: " << ptr <<endl;
            cout<< "value of x: "<< *ptr <<endl;
            cout<<"address of the ptr by itself: "<< &ptr <<endl;
            cout<<"address of the ptr by double pointer: "<< ptr_ptr <<endl;
            cout<<"address of ptr stored by the ptr_ptr: "<< *ptr_ptr <<endl;
            cout<<"value of the x: "<< **ptr_ptr <<endl;
            cout<<"address of double pointer: "<< &ptr_ptr <<endl;
            return 0;
}
