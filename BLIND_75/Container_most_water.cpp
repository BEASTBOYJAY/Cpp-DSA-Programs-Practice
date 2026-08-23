#include <bits/stdc++.h>
using namespace std;


// ################################################ BRUTE FORCE ################################################

// int maxArea(vector<int>& height)
// {

//     int maxArea = 0;

//     for (int i=0;i<height.size();i++)
//     {
//         for (int j=i+1;j<height.size();j++)
//         {
//             int currentArea= (j-i) * (min(height[i],height[j]));
//             maxArea=max(maxArea,currentArea);
//         }
//     }


//     return maxArea;
// }


// int main()
// {
//     vector<int> height={1,8,6,2,5,4,8,3,7};
    
//     cout<<maxArea(height);
// }


// ################################################ OPTIMAL APPORACH ################################################

int maxArea(vector<int>& height)
{
    int left = 0;
    int right = height.size() - 1;
    int maxArea = 0;

    while (left < right) 
    {

        int currentArea = min(height[left], height[right]) * (right - left);
        maxArea = max(maxArea, currentArea);
        if (height[left] < height[right]) 
        {
            left++;
        } else 
        {
            right--;
        }
    }

    return maxArea;
}


int main()
{
    vector<int> height={1,8,6,2,5,4,8,3,7};
    
    cout<<maxArea(height);
}