#include <iostream>
using namespace std;
int main()
{
        int arr[] = {1,2,3,4,5};  
        int *p1 = arr; // p points to the first element of the array

        *p1 = 10; // changing the first element of the array
        p1[1] = 20; // changing the second element of the array

//         *p1[1] = 20; // incorrect methord
            for(int i = 0; i < 5; i++){    
                cout << p1[i] << " ";    
            }

}