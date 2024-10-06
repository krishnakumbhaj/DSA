#include <iostream>
using namespace std;
int main(){

        int arr[] = {1,2,3,4,5};  
        int *p1 = arr; // p points to the first element of the array
//      int *p = &arr;  // incorrect methord
        cout << *p1 << endl; // 1   
        int *p2 = &arr[0];   // also write like it   
//         int *p2 = arr[0];   // incorrect methord  
        cout << *p2 << endl; // 1    
        cout << p1[2] << endl; // 0x61ff04    
        for(int i = 0; i < 5; i++){    
                cout << p1[i] << " ";    
                    
        }
        cout << endl;
        for(int i = 0; i < 5; i++){    
                cout << i[arr] << " ";  // we can also write like this 
                    
        }



}