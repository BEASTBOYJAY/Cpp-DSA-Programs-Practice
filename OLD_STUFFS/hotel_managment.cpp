#include <iostream>
using namespace std;
int main()
{
    //enter the quantity of the items
    int Qrooms=0,Qpasta=0,Qburgure=0,Qshake=0,Qchiken=0;
    //no. of items sold
    int Srooms=0,Spasta=0,Sburgure=0,Sshake=0,Schiken=0;
    //total no. of items
    int Total_rooms=0,Total_pasta=0,Total_burgure=0,Total_shake=0,Total_chiken=0;

    cout<<"\t\t      /**************************************************************************/"<<endl;
    cout<<"\t\t      /                                                                          /"<<endl;
    cout<<"\t\t      /---------------Enter the no. of Quanties of item we have----------------  /"<<endl;
    cout<<"\t\t      /                                                                          /"<<endl;
    cout<<"\t\t      /**************************************************************************/"<<endl;
    cout<<"\t\t\tEnter no. of rooms we have:"<<endl<<"\t\t\t";
    cin>>Qrooms;
    cout<<"\t\t\tEnter no. of Pasta we have:"<<endl<<"\t\t\t";
    cin>>Qpasta;
    cout<<"\t\t\tEnter no. of Burgure we have:"<<endl<<"\t\t\t";
    cin>>Qburgure;
    cout<<"\t\t\tEnter no. of Shake we have:"<<endl<<"\t\t\t";
    cin>>Qshake;
    cout<<"\t\t\tEnter no. of Chikens we have:"<<endl<<"\t\t\t";
    cin>>Qchiken;

    m:

    cout<<"\n\n\t\t\t----------------Enter your choice-------------------"<<endl<<endl;
    cout<<"\t\t\t1) Rooms"<<endl;
    cout<<"\t\t\t2) Pasta"<<endl;
    cout<<"\t\t\t3) Burgure"<<endl;
    cout<<"\t\t\t4) Shake"<<endl;
    cout<<"\t\t\t5) Chicken"<<endl;
    cout<<"\t\t\t6) Information regarding sales and collection"<<endl;
    cout<<"\t\t\t7) Exit"<<endl;

    int choice,quant;
    cout<<"\t\t\tEnter your choice 1,2,3,4,5,6,7: ";
    cin>>choice;

    switch(choice)
    {
        case 1:
        cout<<"\n\n\t\t\t Enter the no. of ROOMS you want: "<<endl<<"\t\t\t";
        cin>>quant;
        if(Qrooms-Srooms>=quant)
        {
            Srooms=Srooms+quant;
            Total_rooms=Total_rooms+quant*1500;
            cout<<"\n\n\t\t\t\t\t"<<quant<<"\t\t\tno. of Rooms have been alloated to you"<<endl;
            break;
        }
        else
        {
            cout<<"\n\t\t\t\tOnly"<<Qrooms-Srooms<<"\t\t\tRooms are left"<<endl;
            break;
        }
        break;
        case 2:
        cout<<"\n\n \t\t\tEnter the no. of PASTA you want: "<<endl<<"\t\t\t";
        cin>>quant;
        if(Qpasta-Spasta>=quant)
        {
            Spasta=Spasta+quant;
            Total_pasta=Total_pasta+quant*300;
            cout<<"\n\n\t\t\t\t\t"<<quant<<"\t\t\tno. of PASTA have been given to you"<<endl;
            break;
        }
        else
        {
            cout<<"\n\t\t\t\tOnly"<<Qpasta-Spasta<<"\t\t\tPASTA are left"<<endl;
            break;
        }
        break;
        case 3:
        cout<<"\n\n\t\t\t Enter the no. of BURGURE you want: "<<endl<<"t\t\t";
        cin>>quant;
        if(Qburgure-Sburgure>=quant)
        {
            Sburgure=Sburgure+quant;
            Total_burgure=Total_burgure+quant*250;
            cout<<"\n\n\t\t\t\t\t"<<quant<<"\t\t\tno. of BURGURE have been given to you"<<endl;
            break;
        }
        else
        {
            cout<<"\n\t\t\t\tOnly"<<Qburgure-Sburgure<<"\t\t\tBURGURE are left"<<endl;
            break;
        }
        break;
        case 4:
        cout<<"\n\n\t\t\t Enter the no. of SHAKE you want: "<<endl<<"\t\t\t";
        cin>>quant;
        if(Qshake-Sshake>=quant)
        {
            Sshake=Sshake+quant;
            Total_shake=Total_shake+quant*200;
            cout<<"\n\n\t\t\t\t\t"<<quant<<"\t\t\tno. of SHAKE have been given to you"<<endl;
            break;
        }
        else
        {
            cout<<"\n\t\t\t\tOnly"<<Qshake-Sshake<<"\t\t\tSHAKE are left"<<endl;
            break;
        }
        break;
        case 5:
        cout<<"\n\n \t\t\tEnter the no. of CHICKEN you want: "<<endl<<"\t\t\t";
        cin>>quant;
        if(Qchiken-Schiken>=quant)
        {
            Schiken=Schiken+quant;
            Total_chiken=Total_chiken+quant*800;
            cout<<"\n\n\t\t\t\t\t"<<quant<<"\t\t\tno. of CHIKEN have been given to you"<<endl;
            break;
        }
        else
        {
            cout<<"\n\t\t\t\tOnly"<<Qchiken-Schiken<<"\t\t\tCHIKEN are left"<<endl;
            break;
        }
        break;
        case 6:
        cout<<"\n\n\t\t\t\t--------Details of sales and collection--------"<<endl<<endl;
        cout<<"\t\t\tNumber of rooms we had"<<Qrooms<<endl;
        cout<<"\t\t\tNumber of rooms we gave for rent"<<Srooms<<endl;
        cout<<"\t\t\tRemaning of rooms"<<Qrooms-Srooms<<endl;
        cout<<"\t\t\tTotal rooms collection of the day"<<Total_rooms<<endl;

        cout<<endl<<endl;

        cout<<"\t\t\tNumber of pasta we had: "<<Qpasta<<endl;
        cout<<"\t\t\tNumber of pasta we gave: "<<Spasta<<endl;
        cout<<"\t\t\tRemaning of pasta: "<<Qpasta-Spasta<<endl;
        cout<<"\t\t\tTotal pasta collection of the day: "<<Total_pasta<<endl;

        cout<<endl<<endl;

        cout<<"\t\t\tNumber of buregure we had: "<<Qburgure<<endl;
        cout<<"\t\t\tNumber of burgure we gave: "<<Sburgure<<endl;
        cout<<"\t\t\tRemaning of burgure: "<<Qburgure-Sburgure<<endl;
        cout<<"\t\t\tTotal burgure collection of the day: "<<Total_burgure<<endl;

        cout<<endl<<endl;

        cout<<"\t\t\tNumber of shake we had: "<<Qshake<<endl;
        cout<<"\t\t\tNumber of shake we gave: "<<Sshake<<endl;
        cout<<"\t\t\tRemaning of shake: "<<Qshake-Sshake<<endl;
        cout<<"\t\t\tTotal shake collection of the day: "<<Total_shake<<endl;

        cout<<endl<<endl;

        cout<<"\t\t\tNumber of chiken we had: "<<Qchiken<<endl;
        cout<<"\t\t\tNumber of chiken we gave: "<<Schiken<<endl;
        cout<<"\t\t\tRemaning of chiken: "<<Qchiken-Schiken<<endl;
        cout<<"\t\t\tTotal chiken collection of the day: "<<Total_chiken<<endl;

        cout<<endl<<endl;
        cout<<"\t\t\tTOTAL NO. OF COLLECTION OF THE DAY: "<<Total_burgure+Total_chiken+Total_pasta+Total_rooms+Total_shake<<endl;
        break;

        case 7:
        exit(0);

        default:
        cout<<"\n\t\t\t Please select the numbers mentioned above !!!";
    }
    goto m;
    return 0;
}