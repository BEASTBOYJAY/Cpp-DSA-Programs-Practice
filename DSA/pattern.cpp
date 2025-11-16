#include <iostream>
using namespace std;

/*For pattern
*****
*****
*****
*****
*****
*/
// int main()
// {
//     int a;
//     cout<<"Enter any number:";
//     cin>>a;

//     for (int i=0;i<a;i++)
//     {
//         for (int j=0;j<a;j++)
//         {
//             cout<<"*";

//         }
//         cout<<"\n";

//     }
// }

// ################################################################################

/*For pattern
 *
 **
 ***
 ****
 *****
 */

// int main()
// {
//     int a;
//     cout<<"Enter any number:";
//     cin>>a;

//     for (int i=0;i<a;i++)
//     {
//         for (int j=0;j<=i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<"\n";

//     }
// }

// ################################################################################

/*For pattern
1
12
123
1234
12345
*/

// int main()
// {
//     int a;
//     cout<<"Enter any number:";
//     cin>>a;

//     for (int i=1; i<=a;i++)
//     {
//         for (int j=1; j<=i;j++)
//         {
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// ################################################################################

/*For pattern
1
22
333
4444
55555
*/

// int main()
// {
//     int a;
//     cout<<"Enter any number:";
//     cin>>a;

//     for (int i=1;i<=a; i++)
//     {
//         for (int j=1; j<=i;j++)
//         {
//             cout<< i;
//         }
//         cout<<endl;
//     }
// }

// ################################################################################

/*For pattern
*****
****
***
**
*
*/

// int main()
// {
//     int a;
//     cout<<"Enter any number:";
//     cin>>a;
//     for (int i=a; i>0;i--)
//     {
//         for (int j=i;j>0;j--)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// ################################################################################

/*For pattern
12345
1234
123
12
1
*/

// int main()
// {
//     int a;
//     cout<< "Enter any number:";
//     cin>> a;

//     for (int i=0; i<a; i++)
//     {
//         for (int j=a ;j>i; j--)
//         {
//             cout <<a-j+1;
//         }
//         cout<<endl;
//     }
// }

// ################################################################################

/*For pattern
 *
 ***
 *****
 *******
 *********
 ***********
 */

// int main()
// {
//     int a;
//     cout<< "Enter any number:";
//     cin>> a;

//     for (int i=0;i<a;i++)
//     {
//         int temp;
//         temp= i*2+1;
//         for(int k=a-i-1; k>0;k--)
//             {
//                 cout<<" ";
//             }
//         for (int j=0; j<temp;j++)
//         {

//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// ################################################################################

/*For pattern
***********
*********
*******
*****
***
*
*/

// int main()
// {
//     int a;
//     cout<< "Enter any number:";
//     cin>>a;

//     for (int i=0;i<=a;i++)
//     {
//         for (int k =0; k<i; k++)
//         {
//             cout <<" ";
//         }
//         for (int j=(a-i)*2+1;j>0;j--)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// ################################################################################

/*For pattern
 *
 ***
 *****
 *******
 *********
 ***********
 *********
 *******
 *****
 ***
 *
 */

// int main()
// {
//     int a;
//     cout<< "Enter any number:";
//     cin>> a;

//     for (int i=0;i<a;i++)
//     {
//         for(int j=a-i;j>0;j--)
//         {
//             cout<<" ";
//         }
//         int temp;
//         temp=i*2+1;
//         for (int k=0;k<temp;k++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     for (int i=0;i<=a;i++)
//     {
//         for(int j=i;j>0;j--)
//         {
//             cout<<" ";
//         }
//         int temp;
//         temp=(a-i)*2+1;
//         for (int k=temp;k>0;k--)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// ################################################################################

/*For pattern
 *
 **
 ***
 ****
 *****
 ****
 ***
 **
 *
 */

// int main()
// {
//     int a;
//     cout<<"Enter any number:";
//     cin>>a;

//     for(int i=1;i<=a;i++)
//     {
//         for (int j=0;j<i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     for(int i=a+1;i>0;i--)
//     {
//         for (int j=0;j<i;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }

// }

// ################################################################################

/*For pattern
1
01
101
0101
10101
*/

// int main()
// {
//     int a;
//     cout<<"Enter any number:";
//     cin>>a;
//       int start =1;

//       for(int i=0;i<a;i++){
//           if(i%2 ==0) start = 1;
//           else start = 0;
//           for(int j=0;j<=i;j++){
//               cout<<start;
//               start = 1-start;
//           }
//         cout<<endl;
//       }
// }

// ################################################################################

/*For pattern
1      1
12    21
123  321
12344321

*/

// int main()
// {
//     int a;
//     cout<<"Enter any number:";
//     cin>>a;
//     int space=2*(a-1);

//     for (int i=1;i<=a;i++)
//     {
//         for (int j=1;j<=i;j++)
//         {
//             cout<<j;
//         }
//         for(int j = 1;j<=space;j++){
//               cout<<" ";
//           }
//         for (int l=i;l>0;l--)
//         {
//             cout<<l;
//         }
//         cout<<endl;
//         space-=2;
//     }
// }

// ################################################################################

/*For pattern
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

// int main()
// {
//     int a;
//     cout<<"Enter any number:";
//     cin>>a;

//     int temp=1;
//     for(int i=1;i<=a;i++)
//     {
//         for(int j=i;j>0;j--)
//         {
//             cout<<temp++<<" ";
//         }
//         cout<<endl;
//     }

// }

// ################################################################################

/*For pattern
A
AB
ABC
ABCD
ABCDE

*/

