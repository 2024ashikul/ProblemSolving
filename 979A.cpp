#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int a;
        cin >> a;
        vector<int> inputs(a);
        for (int i = 0; i < a; i++)
        {
            cin >> inputs[i];
        }
        int sum = 0 ; 
        vector<int> input1;
        vector<int> input2;
        int maxa = inputs[0];
        int mina = inputs[0];
        sort(inputs.begin(), inputs.end());
        for (int i = 0; i < a; i++)
        {
            if (inputs[i] < mina)
            {
                mina = inputs[i];
            }else if (inputs[i] > maxa)
            {
                maxa = inputs[i];
            }
            
            sum+=maxa-mina;
        }
        
        cout << sum << endl;
    }
    


    return 0;
}