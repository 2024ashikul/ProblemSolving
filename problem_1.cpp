#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n;
        cin >> n ;
        vector<int> inputs(n+1);
        for (int i = 0; i < n; i++)
        {
            cin >> inputs[i];
        }
        vector<int> operations;
        for (int i = 0; i < n; i++)
        {
            int testing = inputs[i];
            int count = 0;
            for (int j = i; j < n; j++)
            {
                
                if (inputs[j] > testing)
                {
                    count++;
                }
                
            }
            operations.push_back(count+i);
            
        }
        
        
        // for(int i = 0; i < n ; i++){
        //     cout << operations[i] << " ";
        // }
       
        // cout << endl;
         sort(operations.begin(),operations.end());
        cout <<   operations[0] << endl;
    }
    

    return 0;
}