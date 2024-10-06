#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
            string arr[] = {"0123", "0034", "2345", "3456", "4567", "5678", "6789", "7890"};
            int max = stoi(arr[0]);
            for(int i = 1; i < 8; i++){
                int x = stoi(arr[i]);
                if(x > max) max = x;
            }

            cout << max << endl;
}