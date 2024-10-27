#include <iostream>
using namespace std;
int main()
{
            int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
            int n ;
            cout << "Enter the number you want to search: ";
            cin >> n;
            for(int i = 0; i<8; i++){
                        if(arr[i] == n){
                                    cout << "Number found at index: " << i;
                                    return 0;
                        }

            }
}