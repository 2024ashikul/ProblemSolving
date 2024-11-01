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
        long long n;
        cin >> n;
        vector<int> inputs(100000, 1);
        int inc = 1;
        int count = 0;
        int k = n;
        while (k)
        {
            for (int i = 1; i < k; i++)
            {
                for (int j = i; j < k; j = j + i)
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

            for (int i = 0; i <= k; i++)
            {
                if (inputs[i] == 1)
                {
                    count++;
                }
            }
            if (count == n)
            {
                
                break;
            }
            k++;
            
        }

        cout << count - 1 << endl;
    }

    return 0;
}