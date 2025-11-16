#include <iostream>
using namespace std;

// ######################################################
// ################ PROBLEM: Count Digits ###############
// ######################################################

// ################ BRUTE FORCE #########################

// int countDigits(int n)
// {
//     // Initialize a counter variable
//     // 'cnt' to store the count of digits.
//     int cnt = 0;
//     // While loop iterates until 'n'
//     // becomes 0 (no more digits left).
//     while (n > 0)
//     {
//         // Increment the counter
//         // for each digit encountered.
//         cnt = cnt + 1;
//         // Divide 'n' by 10 to
//         // remove the last digit.
//         n = n / 10;
//     }
//     // Return the
//     // count of digits.
//     return cnt;
// } // Time Complexity: O(log10N + 1)

// ################ OPTIMAL APPROACH #########################

// int countDigits(int n)
// {
//     // Initialize a variable 'cnt' to
//     // store the count of digits.
//     int cnt = (int)(log10(n) + 1);

//     // The expression (int)(log10(n)+1)
//     // calculates the number of digits in 'n'
//     // and casts it to an integer.

//     // Adding 1 to the result accounts
//     // for the case when 'n' is a power of 10,
//     // ensuring that the count is correct.

//     // Finally, the result is cast
//     // to an integer to ensure it is rounded
//     // down to the nearest whole number.

//     // Return the count of digits in 'n'.
//     return cnt;
// } // Time Complexity: O(1)

// ######################################################
// ############### PROBLEM: Reverse Number ##############
// ######################################################

// ###################################################################

// it can only be worked in postive integers. using string and typecasting.

// #include <string>
// int Reverse_digit(int n)
// {
//     string reverged_intiger = "";
//     while (n > 0)
//     {
//         int last_digit = n % 10;
//         reverged_intiger += to_string(last_digit);
//         n = n / 10;
//     }
//     return stoi(reverged_intiger);
// }

// ###################################################################

// it can only be worked in postive integers.

// int Reverse_digit(int n)
// {
//     int reversed_number = 0;

//     while (n != 0)
//     {

//         int last_digit = n % 10;
//         reversed_number = reversed_number * 10 + last_digit;

//         n = n / 10;
//     }

//     return reversed_number;
// } // Time Complexity: O(log10N + 1)

// ######################################################
// ############## PROBLEM: Check Palindrome #############
// ######################################################

// bool Check_Palindrome(int a)
// {
//     int reverse_number = 0;
//     int original_number = a;

//     while (a != 0)
//     {
//         int last_digit = a % 10;
//         reverse_number = reverse_number * 10 + last_digit;

//         a = a / 10;
//     }

//     return original_number == reverse_number;
// }

// ######################################################
// ########### PROBLEM: Check Armstrong number ##########
// ######################################################

// #include <cmath>

// bool Check_armstrog(int a)
// {
//     int orig_num = a;
//     int sum_of_cubes = 0;

//     int digit_count = 0;
//     while (a != 0)
//     {
//         int last_digit = a % 10;

//         digit_count += 1;
//         a = a / 10;
//     }

//     a = orig_num;
//     while (a != 0)
//     {
//         int last_digit = a % 10;

//         sum_of_cubes = sum_of_cubes + pow(last_digit, digit_count);
//         a = a / 10;
//     }

//     return orig_num == sum_of_cubes;
// }

// ######################################################
// ############# PROBLEM: Print all Divisiors ###########
// ######################################################

// ################ BRUTE FORCE #########################

// void Print_Divisiors(int n)
// {
//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << i << " ";
//         }
//     }
// } Time Complexity: O(N)

// ################ OPTIMAL APPROACH #########################

// void Print_Divisiors(int n)
// {
//     for (int i = 1; i * i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << i << endl;

//             if (i != n / i)
//             {
//                 cout << n / i << endl;
//             }
//         }
//     }
// } Time Complexity: O(sqrt(N))

// ######################################################
// ################# PROBLEM: Is Prime ##################
// ######################################################

// ################ BRUTE FORCE #########################

// bool checkPrime(int n)
// {
//     int cnt = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             cnt = cnt + 1;
//         }
//     }

//     if (cnt == 2)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// } Time Complexity: O(N)

// ################ OPTIMAL APPROACH #########################

// bool checkPrime(int n)
// {
//     int cnt = 0;

//     for (int i = 1; i <= sqrt(n); i++)
//     {

//         if (n % i == 0)
//         {

//             cnt = cnt + 1;

//             if (n / i != i)
//             {
//                 cnt = cnt + 1;
//             }
//         }
//     }

//     if (cnt == 2)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// } Time Complexity: O(sqrt(N))

// ######################################################
// ############### PROBLEM: Find GCD/HCF ################
// ######################################################

// ################ BRUTE FORCE #########################

// int findGcd(int n1, int n2)
// {
//     int gcd = 1;

//     for (int i = 1; i <= min(n1, n2); i++)
//     {
//         if (n1 % i == 0 && n2 % i == 0)
//         {
//             gcd = i;
//         }
//     }

//     return gcd;
// } Time Complexity: O(min(N1, N2))

// ################ BETTER APPROACH #########################

// int findGcd(int n1, int n2)
// {

//     for (int i = min(n1, n2); i > 0; i--)
//     {
//         if (n1 % i == 0 && n2 % i == 0)
//         {
//             return i;
//             break;
//         }
//     }
//     return 1;
// }
// Time Complexity : O(min(N1, N2)) int main()

// ################ OPTIMAL APPROACH #########################
// Using Euclidean Algorithm

// int findGcd(int a, int b)
// {
//     // Continue loop as long as both
//     // a and b are greater than 0
//     while (a > 0 && b > 0)
//     {
//         // If a is greater than b,
//         // subtract b from a and update a
//         if (a > b)
//         {
//             // Update a to the remainder
//             // of a divided by b
//             a = a % b;
//         }
//         // If b is greater than or equal
//         // to a, subtract a from b and update b
//         else
//         {
//             // Update b to the remainder
//             // of b divided by a
//             b = b % a;
//         }
//     }
//     // Check if a becomes 0,
//     // if so, return b as the GCD
//     if (a == 0)
//     {
//         return b;
//     }
//     // If a is not 0,
//     // return a as the GCD
//     return a;
// }
