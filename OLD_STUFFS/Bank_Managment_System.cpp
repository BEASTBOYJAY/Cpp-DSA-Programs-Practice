#include <iostream>
#include <string>
using namespace std;
// name---id---contact---ifsc code
string arr1[30], arr2[30], arr3[30], arr4[30];
// money money money
int arr5[30];
int total = 0;

void ADD()
{
    int no;
    cout << "Enter the no. account you want to enter: " << endl;
    cin >> no;
    if (total == 0)
    {
        total = total + no;
        for (int i = 0; i < no; i++)
        {
            cout << "----No.of bank details to be enter: " << i + 1 << "----" << endl
                 << endl;
            cout << "Enter the name of bank account holder: " << endl;
            cin >> arr1[i];
            cout << "Enter the unique ID for the bank account: " << endl;
            cin >> arr2[i];
            cout << "Enter the contact details of the bank accout: " << endl;
            cin >> arr3[i];
            cout << "Enter the IFSC code: " << endl;
            cin >> arr4[i];
            cout << "Enter the amount of MONEY you have deposited: " << endl;
            cin >> arr5[i];
        }
    }

    else
    {
        for (int i = 0; i < no; i++)
        {
            cout << "----No.of bank details to be enter: " << i + 1 << "----" << endl
                 << endl;
            cout << "Enter the name of bank account holder: " << endl;
            cin >> arr1[i];
            cout << "Enter the unique ID for the bank account: " << endl;
            cin >> arr2[i];
            cout << "Enter the contact details of the bank accout: " << endl;
            cin >> arr3[i];
            cout << "Enter the IFSC code: " << endl;
            cin >> arr4[i];
            cout << "Enter the amount of MONEY you have deposited: " << endl;
            cin >> arr5[i];

            total = total + no;
        }
    }
}

void SHOW()
{
    if (total == 0)
    {
        cout << "There is no data to dispaly" << endl;
    }
    else
    {
        for (int i = 0; i < total; i++)
        {
            cout << "ACCOUNT HOLDER NAME: " << arr1[i] << endl;
            cout << "ID OF ACCOUNT: " << arr2[i] << endl;
            cout << "CONTACT DETAILS: " << arr3[i] << endl;
            cout << "IFSC code: " << arr4[i] << endl;
            cout << "AMOUNT OF MONEY IN ACCOUNT: " << arr5[i] << endl<<endl<<endl;
        }
    }
}

void SEARCH()
{
    if (total == 0)
    {
        cout << "NO DATA TO SEARCH FROM" << endl;
    }
    else
    {
        string idcheck;
        cout << "Enter the id to search the account: ";
        cin >> idcheck;
        for (int i=0; i < total; i++)
        {
            if (arr2[i] == idcheck)
            {
                cout << "ACCOUNT HOLDER NAME: " << arr1[i] << endl;
                cout << "ID OF ACCOUNT: " << arr2[i] << endl;
                cout << "CONTACT DETAILS: " << arr3[i] << endl;
                cout << "IFSC code: " << arr4[i] << endl;
                cout << "AMOUNT OF MONEY IN ACCOUNT: " << arr5[i] << endl;
            }
        }
    }
}

void DEP()
{
    int madd;
    string idcheck;
    if (total == 0)
    {
        cout<<"NO DATA !!!"<<endl;
    }
    else
    {
        cout << "\nEnter the ID of the account you want to deposit the MONEY: ";
        cin >> idcheck;
        cout << "\nEnter the amount MONEY to be deposited: ";
        cin >> madd;
        for (int i=0; i < total; i++)
        {
            if (arr2[i] == idcheck)
            {
                arr5[i] = arr5[i] + madd;
                cout << "\n\n------YOUR MONEY HAS BEEN DEPOSITED TO THE BANK ACCOUNT !!!------" << endl;
                cout << "\nYOU HAVE CURRENTLY " << arr5[i] << " AMOUNT OF MONEY IN THE ACCOUNT " << endl;
            }
        }
    }
}

void WIT()
{
    int madd;
    string idcheck;
    if (total == 0)
    {
        cout<<"NO DATA !!!"<<endl;
    }
    else
    {
        cout << "\nEnter the ID of the account you want to withdraw the MONEY: ";
        cin >> idcheck;
        cout << "\nEnter the amount MONEY to be withdrawed: ";
        cin >> madd;
        for (int i=0; i < total; i++)
        {
            if (arr2[i] == idcheck)
            {
                if(arr5[i]<madd)
                {
                    cout<<"------INSUFFICIENT BALANCE------"<<endl;
                }
                else
                {
                    arr5[i] = arr5[i] - madd;
                    cout << "\n------YOUR MONEY HAS BEEN DEPOSITED TO THE BANK ACCOUNT !!!------" << endl;
                    cout << "\nYOU HAVE CURRENTLY " << arr5[i] << " AMOUNT OF MONEY IN THE ACCOUNT " << endl;
                }
                
            }
            else
            {
                cout<<"------INCORRECT ID------";
            }
        }
    }
}

int main()
{
    int choice;
m:
    cout << "\n\n\t\t-------BANK MANAGMENT SYSTEM-------" << endl
         << endl;
    cout << "1) TO ADD BANK ACCOUNT" << endl;
    cout << "2) TO SHOW ALL THE BANK ACCOUNT DETAILS" << endl;
    cout << "3) TO SEARCH THE BANK ACCOUNT" << endl;
    cout << "4) TO DEPOSIT MONEY INTO BANK ACCOUNT" << endl;
    cout << "5) TO WITHDRAW MONEY FROM BANK ACCOUNT" << endl;
    cout << "6) EXIT" << endl;

    cout << "\n\nChoose what operation you need to do: " << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        ADD();
        break;

    case 2:
        SHOW();
        break;

    case 3:
        SEARCH();
        break;

    case 4:
        DEP();
        break;

    case 5:
        WIT();
        break;

    case 6:
        exit(0);
        break;

    default:
        cout << "\n\n\t\t-------INVAILD INPUT !!!-------" << endl;
    }
    goto m;
}