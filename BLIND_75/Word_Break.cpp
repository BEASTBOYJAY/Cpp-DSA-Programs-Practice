#include <bits/stdc++.h>
using namespace std;
#include <unordered_set>


bool wordBreak(string s, const vector<string>& wordDict)
{
    // Transfer words into an unordered_set for O(1) lookup time
    unordered_set<string> dict(wordDict.begin(), wordDict.end());
        
    int n = s.length();
    // dp[i] represents whether s[0...i-1] can be segmented
    vector<bool> dp(n + 1, false);
        
    // Base case: an empty string is always valid
    dp[0] = true; 

    // i represents the length of the prefix we are currently checking
    for (int i = 1; i <= n; ++i) 
    {
        // j represents the split point
        for (int j = 0; j < i; ++j) 
        {
            // If the substring up to j is valid AND the rest is in the dict
            if (dp[j] && dict.find(s.substr(j, i - j)) != dict.end()) 
            {
                dp[i] = true;
                break; // Found a valid split, no need to check further for this i
            }
        }
    }
        
    // The result for the full string length
    return dp[n];
}

int main()
{
    cout<<wordBreak("takeuforward",{"take" , "forward" , "you", "u"});
}