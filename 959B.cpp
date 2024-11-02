#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n,k;
        cin >> n;
        cin >> k;
        vector<int> inputs;
        vector<int> real;
        for (int i = 0; i < k; i++)
        {
            int a;
            cin >> a;
            inputs.push_back(a);
            int b;
            cin >> b;
            inputs.push_back(b);
            real.push_back(b);
        }
        sort(real.begin() , real.end());
        int earn  =0 ;
        int index = k-1;
        while (n>0 && index>=0)
        {
            earn+=real[index];
            n--;
            index--;
            
        }
        
        cout << earn << endl;
        
    }

    return 0;
}