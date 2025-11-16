#include <iostream>
using namespace std;

// ######################################################
// ############# PROBLEM: Print Name N times ############
// ######################################################

// void print_n_time(string a, int n)
// {
//     if (n <= 0)
//     {
//         return;
//     }
//     cout << a << endl;

//     print_n_time(a, n - 1);
// }

// ######################################################
// ################ PROBLEM: Print 1 to N ###############
// ######################################################

// ################ FORWARD RECURSION ###############

// void printNumbers(int current, int n)
// {
//     if (current > n)
//         return;

//     cout << current << " ";

//     printNumbers(current + 1, n);
// }

// ################ BACKWARD RECURSION ###############

// void printNumbers(int current, int n)
// {
//     if (current > n)
//         return;

//     printNumbers(current + 1, n);

//     cout << current << " ";
// }

// ######################################################
// ################ PROBLEM: Print N to 1 ###############
// ######################################################

// ################ FORWARD RECURSION ###############

// void printNumbers(int current)
// {
//     if (current < 1)
//         return;

//     cout << current << " ";

//     printNumbers(current - 1);
// }

// ################ BACKWARD RECURSION ###############

// void printNumbers(int current)
// {
//     if (current < 1)
//         return;

//     printNumbers(current - 1);

//     cout << current << " ";
// }

// ######################################################
// ######## PROBLEM: Sum of first N Natural Numbers #####
// ######################################################

// void SumNumbers(int i, int sum)
// {
//     if (i < 1)
//     {
//         cout << sum;
//         return;
//     }

//     SumNumbers(i - 1, sum + i);
// }

// ######################################################
// ############ PROBLEM: Factorial of a Number  #########
// ######################################################

// void Factorial(int i, int fact)
// {
//     if (i < 1)
//     {
//         cout << fact;
//         return;
//     }

//     Factorial(i - 1, fact * i);
// }

// ######################################################
// ############ PROBLEM: Reverse a given Array  #########
// ######################################################

// void printArray(int ans[], int n)
// {
//     cout << "The reversed array is:- " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << ans[i] << " ";
//     }
// }

// ################ Using an extra array ###############

// void reverseArray(int arr[], int n)
// {
//     int ans[n];
//     for (int i = n - 1; i >= 0; i--)
//     {
//         ans[n - i - 1] = arr[i];
//     }
//     printArray(ans, n);
// } Time Complexity: O(n)

// ################ Space-optimized iterative method ###############

// void reverseArray(int arr[], int n)
// {
//     int p1 = 0, p2 = n - 1;
//     while (p1 < p2)
//     {
//         swap(arr[p1], arr[p2]);
//         p1++;
//         p2--;
//     }
//     printArray(arr, n);
// } Time Complexity: O(n)

// ################ Recursive method ###############

// void reverseArray(int arr[], int start, int end)
// {
//     if (start < end)
//     {
//         swap(arr[start], arr[end]);
//         reverseArray(arr, start + 1, end - 1);
//     }
// } Time Complexity: O(n)

// ################ Using library function ###############
// #include <algorithm>
// void reverseArray(int arr[], int n)
// {
//     // Reversing elements from index 0 to n-1
//     reverse(arr, arr + n);
// }

// ################################################################################
// ############ PROBLEM: Check if the given String is Palindrome or not   #########
// ################################################################################

// ################ Using while loop ###############

// bool isPalindrome(string s)
// {

//     int left = 0, right = s.length() - 1;
//     while (left < right)
//     {
//         if (!isalnum(s[left]))
//             left++;
//         else if (!isalnum(s[right]))
//             right--;
//         else if (tolower(s[left]) != tolower(s[right]))
//             return false;
//         else
//         {
//             left++;
//             right--;
//         }
//     }
//     return true;
// }
// Time Complexity : O(N)

// ################ Recursive method ###############

// bool palindrome(int i, string &s)
// {

//     // Base Condition
//     // If i exceeds half of the string means all the elements
//     // are compared, we return true.
//     if (i >= s.length() / 2)
//         return true;

//     // If the start is not equal to the end, not the palindrome.
//     if (s[i] != s[s.length() - i - 1])
//         return false;

//     // If both characters are the same, increment i and check start+1 and end-1.
//     return palindrome(i + 1, s);
// }

// ################################################################################
// ########################### PROBLEM: Fibonacci Series ##########################
// ################################################################################

// ################ Naive approach ###############

// int main()
// {
//     int n = 5;
//     if (n == 0)
//     {
//         cout << 0;
//     }
//     else if (n == 1)
//     {
//         cout << 0 << " " << 1 << "\n";
//     }
//     else
//     {
//         int fib[n + 1];
//         fib[0] = 0;
//         fib[1] = 1;
//         for (int i = 2; i <= n; i++)
//         {
//             fib[i] = fib[i - 1] + fib[i - 2];
//         }
//         cout << "The Fibonacci Series up to " << n << "th term:" << endl;
//         for (int i = 0; i <= n; i++)
//         {
//             cout << fib[i] << " ";
//         }
//     }
// }
// // Time Complexity: O(n)+O(n)

// ################ Space optimized approach ###############

// int main()
// {
//     int n = 5;
//     if (n == 0)
//     {
//         cout << "The Fibonacci Series up to " << n << "th term:" << endl;
//         cout << 0;
//     }
//     else
//     {
//         int secondLast = 0; // for (i-2)th term
//         int last = 1;       // for (i-1)th term
//         cout << "The Fibonacci Series up to " << n << "th term:" << endl;
//         cout << secondLast << " " << last << " ";
//         int cur; // for ith term
//         for (int i = 2; i <= n; i++)
//         {
//             cur = last + secondLast;
//             secondLast = last;
//             last = cur;
//             cout << cur << " ";
//         }
//     }
// }
// Time Complexity: O(n)

// ################ Recursion approach ###############

int fibonacci(int N)
{

    // Base Condition.
    if (N <= 1)
    {
        return N;
    }

    // Problem broken down into 2 functional calls
    // and their results combined and returned.
    int last = fibonacci(N - 1);
    int slast = fibonacci(N - 2);

    return last + slast;
}
// Time Complexity: O(2^N)

int main()
{

    // Here, let’s take the value of N to be 4.
    int N = 4;
    cout << fibonacci(N) << endl;
    return 0;
}