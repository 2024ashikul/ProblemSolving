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



#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
using ll = long long;
int main()
{

    ll number = 1000000000000000000;
    vector<ll> inputs(number, 1);

        ll count = 0;
            for (ll i = 1; i < number; i++)
            {
                for (ll j = i; j < number; j = j + i)
                {
                    if (inputs[j] == 1)
                    {
                        inputs[j] = 0;
                    }
                    else
                    {
                        inputs[j] = 1;
                    }
                }
                
            }

            for (ll i = 0; i <= number; i++)
            {
                if (inputs[i] == 1)
                {
                    count++;
                }
            }
            
            inputs.push_back(count-1);

    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        ll n;
        cin >> n;
        cout << inputs[n] << endl;
        
       
    }

    return 0;
}