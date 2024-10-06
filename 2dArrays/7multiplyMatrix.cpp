#include <iostream>
using namespace std;
int main(){
    int m;
    cout << "Enter the number of rows of the first matrix: ";
    cin >> m;
    int n;
    cout << "Enter the number of columns of the first matrix: ";
    cin >> n;

    int p;
    cout << "Enter the number of row of the second matrix: ";
    cin >> p;
    int q;
    cout << "Enter the number of columns of the second matrix: ";
    cin >> q;

    if(n != p){
        cout << "The matrices cannot be multiplied.";
        return 0;
    }
    else{
           int a[m][n], b[p][q] , c[m][q];
              cout << "Enter the elements of the first matrix: ";
                for(int i = 0; i < m; i++){
                    for(int j = 0; j < n; j++){
                        cin >> a[i][j];
                    }
                }
                cout << "Enter the elements of the second matrix: ";
                for(int i = 0; i < p; i++){
                    for(int j = 0; j < q; j++){
                        cin >> b[i][j];
                    }
                }
                for(int i = 0; i < m; i++){
                    for(int j = 0; j < q; j++){
                        c[i][j] = 0;
                        for(int k = 0; k < n; k++){
                            c[i][j] += a[i][k] * b[k][j];
                        }
                    }
                }
                cout << "The product of the two matrices is: ";
                for(int i = 0; i < m; i++){
                    for(int j = 0; j < q; j++){
                        cout << c[i][j] << " ";
                    }
                    cout << endl;
                }











    }

    


}