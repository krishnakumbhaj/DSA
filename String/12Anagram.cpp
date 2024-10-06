#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
            string s1 = "WallahPhysics";
            string s2 = "PhysicsWallah";
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());
            if(s1 == s2){
                cout << "Anagram" << endl;
            }
            else{
                cout << "Not Anagram" << endl;
            }
}