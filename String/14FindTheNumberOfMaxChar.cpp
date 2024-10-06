#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
           vector<int> v(26);
           
            string s = "Leetcode";
            for(int i = 0; i < s.length(); i++){
               char c = s[i];
               int ascii = int(c);
               v[ascii - 97]++;

            }
            int max = 0;
            for(int i = 0; i < 26; i++){
                if(v[i] > max){
                    max = v[i];
                }
            }
            for(int i = 0; i < 26; i++){
                if(v[i] == max){
                    int ascii = i + 97;
                    char c = char(ascii);
                    cout << c << " -> " << max << endl;
                }
            }
}