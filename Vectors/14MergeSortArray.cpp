// merge two sorted arrays 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sortvector(vector<int> &v)  /*-->*/  { sort(v.begin(), v.end());  }

vector<int> MergeSortArray(vector<int>& v1, vector<int>& v2){
            int n1 = v1.size();
            int n2 = v2.size();
            vector<int> v3(n1 + n2);
            int i = 0, j = 0, k = 0;

            while(i < n1 && j < n2 ){
                        if(v1[i] < v2[j]){
                                    v3[k] = v1[i];
                                    k++;
                                    i++;
                        }else{
                                    v3[k] = v1[j];
                                    k++;
                                    j++;
                        }         
            }
            if(i == n1){
                        while(j < n2){
                                    v3[k] = v2[j];
                                    k++;
                                    j++;
                        }
            }
            if(j == n2){
                        while(i < n1){
                                    v3[k] = v2[i];
                                    k++;
                                    j++;
                        }
                        }
            return v3;
}


int main()
{
            vector<int> v1;
            v1.push_back(3);
            v1.push_back(1);
            v1.push_back(5);
            v1.push_back(9);
            v1.push_back(7);
            for(int i = 0; i < v1.size(); i++)
            {
                        cout << v1[i] << " ";
            }
            cout << endl;
            vector<int> v2;
            v2.push_back(8);
            v2.push_back(12);
            v2.push_back(6);
            v2.push_back(4);
            v2.push_back(14);
            v2.push_back(10);
            v2.push_back(2);
            for(int i = 0; i < v2.size(); i++)
            {
                        cout << v2[i] << " ";
            }
            cout << endl;
            sortvector(v1);
            sortvector(v2);

          vector<int> v =  MergeSortArray(v1, v2);
            for(int i = 0; i < v.size(); i++)
            {
                        cout << v[i] << " ";
            }

}