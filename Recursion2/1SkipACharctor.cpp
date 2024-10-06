#include <iostream>
#include <string>
using namespace std;
void removeChar(string ans, string originalStr){
            if(originalStr.length() == 0){
                        cout<<ans<<endl;
                        return;
            };
            char ch = originalStr[0];
            if(ch == 'a') removeChar(ans, originalStr.substr(1));
            else  removeChar(ans+ch, originalStr.substr(1));


}
int main(){
            string s = "krishna sharma";
            removeChar("",s);
}