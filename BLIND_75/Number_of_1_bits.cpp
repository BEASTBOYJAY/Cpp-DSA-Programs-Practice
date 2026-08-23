#include <bits/stdc++.h>
using namespace std;


// ############################################ 1st APPORACH ############################################

// int hammingWeight(unsigned int n) {
//     int res = 0;
//     while (n) {
//         res += n % 2;
//         n = n >> 1;
//     }
//     return res;
// }

// int main() {
//     // 11 in binary is 1011, which has 3 set bits.
//     cout << hammingWeight(11) << endl;
//     return 0;
// }



// ############################################ 2nd APPORACH ############################################

int hammingWeight(unsigned int n) {
    int res = 0;
    while (n) {
        n=n&(n-1);
        res += 1;
    }
    return res;
}

int main() {
    // 11 in binary is 1011, which has 3 set bits.
    cout << hammingWeight(11) << endl;
    return 0;
}

