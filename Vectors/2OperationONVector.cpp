#include <iostream>
#include <vector>
using namespace std;

int main()
{
            vector<int> v;

// // 1. Inserting elements into the vector and printing the capacity and size
//             v.push_back(1);
//             cout << "Size of vector: " << v.size() << endl;
//             cout << "Capacity of vector: " << v.capacity() << endl;

//             v.push_back(2);
//             cout << "Size of vector: " << v.size() << endl;
//             cout << "Capacity of vector: " << v.capacity() << endl;

//             v.push_back(3);
//             cout << "Size of vector: " << v.size() << endl;
//             cout << "Capacity of vector: " << v.capacity() << endl;

//             v.push_back(4);
//             cout << "Size of vector: " << v.size() << endl;
//             cout << "Capacity of vector: " << v.capacity() << endl;

//             v.push_back(5);
//             cout << "Size of vector: " << v.size() << endl;
//             cout << "Capacity of vector: " << v.capacity() << endl;

//             v.push_back(6);
//             cout << "Size of vector: " << v.size() << endl;
//             cout << "Capacity of vector: " << v.capacity() << endl;

//             v.push_back(7);
//             cout << "Size of vector: " << v.size() << endl;
//             cout << "Capacity of vector: " << v.capacity() << endl;

//             v.push_back(8);
//             cout << "Size of vector: " << v.size() << endl;
//             cout << "Capacity of vector: " << v.capacity() << endl;

//             v.push_back(9);
//             cout << "Size of vector: " << v.size() << endl;
//             cout << "Capacity of vector: " << v.capacity() << endl;

//             v.push_back(10);
//             cout << "Size of vector: " << v.size() << endl;
//             cout << "Capacity of vector: " << v.capacity() << endl;

// // 2. Removing elements from the vector using pop_back()

//             v.pop_back();
//             cout << "Size of vector: " << v.size() << endl;
//             cout << "Capacity of vector: " << v.capacity() << endl;

//             v.pop_back();
//             cout << "Size of vector: " << v.size() << endl;
//             cout << "Capacity of vector: " << v.capacity() << endl;

//             v.pop_back();
//             cout << "Size of vector: " << v.size() << endl;
//             cout << "Capacity of vector: " << v.capacity() << endl;

//             v.pop_back();
//             cout << "Size of vector: " << v.size() << endl;
//             cout << "Capacity of vector: " << v.capacity() << endl;

//             v.pop_back();
//             cout << "Size of vector: " << v.size() << endl;
//             cout << "Capacity of vector: " << v.capacity() << endl;

// 3. Initializing a vector

            vector<int> v1(5);
            cout << v1.size() << endl;
            cout << v1.capacity() << endl;

// 4. Taking input

            // (i) If the size is defined
            
               vector<int> v2(5);
               for(int i=0; i<5; i++)
               {
                   cin >> v2[i];
               }

               // (ii) If the size is not defined

               vector<int> v3;  
               int n;
               cin >> n;
               for(int i=0; i<n; i++)
               {
                   int x;
                   cin >> x;
                   v3.push_back(x);
               }

            return 0;
}
