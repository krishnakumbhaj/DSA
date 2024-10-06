#include <iostream>
using namespace std;
int maze(int sr, int sc, int er ,int ec){
            if(sr == er && sc == ec) return 1;
            if(sr > er || sc > ec) return 0;
            int rightways = maze(sr,sc+1,er,ec);
            int downways = maze(sr+1,sc,er,ec);
            return rightways + downways;
}
int maze2(int row, int col){
            if(row == 1 && col == 1) return 1;
            if(row < 1 || col < 1) return 0;
            int rightways = maze2(row,col-1);
            int downways = maze2(row-1,col);
            return rightways + downways;                                                     
}
void printpath(int sr, int sc, int er, int ec, string path){
            if(sr == er && sc == ec){
                        cout<<path<<endl;
                        return;
            }
            if(sr > er || sc > ec) return;
            printpath(sr,sc+1,er,ec,path + "R");
            printpath(sr+1,sc,er,ec,path + "D");
}           
int main(){
            cout<<maze(1,1,3,3)<<endl;
            cout<<maze2(3,3)<<endl;
            printpath(1,1,3,3,"");
}