#include <bits/stdc++.h>
using namespace std;

vector<int> countBits(int n)
{   
    vector<int> ans;
    for(int i=0; i<=n; i++)
    {
        int res = 0;
        int val = i;
        while (val) 
        {
            val = val & (val - 1);
            res += 1;
        }
        ans.push_back(res);
    }
    return ans;
}

int main()
{
    int num=2;
    vector<int> result = countBits(num);
    for(int x : result) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}

