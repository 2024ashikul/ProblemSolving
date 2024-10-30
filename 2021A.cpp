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
        cin >> n;
        vector<int>inputs;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            inputs.push_back(a);
        }
        int i=0;
        while (inputs.size()!=1)
        {
            int temp = inputs[0]+inputs[1];
            int toadd = round(temp/2);
            inputs.push_back(toadd);
            inputs.erase(inputs.begin(), inputs.begin()+2);
            for (int k = 0; k < inputs.size(); k++)
            {
                cout << inputs[i] << " ";
            }
            cout << endl;
            
        }
        cout << inputs.back() << endl;
        
        
    }
    

    return 0;
}