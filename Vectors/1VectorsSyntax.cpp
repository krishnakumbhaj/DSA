// vector ek type ka array hain jisme ham elements ko store kar sakte hain agar limit extend ho gayi to bhi.

// vector ek dynamic array hain.

// agar limit extend hoti hain to vector ek naya array banata hai jo double size ka hota hain with same name and saare element save kardeta hain usme.
// ex- 
// vector<int> v = {1,2,3};

// agar ek or dalna hua to 

// v = {1,2,3,4,_,_,_}  // _ is empty space;

// Syntax of vector 

#include <iostream>
#include <vector>
using namespace std;
int main()
{
   vector<int> v;

 //  for inserting the element of an vector where the vector size is not define you may have to use pushback()

      v.push_back(1);
      v.push_back(2);
      v.push_back(3);
      v.push_back(4); 


// wrong syntax give segmentation fault

         //   v[0] = 1;
         //   v[1] = 2;

// but you can 'Print' and 'Change the value' using this syntax but after using pushback() function.

         //   v[0] = 11; changing values
         //   v[1] = 12; changing values


// or you cannot do this 

        //      v.push_back(1);
        //      v.push_back(2);
        //      v[2] = 3; // this will give segmentation fault
        //      v.push_back(4);


// can do this 
            
        //      v.push_back(1);
        //      v.push_back(2);
        //      v[2] = 3; 
        //      v[3] = 4;
        //      v.[4] = 5;
}