// int main()
// {
//     int a;
//     cout<<"Enter any number:";
//     cin>>a;

//     for (int i=0;i<a;i++)
//     {
//         for(char ch = 'A'; ch<='A'+i;ch++)
//         {
//           cout<<ch<<" ";
//         }
//         cout<<endl;
//     }
// }

// ################################################################################

/*For pattern

ABCDE
ABCD
ABC
AB
A
*/

// int main()
// {
//     int a;
//     cout<<"Enter any number:";
//     cin>>a;
//     for (int i=0;i<=a;i++)
//     {
//         for (char j='A';j<='A'+(a-i-1);j++ )
//         {
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// ################################################################################

/*For pattern

A
BB
CCC
DDDD
EEEEE
*/

// int main()
// {
//     int a;
//     cout<<"Enter any number:";
//     cin>>a;

//     char temp = 'A';
//     for (int i=1;i<=a;i++)
//     {
//         for (int j=i;j>0;j--)
//         {
//             cout<<temp;
//         }
//         temp++;
//         cout<<endl;
//     }
// }

// ################################################################################

/*For pattern
     A
    ABA
   ABCBA
  ABCDCBA
*/

// int main()
// {
//     int a;
//     cout<< "Enter any number:";
//     cin>> a;

//     for (int i=0;i<a;i++)
//     {
//         for(int k=a-i-1; k>0;k--)
//             {
//                 cout<<" ";
//             }
//         char ch = 'A';
//           int breakpoint = (2*i+1)/2;
//           for(int j=1;j<=2*i+1;j++){

//               cout<<ch;
//               if(j <= breakpoint) ch++;
//               else ch--;
//           }

//           cout<<endl;
//     }
// }

// ################################################################################

/*For pattern
E
D E
C D E
B C D E
A B C D E
*/

// int main()
// {
//      int a;
//      cout << "Enter any number:";
//      cin >> a;

//      for (int i = a - 1; i >= 0; i--)
//      {
//           for (char j = 'A' + i; j <= 'A' + (a - 1); j++)
//           {
//                cout << j << " ";
//           }
//           cout << endl;
//      }
// }

// ################################################################################

/*For pattern
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/

// int main()
// {
//      int a;
//      cout << "Enter any number:";
//      cin >> a;

//      int space_1 = 0;
//      for (int i = a; i > 0; i--)
//      {
//           for (int j = 1; j <= i; j++)
//           {
//                cout << "*";
//           }

//           for (int j = 1; j <= space_1; j++)
//           {
//                cout << " ";
//           }

//           for (int l = i; l > 0; l--)
//           {
//                cout << "*";
//           }

//           cout << endl;
//           space_1 += 2;
//      }

//      int space = 2 * (a - 1);
//      for (int i = 1; i <= a; i++)
//      {
//           for (int j = 1; j <= i; j++)
//           {
//                cout << "*";
//           }
//           for (int j = 1; j <= space; j++)
//           {
//                cout << " ";
//           }
//           for (int l = i; l > 0; l--)
//           {
//                cout << "*";
//           }
//           cout << endl;
//           space -= 2;
//      }
// }

// ################################################################################

/*For pattern
 *        *
 **      **
 ***    ***
 ****  ****
 **********
 ****  ****
 ***    ***
 **      **
 *        *
 */

// int main()
// {
//      int a;
//      cout << "Enter any number:";
//      cin >> a;

//      int space = 2 * (a - 1);
//      for (int i = 1; i < a; i++)
//      {
//           for (int j = 1; j <= i; j++)
//           {
//                cout << "*";
//           }
//           for (int j = 1; j <= space; j++)
//           {
//                cout << " ";
//           }
//           for (int l = i; l > 0; l--)
//           {
//                cout << "*";
//           }
//           cout << endl;
//           space -= 2;
//      }

//      int space_1 = 0;
//      for (int i = a; i > 0; i--)
//      {
//           for (int j = 1; j <= i; j++)
//           {
//                cout << "*";
//           }

//           for (int j = 1; j <= space_1; j++)
//           {
//                cout << " ";
//           }

//           for (int l = i; l > 0; l--)
//           {
//                cout << "*";
//           }

//           cout << endl;
//           space_1 += 2;
//      }
// }

// ################################################################################

/*For pattern
* * * *

*     *

*     *

* * * *
 */

// int main()
// {
//      int a;
//      cout << "Enter any number:";
//      cin >> a;

//      for (int i = 0; i < a; i++)
//      {

//           // inner loop for printing the stars at borders only.
//           for (int j = 0; j < a; j++)
//           {

//                if (i == 0 || j == 0 || i == a - 1 || j == a - 1)
//                     cout << "*";

//                else
//                     cout << " ";
//           }
//           cout << endl;
//      }
// }

// ################################################################################

/*For pattern
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
 */

// int main()
// {
//      int a;
//      cout << "Enter any number:";
//      cin >> a;
//      for (int i = 0; i < 2 * a - 1; i++)
//      {

//           for (int j = 0; j < 2 * a - 1; j++)
//           {

//                int top = i;
//                int bottom = j;
//                int right = (2 * a - 2) - j;
//                int left = (2 * a - 2) - i;

//                cout << (a - min(min(top, bottom), min(left, right))) << " ";
//           }

//           cout << endl;
//      }
// }