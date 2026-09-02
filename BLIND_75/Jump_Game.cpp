#include <vector>
using namespace std;

bool canJump(vector<int>& nums) 
{
    int maxIndex = 0; // The farthest index we can currently reach
    // Traverse the array
    for (int i = 0; i < nums.size(); i++) 
    {
        // If current index is beyond the farthest reachable point
        if (i > maxIndex) 
        {
            return false; // We cannot move further
        }
        // Update the farthest index we can reach
        maxIndex = max(maxIndex, i + nums[i]);
    }

        // If we finish the loop, we can reach the last index
        return true;
}


int main() {
    vector<int> nums = {4, 3, 7, 1, 2};

    cout << "Array representing maximum jump from each index: ";
    for (int val : nums) cout << val << " ";
    cout << endl;

    bool ans = canJump(nums);

    if (ans)
        cout << "It is possible to reach the last index." << endl;
    else
        cout << "It is not possible to reach the last index." << endl;

    return 0;
}
