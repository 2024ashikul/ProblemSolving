#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool check(string a){
    for (int  k= 0;  k<= a.length()-4; k++)
    {
        if (a[k] == '1' && a[k+1] == '1' && a[k+2] == '0' && a[k+3] == '0')
        {
            return true;
        }
        
    }
    return false;
}

int main()
{
    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        string s;
        cin >> s;
        int n;cin >> n;

        for (int i = 0; i < n; i++)
        {
            int a,b;
            cin >> a >>b;
            if (s.length() <4)
            {
                cout <<"NO" << endl;
            }else{
            string temp = s;
            temp[a]=b;
            bool ch = check(temp);
            if (ch == true)
            {
                cout <<"YES" << endl;
            }else{
                cout <<"NO" << endl;
            }
            }
        }
        
        
        

    }

    return 0;
}