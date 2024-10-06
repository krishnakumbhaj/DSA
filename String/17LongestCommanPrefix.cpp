#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
           vector<string> str = {"flower","flow","flight"};
           int n = str.size();
           sort(str.begin(), str.end());
           if(n == 1){
                        cout << str[0] << endl;
                        return 0;
           }

           string first = str[0];
           string  last = str[n - 1];
           string res = "";
           for(int i = 0; i < min(first.size(),last.size()); i++){
                        if(first[i] == last[i]){
                                    res += first[i];
                        }else{
                                    break;
                        }
           }
            cout << res << endl;

}