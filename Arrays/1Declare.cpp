// #include <iostream>
// using namespace std;
// int main() {
//    int x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    cout << x[10] << endl;
//    cout << x<< endl; // this will return the address of the first element of the array not the whole array
//    return 0;

// }
#include <iostream>
using namespace std;
int main() {
   int x[10];
   int sum = 0;                           
   for(int i = 1; i <= 10; i++) {
            cout<< "enter the number"<< i<<endl; 
            cin>>x[i];
            // sum = sum + x[i];
   }  
   cout<< "the sum of the numbers is: "<< sum<<endl;                  

}