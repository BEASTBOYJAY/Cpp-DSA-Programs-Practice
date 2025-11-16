#include <iostream>
using namespace std;

/* sum of 1st n natural no.*/

// int sum(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//     else
//     {
//         return sum(n-1)+n;
//     }
// }

// int main()
// {
//     int x;
//     cin>>x;
//     cout<<sum(x);
//     return 0;
// }
// or use n(n+1)/2

// or

// int sum(int n)
// {
//     int i,s=0;
//     for(i=1;n>=i;++i)
//     {
//         s=s+i;

//     }
//     return s;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     cout<<sum(n);
//     return 0;
// }

/*factorial of a number*/

// int fact(int n)
// {
//     if(n==0)
//     {
//         return 1;
//     }
//     else
//     {
//         return fact(n-1)*n;
//     }
// }

// int main()
// {
//     int n;
//     cin>>n;
//     cout<<fact(n);
//     return 0;
// }

// or

// int fact(int n)
// {
//     int i,f=1;
//     if(n==0)
//     {
//         return 1;
//     }
//     else
//     {
//         for(i=1;i<=n;++i)
//         {
//             f=f*i;
//         }
//         return f;
//     }
// }

// int main()
// {
//     int n;
//     cin>>n;
//     cout<<fact(n);
//     return 0;
// }

/*power using recursion*/

// int pow(int m,int n)
// {
//     if (n !=0){
//         return (m*pow(m,n-1));
//     }
//     else{
//         return 1;
//     }
// }

// int main()
// {
//     int a,b;
//     cout<<"no."<<endl;
//     cin>>a;
//     cout<<"its power"<<endl;
//     cin>>b;
//     int result = pow(a,b);
//     cout<< result;
//     return 0;
// }

// or

// int pow(int m,int n)
// {
//     int o=1;
//     if(n!=0)
//     {
//         for(int i=0;i!=n;i++)
//         {
//             o*=m;
//         }
//     return o;
//     }
//     else
//     return 1;
// }

// int main()
// {
//     int a,b;
//     cout<<"no."<<endl;
//     cin>>a;
//     cout<<"its power"<<endl;
//     cin>>b;
//     int x=pow(a,b);
//     cout << x;
//     return 0;
// }

/**************** Taylor series *****************/
// e^x=1+x/1+x^2/2!+x^3/3!.....n times

// double Taylor(int x,int n)
// {
//     static double p=1,f=1;
//     double r;

//     if(n==0)
//     {
//         return 1;
//     }
//     else
//     {
//         r=Tailor(x,n-1);
//         p=p*x;
//         f=f*n;

//         return r+p/f;
//     }
// }

// int main()
// {
//     double x,n;
//     cout<<"enter the no."<<endl;
//     cin>>x;
//     cout<<"enter how many times it will do operation"<<endl;
//     cin>>n;
//     double result;
//     result=Tailor(x,n);
//     cout<<"result is "<<result;
//     return 0;
// }

/***********Taylor series using Horner's Rule*************/

// using loop

// double Tailor(double x,double n)
// {
//     double s=1;
//     for(;n>0;n--)
//     {
//         s=(1+(x/n)*s);
//     }
//     return s;
// }

// int main()
// {
//     double result;
//     result=Tailor(4,15);
//     cout<<result;
// }

// double Tailor(double x,double n)
// {
//     static double s=1;
//     if(n==0)
//     return s;
//     s=1+((x/n)*s);
//     return Tailor(x,n-1);
// }

// int main()
// {
//     double result;
//     result=Tailor(4,15);
//     cout<<result;
// }

/**********Fibonacci series**********/

// int fib(int n)
// {
//     if(n<=1)
//     {
//         return n;
//     }
//     else
//     {
//         return (fib(n-2)+fib(n-1));
//     }

// }

// int main()
// {
//     int n;
//     cout<<"enter the which Fibonacci positoned number your want"<<endl;
//     cin>>n;
//     cout<<fib(n);
//     return 0;
// }

// USING LOOP

// int fib(int n)
// {
//     int t0=0,t1=1,s=0;
//     if(n<=1)
//     {
//         return n;
//     }
//     else
//     {
//         for(int i=2;i<=n;i++)
//         {
//             s=t0+t1;
//             t0=t1;
//             t1=s;
//         }
//     }
//     return s;
// }

// int main()
// {
//     int n;
//     cout<<"enter the which Fibonacci positoned number your want"<<endl;
//     cin>>n;
//     cout<<fib(n);
//     return 0;
// }

// int f[10];
// int fib(int n)
// {
//     if(n<=1)
//     {
//         f[n]=n;
//         return n;
//     }
//     else
//     {
//         if(f[n-2]==-1)
//             f[n-2]=fib(n-2);
//         if(f[n-1]==-1)
//             f[n-1]=fib(n-1);
//         f[n]=f[n-2]+f[n-1];
//         return f[n-2]+f[n-1];
//     }

// }

// int main()
// {
//     int n;
//     for(int i=0;i<10;i++)
//     {
//         f[i]=-1;
//     }
//     cout<<"enter the which Fibonacci positoned number your want"<<endl;
//     cin>>n;
//     cout<<fib(n);
// }

/**********combination formula nCr***********/

// int fact(int n)
// {
//     if(n==0)
//     {
//         return 1;
//     }
//     else
//     {
//         return fact(n-1)*n;
//     }
// }

// int nCr(int w,int v)
// {
//     int t1,t2,t3;
//     t1=fact(w);
//     t2=fact(v);
//     t3=fact(w-v);
//     return t1/(t2*t3);
// }

// int main()
// {
//     int n,r;
//     cout<<"total no. of objects in a set"<<endl;
//     cin>>n;
//     cout<<"no. of choosing objects from the set"<<endl;
//     cin>>r;
//     cout<<"combinations will be"<<endl;
//     cout<<nCr(n,r);
// }

/******TOWER OF HANOI******/
// int TOH(int n,int a,int b,int c)
// {
//     if(n>0)
//     {
//         TOH(n-1,a,c,b);
//         cout<<a<<" to "<<c<<endl;
//         TOH(n-1,b,a,c);
//     }
// }

// int main()
// {
//     TOH(4,1,2,3);
//     return 0;
// }

