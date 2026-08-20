#include <iostream>
using namespace std;
#include <vector>



// ######################################### BRUTE FORCE #########################################

// void product_array(vector<int>& nums)
// {
//     int size=nums.size();
//     vector<int> output;
//     for (int i=0;i<size;i++)
//     {
//         int product = 1;
//         for(int j=0; j<size; j++)
//         {
//             if(i == j) continue;
//             product *= nums[j];
//         }
//         output.push_back(product);
//     }

//     cout<<"Answer Array: ";
//     for (int val : output) {
//         cout << val << " ";
//     }
//     cout << endl;
// }


// int main()
// {   
//     vector<int> nums={1,2,3,4};

//     product_array(nums);
// }



// ######################################### BETTER APPROACH #########################################


// void product_array(vector<int>& nums)
// {
//     int size=nums.size();
//     vector<int> output(size);
//     vector<int> leftproduct(size);
//     vector<int> rightproduct(size);
    
//     leftproduct[0]=1;

//     for (int i=1;i<size;i++)
//     {
//         leftproduct[i]=leftproduct[i-1] * nums[i-1];
        
//     }

//     rightproduct[size-1]=1;

//     for (int i=size-2;i>=0;i--)
//     {
//         rightproduct[i]=rightproduct[i+1] * nums[i+1];
//     }


//     for(int i=0; i<size; i++){
//             output[i] = leftproduct[i] * rightproduct[i];
//         }


//     cout<<"Answer Array: ";
//     for (int val : output) {
//         cout << val << " ";
//     }
//     cout << endl;
// }


// int main()
// {   
//     vector<int> nums={1,2,3,4};

//     product_array(nums);
// }



// ######################################### OPTIMAL APPROACH #########################################



void product_array(vector<int>& nums)
{
    int size=nums.size();
    vector<int> output(size);

    output[0]=1;

    for(int i=1;i<size;i++)
    {
        output[i]=output[i-1] * nums[i-1];
    }

    int right=1;

    for (int i=size-1;i>=0;i--)
    {
        output[i] *= right;
        right *=nums[i];
    }


    cout<<"Answer Array: ";
    for (int val : output) {
        cout << val << " ";
    }
    cout << endl;
}


int main()
{   
    vector<int> nums={1,2,3,4};

    product_array(nums);
}