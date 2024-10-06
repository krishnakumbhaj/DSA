#include <iostream>
using namespace std;

int rectangularpattern(int m, int n){
            for(int i = 0; i<n; i++){

                        for(int j = 0; j<m; j++){
                        cout << "*  ";
                        }
                        cout << endl;
            }
           
}
int number1234(int n){
            for(int i = 1; i<=n; i++){
                        for(int j = 1; j<=n; j++){
                                    cout << j << " ";
                        }
                        cout << endl;

            }
}
int righttriangle(int n){
            for(int i = 0; i < n; i++){
                        for(int j = 0; j<=i; j++){
                                    cout << "* ";
                        }
                        cout << endl;
            }
}
int invertedrighttriangle(int n){
            for(int i = 1; i <= n; i++){
                        for(int j = 1; j<=n+1-i; j++){
                                    cout << "* ";
                        }
                        cout << endl;
            }
}
int numberrighttriangle(int n){
            for(int i = 1; i <= n; i++){
                        for(int j = 1; j<=i; j++){
                                    cout << j << " ";
                        }
                        cout << endl;
            }
}
int oddnumbertriangle(int n){
            int a = 1;
            for(int i = 1; i <= n; i++){
                        for(int j = 1; j <= i; j++){     
                                    cout << a << " ";
                                    a = a+2;
                        }
                        a =1;
                        cout << endl;
            }
}
int alphabetsquare(int n){
            for(int i = 1; i <= n; i++){
                        for(int j = 1; j <= n; j++){
                                    cout << char(64+j) << " ";
                        }
                        cout << endl;
            }                       
}
int starplus(int n){
            int x = n/2;
            x = x + 1;
            for(int i = 1; i <= n; i++){
                        if(i != x){
                                    for(int j = 1; j <= n; j++){
                                               if(j == x){
                                                    cout << "* ";
                                                }
                                                else{
                                                    cout << "  ";
                                                }

                                    }
                        }
                        else{
                                    for(int j = 1; j <= n; j++){
                                                cout << "* ";
                                    }
                        }
                        cout << endl;
            }
}
int cross(int n){
              for(int i = 1; i <= n; i++){
                      
                        for(int j = 1; j <= n; j++){
                                 if(j==i || i+j ==n+1){
                                    cout << "* ";
                                 }
                                 else{
                                    cout << "  ";

                                 }
                        }
                        cout << endl;
              }
}
int continiousnumbertriangle(int n){
            /*
                   1
                   2 3
                   4 5 6
                   7 8 9 10

                   FLoyd's Triangle
            */

            int a = 1;
            for(int i = 1; i <= n; i++){
                        for(int j = 1; j <= i; j++){
                                    cout << a << " ";
                                    a++;
                        }
                        cout << endl;
            }

}
int binarytriangle(int n){
            /*
                   1
                   0 1
                   1 0 1
                   0 1 0 1

            */
           int a = 1;
           for(int i = 1; i <= n; i++){
                for(int j = 1; j<=i; j++){
                        cout << a << " ";
                        a = 1 - a;
                }
                        cout << endl;
           }
            
}
int startriangleflipped(int n){
           /*       
                     *
                   * *
                 * * *
               * * * * 
           */

            for(int i = 1; i <= n; i++){
                        for(int j = 1; j <= n-i; j++){
                                    cout << "  ";
                        }    
                        for(int k = 1; k <= i; k++){
                                    cout << "* ";
                        }     
                      cout << endl;  
            }

}
int numbertriangleflipped(int n){
            /*
                     1
                   1 2
                 1 2 3
               1 2 3 4
            */

            for( int i = 1; i <= n; i++){
                        for(int j = 1; j <= n-i; j++){
                                    cout << "  ";
                        }
                        for(int k = 1; k <= i; k++){
                                    cout << k << " ";
                        }
                        cout << endl;
            }
}
int rhombus(int n){
            for(int i = 1; i <= n; i++){
                        for(int j = 1;j< 2*n; j++){
                                    if(i+j <= n || i+j > 2*n){
                                                cout << "  ";
                                    }
                                    else{
                                                cout << "* ";
                                    }
                        }
                        cout << endl;
            }

}
int pyramid(int n){
            /*

                       1 2 3 4 5 6 7  
                     1       *
                     2     * * *  
                     3   * * * * *  
                     4 * * * * * * *  
            */

           for(int i = 1; i<=n; i++){
                        for(int j = 1; j <= n-i; j++){
                                    cout << "# ";
                        }
                        for(int k = 1; k <= 2*i-1; k++){
                                    cout << "* ";
                        }
                        cout << endl;
           }
}
int numberpyramid(int n){
            /*

                        1 2 3 4 5 6 7  

                     1        1  
                     2      1 2 1  
                     3    1 2 3 2 1  
                     4  1 2 3 4 3 2 1
            */

           for(int i = 1; i<=n; i++){
                        for(int j = 1; j <= n-i; j++){
                                    cout << "  ";
                        }
                        for(int k = 1; k <= i; k++){
                                    cout << k << " ";
                        }
                        for(int l = i-1; l >= 1; l--){
                                    cout << l << " ";
                        }                                                cout << endl;                  
           }
}
int diamond(int n){
            /*

                       1 2 3 4 5 6 7  
                     1         *  
                     2       * * *  
                     3     * * * * *  
                     4   * * * * * * * 
                     3     * * * * *   
                     2       * * *  
                     1         *  
            */

           for(int i = 1; i<=n; i++){
                        for(int j = 1; j <= n-i; j++){
                                    cout << "  ";
                        }
                        for(int k = 1; k <= 2*i-1; k++){
                                    cout << "* ";
                        }
                        cout << endl;
           }
           for(int i = n-1; i>=1; i--){
                        for(int j = 1; j <= n-i; j++){
                                    cout << "  ";
                        }
                        for(int k = 1; k <= 2*i-1; k++){
                                    cout << "* ";
                        }
                        cout << endl;
           }            
}
int starBridge(int n){

            for(int i = 1; i<=n; i++){
                        for(int j = 1; j <= n-i; j++){
                                    cout << "# ";
                        }
                        for(int k = 1; k <= 2*i-1; k++){
                                    cout << "  ";
                        }
                        for(int k = 1; k < n; k++){
                                    cout << "# ";
                        }
                        cout << endl;
           }

}

int main() {
            // cout << "Enter the number of rows: ";
            int m = 4;
            // cin >> m;
            // cout << "Enter the number of coloum: ";
            int n = 5;
            // cin >> n;


            // rectangularpattern(m,n);

            // number1234(n);

            // righttriangle(n);
 
            // invertedrighttriangle(n);

            // numberrighttriangle(n);

            // oddnumbertriangle(n);

            // alphabetsquare(n);

            // starplus(n);

            // cross(n);

            // continiousnumbertriangle(n);

            // binarytriangle(n);

            // startriangleflipped(n);

            // numbertriangleflipped(n);

            // rhombus(n);

            // pyramid(n);

            // numberpyramid(n);

            // diamond(n);

            // starBridge(n);
             
    return 0;
}