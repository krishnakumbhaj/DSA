#include <iostream>
using namespace std;
int main()
{
        int arr[] = {1,2,3,4,5};  
        int *ptr = arr; // p points to the first element of the array

        *ptr = 8; // changing the first element of the array
        *ptr++; // incrementing the pointer or pointing the second element
        *ptr = 10; // changing the second element of the array
        *ptr--; // decrement the pointer or pointing the first element

        //Printing the array using pointer

            for(int i = 0; i < 5; i++){    
                        cout << *ptr << " ";    
                        *ptr++;
            }
            ptr = arr; // pointing the first element of the array because the ptr is pointing the last element + 1 of the array
//        another methord 

          for(int i = 0; i < 5; i++){    
                        cout << i[ptr] << " ";    

            }
           



}