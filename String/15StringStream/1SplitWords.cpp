#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;
int main(){
            string s = "Leetcode is the coding platform";
            stringstream ss(s);
            string temp;
            while(ss>>temp) cout << temp << endl;
            

}