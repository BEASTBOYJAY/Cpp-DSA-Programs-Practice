#include <iostream>
using namespace std;

/************DIGONAL MATRIX********
using arrya A[3,7,4,9,6]
  [3,0,0,0,0]
  [0,7,0,0,0]
m=[0,0,4,0,0]
  [0,0,0,9,0]
  [0,0,0,0,6]
*/

// class Diagonal
// {
// private:
//     int n;
//     int *A;

// public:
//     Diagonal(int n)
//     {
//         this->n = n;
//         A = new int[n];
//     }
//     void set(int i, int j, int x);
//     int get(int i, int j);
//     void Display();
//     void distructor();
// };

// void Diagonal::set(int i, int j, int x)
// {
//     if (i == j)
//     {
//         A[i - 1] = x;
//     }
// }

// int Diagonal::get(int i, int j)
// {
//     if (i == j)
//     {
//         return A[i - 1];
//     }
//     else
//         return 0;
// }

// void Diagonal::Display()
// {
//     for (int i = 0; i <= n; i++)
//     {
//         for (int j = 0; j <= n; j++)
//         {
//             if (i == j)
//             {
//                 cout << A[i - 1] << " ";
//             }
//             else
//             {
//                 cout << "0 ";
//             }
//         }
//         cout << endl;
//     }
// }

// void Diagonal::distructor()
// {
//     delete[] A;
// }

// int main()
// {
//     Diagonal d(4);
//     d.set(1, 1, 5);
//     d.set(2, 2, 8);
//     d.set(3, 3, 9);
//     d.set(4, 4, 12);

//     d.Display();

//     return 0;
// }

/*******Lower triangular matrix********
   1      2    3     4    5
 1[A11,   0,   0,    0,     0]
 2[A21,  A22,  0,    0,     0]
 3[A31,  A32,  A33,  0,     0]      5X5
 4[A41,  A42,  A43,  A44,   0]
 5[A51,  A52,  A53,  A54, A55]

    M[i,j]=0 if i<j
    M[i,j]=non-0 if i>=j
    non-zero=1+2+3+4+5
            =1+2+3....n=n(n+1)
                        ______
                           2

    zero elemnts=n^2-n(n+1)
                     ______
                        2

    *********FOR ROW MAJOR MAPPING**********

    Index(A[i][j])=[i(i-1)]+j-1
                   ________
                       2

    ********FOR COLUMN MAJOR MAPPING********


    Index=(A[i][j])=[n(j-1)-(j-2)(j-2)]+(i-j)
                            __________
                                2


*/

class LTMatrix
{
private:
    int n;
    int *A;

public:
    LTMatrix(int n)
    {
        this->n = n;
        A = new int[n * (n + 1) / 2];
    }
    ~LTMatrix() { delete[] A; }
    void Display(bool row = true);
    void setRowMajor(int i, int j, int x);
    void setColMajor(int i, int j, int x);
    int getRowMajor(int i, int j);
    int getColMajor(int i, int j);
    int getN() { return n; }
};

void LTMatrix::setRowMajor(int i, int j, int x)
{
    if (i >= j)
    {
        int index = ((i * (i - 1)) / 2) + j - 1;
        A[index] = x;
    }
}

void LTMatrix::setColMajor(int i, int j, int x)
{
    if (i >= j)
    {
        int index = (n * (j - 1) - (((j - 2) * (j - 1)) / 2)) + (i - j);
        A[index] = x;
    }
}

int LTMatrix::getRowMajor(int i, int j)
{
    if (i >= j)
    {
        int index = ((i * (i - 1)) / 2) + j - 1;
        return A[index];
    }
    else
    {
        return 0;
    }
}

int LTMatrix::getColMajor(int i, int j)
{
    if (i >= j)
    {
        int index = (n * (j - 1) - (((j - 2) * (j - 1)) / 2)) + (i - j);
        return A[index];
    }
    else
    {
        return 0;
    }
}

void LTMatrix::Display(bool row)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= j)
            {
                if (row)
                {
                    cout << getRowMajor(i, j) << " ";
                }
                else
                {
                    cout << getColMajor(i, j) << " ";
                }
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}

int main()
{

    LTMatrix rm(4);
    rm.setRowMajor(1, 1, 1);
    rm.setRowMajor(2, 1, 2);
    rm.setRowMajor(2, 2, 3);
    rm.setRowMajor(3, 1, 4);
    rm.setRowMajor(3, 2, 5);
    rm.setRowMajor(3, 3, 6);
    rm.setRowMajor(4, 1, 7);
    rm.setRowMajor(4, 2, 8);
    rm.setRowMajor(4, 3, 9);
    rm.setRowMajor(4, 4, 10);

    rm.Display();
    cout << endl;

    LTMatrix cm(4);
    cm.setColMajor(1, 1, 1);
    cm.setColMajor(2, 1, 2);
    cm.setColMajor(2, 2, 3);
    cm.setColMajor(3, 1, 4);
    cm.setColMajor(3, 2, 5);
    cm.setColMajor(3, 3, 6);
    cm.setColMajor(4, 1, 7);
    cm.setColMajor(4, 2, 8);
    cm.setColMajor(4, 3, 9);
    cm.setColMajor(4, 4, 10);

    cm.Display(false);

    return 0;
}





/*******Upper triangular matrix********
   1        2      3      4     5
 1[A11,   A12,   A13,    A14,  A15]
 2[0,     A22,   A23,    A24,  A25]
 3[0,      0,    A33,    A34,  A35]      5X5
 4[0,      0,     0,     A44,  A45]
 5[0,      0,     0,      0,   A55]


non zero=n(n+1)
         ______
            2

zero = n(n-1)
        _____
          2 


*********ROW MAJOR MAPPING***********

Index(A[i][j])=[(i-1)n-(i-2)(i-1)] +(j-i)
                       ___________
                            2


*********COLUMN MAJOR MAPPING*********

Index(A[i][j])=[j(j-1)] +i-1
               ________
                  2


*/

// ******************************************************************************************************

/*

*********SYMMETRIC MATRIX**********
  1   2   3   4   5
1[2,  2,  2,  2,  2]
2[2,  3,  3,  3,  3]
3[2,  3,  4,  4,  4]
4[2,  3,  4,  5,  5]
5[2,  3,  4,  5,  6]


if M[i,j]=M[j,i]

can be represented as:
Lower triangular
Upper triangular


*/


//*************************************************************************************************************


/*

*********TRIGONAL MATRIX***********
  1      2    3   4    5
1[a11 , a12 , 0 , 0 ,  0]
2[a21 , a22, a23, 0 ,  0]
3[0   , a32, a33,a34,  0]
4[0   ,  0 , a43,a44,a45]
5[0   ,  0 ,   0,a54,a55]

main diagonal=i-j=0
lower diagonal=i-j=1
upper diagonal=i-j=-1

case 1:if i-j=1,index=i-1
case 2:if i-j=0,index=n-1+i-1
case 3:if i-j=-1,index=2n-1+i-1

*/



