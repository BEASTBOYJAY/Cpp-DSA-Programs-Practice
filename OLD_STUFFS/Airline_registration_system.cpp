#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

void mainMenu();

class Managment
{
    public:
    Managment()
    {
        mainMenu();
    }
};
class details
{
    public:
    static string name,gender;
    int phoneNo;
    int age;
    string add;
    static int cID;
    char arr[100];


    void information()
    {
        cout<<"\n Enter customer ID:"<<endl;
        cin>>cID;
        cout<<"\n Enter name:";
        cin>>name;
        cout<<"\nEnter gender:"<<endl;
        cin>>gender;
        cout<<"\nEnter age:"<<endl;
        cin>>age;
        cout<<"\n Enter your address:"<<endl;
        cin>>add;
        cout<<"YOUR DETAILS ARE SAVED  !!!\n"<<endl;

    }
};
int details::cID;
string details::name;
string details::gender;

class registreation
{
    public:
    static int choice;
    int choice1;
    int back;
    static float charges;

    void flights()
    {
        cout<<"\n WELCOME TO THE AIRLINES !!!"<<endl;
        cout<<"1 for dubai"<<endl;
        cout<<"2 for canada"<<endl;
        cout<<"3 for UK"<<endl;
        cout<<"4 for USA"<<endl;
        cout<<"5 for austrilia"<<endl;
        cout<<"6 for europe"<<endl;
        cout<<"Press the no. for which you want to book the fight to:"<<endl;
        cin>>choice;

        switch (choice)
        {
            case 1:
            {
                cout<<"_____________________WELCOME TO DUBAI EMRATES___________________"<<endl;
                cout<<"Your comfort is our priority\n"<<endl;
                cout<<"-----ENJOY-----"<<endl;

                cout<<"following are the flights\n"<<endl;
                cout<<"1.DUB - 312"<<endl;
                cout<<"\t 08-03-2023  8:00AM 10HRS Rs.1000"<<endl;
                cout<<"2.DUB - 993"<<endl;
                cout<<"\t 13-05-2023  3:00PM 11HRS Rs.10000"<<endl;
                cout<<"3.DUB - 281"<<endl;
                cout<<"\t 32-01-2024  1:00PM  2HRS Rs.100000"<<endl;

                cout<<"\t Select the flight you want to book"<<endl;
                cin>>choice1;

                if(choice1==1)
                {
                    charges=1000;
                    cout<<"you have succesfully booked the DUB - 312 "<<endl;
                    cout<<"you can go back to main menu to get the tickets"<<endl;
                }
                else if(choice1==2)
                {
                    charges=10000;
                    cout<<"you have succesfully booked the DUB - 993 "<<endl;
                    cout<<"you can go back to main menu to get the tickets"<<endl;
                }
                else if(choice1==3)
                {
                    charges=100000;
                    cout<<"you have succesfukky booked the DUB - 281 "<<endl;
                    cout<<"you can go back to main menu to get the tickets"<<endl;
                }
                else
                {
                    cout<<"INVALID INPUT!!! enter 1, 2 or 3"<<endl;
                    flights();
                }
                cout<<"press any key to go back to the main menu:"<<endl;
                cin>>back;
                if(back==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
            }
            case 2:
            {
                cout<<"_____________________WELCOME TO CANADA EMRATES___________________"<<endl;
                cout<<"Your comfort is our priority\n"<<endl;
                cout<<"-----ENJOY-----"<<endl;

                cout<<"following are the flights\n"<<endl;
                cout<<"1.CAN - 312"<<endl;
                cout<<"\t 08-03-2023  8:00AM 10HRS Rs.1000"<<endl;
                cout<<"2.CAN - 993"<<endl;
                cout<<"\t 13-05-2023  3:00PM 11HRS Rs.10000"<<endl;
                cout<<"3.CAN - 281"<<endl;
                cout<<"\t 32-01-2024  1:00PM  2HRS Rs.100000"<<endl;

                cout<<"\t Select the flight you want to book"<<endl;
                cin>>choice1;

                if(choice1==1)
                {
                    charges=1000;
                    cout<<"you have succesfully booked the CAN - 312 "<<endl;
                    cout<<"you can go back to main menu to get the tickets"<<endl;
                }
                else if(choice1==2)
                {
                    charges=10000;
                    cout<<"you have succesfully booked the CAN - 993 "<<endl;
                    cout<<"you can go back to main menu to get the tickets"<<endl;
                }
                else if(choice1==3)
                {
                    charges=10000;
                    cout<<"you have succesfully booked the CAN - 281 "<<endl;
                    cout<<"you can go back to main menu to get the tickets"<<endl;
                }
                else
                {
                    cout<<"INVALID INPUT!!! enter 1, 2 or 3"<<endl;
                    flights();
                }
                cout<<"press any key to go back to the main menu:"<<endl;
                cin>>back;
                if(back==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
            }
            case 3:
            {
                cout<<"_____________________WELCOME TO UK EMRATES___________________"<<endl;
                cout<<"Your comfort is our priority\n"<<endl;
                cout<<"-----ENJOY-----"<<endl;

                cout<<"following are the flights\n"<<endl;
                cout<<"1.UK - 312"<<endl;
                cout<<"\t 08-03-2023  8:00AM 10HRS Rs.1000"<<endl;
                cout<<"2.UK - 993"<<endl;
                cout<<"\t 13-05-2023  3:00PM 11HRS Rs.10000"<<endl;
                cout<<"3.UK - 281"<<endl;
                cout<<"\t 32-01-2024  1:00PM  2HRS Rs.100000"<<endl;

                cout<<"\t Select the flight you want to book"<<endl;
                cin>>choice1;

                if(choice1==1)
                {
                    charges=1000;
                    cout<<"you have succesfully booked the UK - 312 "<<endl;
                    cout<<"you can go back to main menu to get the tickets"<<endl;
                }
                else if(choice1==2)
                {
                    charges=10000;
                    cout<<"you have succesfully booked the UK - 993 "<<endl;
                    cout<<"you can go back to main menu to get the tickets"<<endl;
                }
                else if(choice1==3)
                {
                    charges=100000;
                    cout<<"you have succesfukky booked the UK - 281 "<<endl;
                    cout<<"you can go back to main menu to get the tickets"<<endl;
                }
                else
                {
                    cout<<"INVALID INPUT!!! enter 1, 2 or 3"<<endl;
                    flights();
                }
                cout<<"press any key to go back to the main menu:"<<endl;
                cin>>back;
                if(back==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
            }
            case 4:
            {
                cout<<"_____________________WELCOME TO USA EMRATES___________________"<<endl;
                cout<<"Your comfort is our priority\n"<<endl;
                cout<<"-----ENJOY-----"<<endl;

                cout<<"following are the flights\n"<<endl;
                cout<<"1.USA - 312"<<endl;
                cout<<"\t 08-03-2023  8:00AM 10HRS Rs.1000"<<endl;
                cout<<"2.USA - 993"<<endl;
                cout<<"\t 13-05-2023  3:00PM 11HRS Rs.10000"<<endl;
                cout<<"3.USA - 281"<<endl;
                cout<<"\t 32-01-2024  1:00PM  2HRS Rs.100000"<<endl;

                cout<<"\t Select the flight you want to book"<<endl;
                cin>>choice1;

                if(choice1==1)
                {
                    charges=1000;
                    cout<<"you have succesfully booked the USA - 312 "<<endl;
                    cout<<"you can go back to main menu to get the tickets"<<endl;
                }
                else if(choice1==2)
                {
                    charges=10000;
                    cout<<"you have succesfully booked the USA - 993 "<<endl;
                    cout<<"you can go back to main menu to get the tickets"<<endl;
                }
                else if(choice1==3)
                {
                    charges=100000;
                    cout<<"you have succesfukky booked the USA - 281 "<<endl;
                    cout<<"you can go back to main menu to get the tickets"<<endl;
                }
                else
                {
                    cout<<"INVALID INPUT!!! enter 1, 2 or 3"<<endl;
                    flights();
                }
                cout<<"press any key to go back to the main menu:"<<endl;
                cin>>back;
                if(back==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
            }
            case 5:
            {
                cout<<"_____________________WELCOME TO AUSTRILIA EMRATES___________________"<<endl;
                cout<<"Your comfort is our priority\n"<<endl;
                cout<<"-----ENJOY-----"<<endl;

                cout<<"following are the flights\n"<<endl;
                cout<<"1.AUS - 312"<<endl;
                cout<<"\t 08-03-2023  8:00AM 10HRS Rs.1000"<<endl;
                cout<<"2.AUS - 993"<<endl;
                cout<<"\t 13-05-2023  3:00PM 11HRS Rs.10000"<<endl;
                cout<<"3.AUS - 281"<<endl;
                cout<<"\t 32-01-2024  1:00PM  2HRS Rs.100000"<<endl;

                cout<<"\t Select the flight you want to book"<<endl;
                cin>>choice1;

                if(choice1==1)
                {
                    charges=1000;
                    cout<<"you have succesfully booked the AUS - 312 "<<endl;
                    cout<<"you can go back to main menu to get the tickets"<<endl;
                }
                else if(choice1==2)
                {
                    charges=10000;
                    cout<<"you have succesfully booked the AUS - 993 "<<endl;
                    cout<<"you can go back to main menu to get the tickets"<<endl;
                }
                else if(choice1==3)
                {
                    charges=100000;
                    cout<<"you have succesfukky booked the AUS - 281 "<<endl;
                    cout<<"you can go back to main menu to get the tickets"<<endl;
                }
                else
                {
                    cout<<"INVALID INPUT!!! enter 1, 2 or 3"<<endl;
                    flights();
                }
                cout<<"press any key to go back to the main menu:"<<endl;
                cin>>back;
                if(back==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
            }
            case 6:
            {
                cout<<"_____________________WELCOME TO EUROPE EMRATES___________________"<<endl;
                cout<<"Your comfort is our priority\n"<<endl;
                cout<<"-----ENJOY-----"<<endl;

                cout<<"following are the flights\n"<<endl;
                cout<<"1.EU - 312"<<endl;
                cout<<"\t 08-03-2023  8:00AM 10HRS Rs.1000"<<endl;
                cout<<"2.EU - 993"<<endl;
                cout<<"\t 13-05-2023  3:00PM 11HRS Rs.10000"<<endl;
                cout<<"3.EU - 281"<<endl;
                cout<<"\t 32-01-2024  1:00PM  2HRS Rs.100000"<<endl;

                cout<<"\t Select the flight you want to book"<<endl;
                cin>>choice1;

                if(choice1==1)
                {
                    charges=1000;
                    cout<<"you have succesfully booked the EU - 312 "<<endl;
                    cout<<"you can go back to main menu to get the tickets"<<endl;
                }
                else if(choice1==2)
                {
                    charges=10000;
                    cout<<"you have succesfully booked the EU - 993 "<<endl;
                    cout<<"you can go back to main menu to get the tickets"<<endl;
                }
                else if(choice1==3)
                {
                    charges=100000;
                    cout<<"you have succesfukky booked the EU - 281 "<<endl;
                    cout<<"you can go back to main menu to get the tickets"<<endl;
                }
                else
                {
                    cout<<"INVALID INPUT!!! enter 1, 2 or 3"<<endl;
                    flights();
                }
                cout<<"press any key to go back to the main menu:"<<endl;
                cin>>back;
                if(back==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
            }
            default:
            {
                cout<<"INVALID INPUT!!! shifting you to the main menu"<<endl;
                mainMenu();
                break;
            }
        }
    }
};
float registreation::charges;
int registreation::choice;
class tickets : public registreation, details
{
    public:
    void Bill()
    {
        string destination=" ";
        ofstream outf("records.txt");
        {
            outf<<"_____________XYZ Airlines___________"<<endl;
            outf<<"______________TICKETS_______________"<<endl;
            outf<<"____________________________________"<<endl;
            if(registreation::choice==1)
            {
                destination="DUBAI";
            }
            else if(registreation::choice==2)
            {
                destination="CANADA";
            }
            else if (registreation::choice==3)
            {
                destination="UK";
            }
            else if(registreation::choice==4)
            {
                destination="USA";
            }
            else if(registreation::choice==5)
            {
                destination="AUSTRILIA";
            }
            else if(registreation::choice==6)
            {
                destination="EUROPE";
            }
            outf<<"Destination\t\t"<<destination<<endl;
            outf<<"Flight costs :\t\t"<<registreation::charges<<endl;
        }
        outf.close();
    }
    void dispBill()
    {
        ifstream ifs("records.txt");
        {
            if(!ifs)
            {
                cout<<"File error!"<<endl;
            }
            while(!ifs.eof())
            {
                ifs.getline(arr,100);
                cout<<arr<<endl;
            }
        }
        ifs.close();
    }
};

void mainMenu()
{
    int lchoice;
    int schoice;
    int back;

    cout<<"\t                        XYZ Airlines\n"<<endl;
    cout<<"\t__________________MAIN MENU___________________\n"<<endl;
    cout<<"\t______________________________________________\n"<<endl;
    cout<<"\t|\t\t\t\t\t|"<<endl;
    cout<<"\t|Press 1 to add customer details    \t|"<<endl;
    cout<<"\t|Press 2 for flight registreation   \t|"<<endl;
    cout<<"\t|Press 3 for tickets and charges    \t|"<<endl;
    cout<<"\t|Press 4 to EXIT                    \t|"<<endl;
    cout<<"\t|\t\t\t\t\t|"<<endl;
    cout<<"\t_______________________________________________\n"<<endl;
    cout<<"Enter your choice:";
    cin>>lchoice;
    details d;
    registreation r;
    tickets t;

    switch(lchoice)
    {
        case 1:
        {
            cout<<"_______________CUSTOMERS______________\n"<<endl;
            d.information();
            cout<<"press any key to go back to MAIN MENU"<<endl;
            cin>>back;
            if(back==1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }
        case 2:
        {
            cout<<"_______BOOK FIGHT TICKETS HERE !!!_______\n"<<endl;
            r.flights();
            break;
        }
        case 3:
        {
            cout<<"_______GET YOUR BILLS HERE !!!________\n"<<endl;
            t.Bill();
            cout<<"YOUR TICKETS IS PRINTED , YOU CAN COLLECT IT\n"<<endl;
            cout<<"press 1 to display your tickets\n";
            cin>>back;
            if(back==1)
            {
                t.dispBill();
                cout<<"Press any key to go back:"<<endl;
                cin>>back;
                if(back==1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
            }
            else
            {
                mainMenu();
            }
            break;
        }
        case 4:
        {
            cout<<"_____________THANK YOU__________"<<endl;
            break;
        }
        default:
        {
            cout<<"_________INVALID INPUT!!!     PLS TRY AGAIN________"<<endl;
            mainMenu();
            break;
        }
    }
}

int main()
{
    Managment Mobj;
    return 0;
}