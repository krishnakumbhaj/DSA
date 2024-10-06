#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;
int main(){
            string s = "Raghav is a maths teacher. he is a DSA mentor as well";
            stringstream ss(s);
            string temp;
            vector<string> v;
            while(ss>>temp) v.push_back(temp);
            // for(auto x: v) cout << x << endl;
            sort(v.begin(), v.end());
            
            int count = 1, maxcount = 1;
            for(int i = 1; i < v.size(); i++){
                if(v[i] == v[i-1]) count++;
                else count = 1;
                maxcount = max(maxcount, count);   
            }
            for(int i = 1; i < v.size(); i++){
                if(v[i] == v[i-1]) count++;
                else count = 1;
                if(count == maxcount) cout << v[i] << " -> " << maxcount << endl;
            }
}