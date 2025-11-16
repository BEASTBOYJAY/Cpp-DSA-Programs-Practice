#include <iostream>
#include <string>
using namespace std;
string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];
int total=0;
void enter()
{
    int no=0;
    cout<<"Enter the no. students you want to enter: "<<endl<<endl;
    cin>>no;
    if(total==0)
    {
        total=total+no;
        for(int i=0;i<no;i++)
        {
            cout<<"No. of data to enter "<<i+1<<endl<<endl;
            cout<<"Enter the student name: ";
            cin>>arr1[i];
            cout<<"Enter the student Roll No.: ";
            cin>>arr2[i];
            cout<<"Enter the student course: ";
            cin>>arr3[i];
            cout<<"Enter the student class: ";
            cin>>arr4[i];
            cout<<"Enter the student contact: ";
            cin>>arr5[i];
        }
    }
    else
    {
        for(int i=0;i<no;i++)
        {
            cout<<"No. of data to enter "<<i+1<<endl<<endl;
            cout<<"Enter the student name:"<<endl;
            cin>>arr1[i];
            cout<<"Enter the student Roll No.: "<<endl;
            cin>>arr2[i];
            cout<<"Enter the student course: "<<endl;
            cin>>arr3[i];
            cout<<"Enter the student class: "<<endl;
            cin>>arr4[i];
            cout<<"Enter the student contact: "<<endl;
            cin>>arr5[i];
        }
        total=total+no;
    }        
}



void show()
{
    if(total==0)
    {
        cout<<"No data to display"<<endl;
    }
    else
    {
        for(int i=0;i<total;i++)
        {
            cout<<"Student Name: "<<arr1[i]<<endl;
            cout<<"Student Roll no.: "<<arr2[i]<<endl;
            cout<<"Student Course: "<<arr3[i]<<endl;
            cout<<"Student Class: "<<arr4[i]<<endl;
            cout<<"Student Contact: "<<arr5[i]<<endl;

        }
    }
}

void search()
{
    if(total==0)
    {
        cout<<"No data to display"<<endl;
    }
    else
    {
        string check;
        cout<<"Enter the Roll no.: "<<endl;
        cin>>check;
        for(int i=0;i<total;i++)
        {
            if(arr2[i]==check)
            {
            cout<<"Student Name: "<<arr1[i]<<endl;
            cout<<"Student Roll no.: "<<arr2[i]<<endl;
            cout<<"Student Course: "<<arr3[i]<<endl;
            cout<<"Student Class: "<<arr4[i]<<endl;
            cout<<"Student Contact: "<<arr5[i]<<endl;
            }
        }

    }
}

void update()
{
    if(total==0)
    {
        cout<<"No data to display"<<endl;
    }
    else
    {
        string check;
        cout<<"Enter the Roll no.: "<<endl;
        cin>>check;
        for(int i=0;i<total;i++)
        {
            if(arr2[i]==check)
            {
            cout<<"----perivous data----"<<endl;
            cout<<"Student Name: "<<arr1[i]<<endl;
            cout<<"Student Roll no.: "<<arr2[i]<<endl;
            cout<<"Student Course: "<<arr3[i]<<endl;
            cout<<"Student Class: "<<arr4[i]<<endl;
            cout<<"Student Contact: "<<arr5[i]<<endl<<endl<<endl;
            cout<<"----New data----"<<endl;
            cout<<"NAME:"<<endl;
            cin>>arr1[i];
            cout<<"Roll no.:"<<endl;
            cin>>arr2[i];
            cout<<"COURSE:"<<endl;
            cin>>arr3[i];
            cout<<"CLASS:"<<endl;
            cin>>arr4[i];
            cout<<"CONTACT:"<<endl;
            cin>>arr5[i];
            }
        }
    }
}

void del()
{
    if(total==0)
    {
        cout<<"No data to delete"<<endl;
    }
    else
    {
        int  yay;
        cout<<"Enter 1 to delete all data"<<endl;
        cout<<"Enter 2 to delete specific data"<<endl;
        cin>>yay;
        if(yay==1)
        {
            total=0;
            cout<<"All the datahas been deleted !!!"<<endl;
        }
        else if (yay==2)
        {
            string chose;
            cout<<"enter the Roll no. of a student you want to delete the data: "<<endl;
            cin>>chose;
            for(int i=0;i<total;i++)
            {
                if(chose==arr2[i])
                {
                    for(int j=0;j<total;j++)
                    {
                        arr1[j]=arr1[j+1];
                        arr2[j]=arr2[j+1];
                        arr3[j]=arr3[j+1];
                        arr4[j]=arr4[j+1];
                        arr5[j]=arr5[j+1];
                    }
                    total--;
                    cout<<"YOUR DATA HAS BEEN DELETED !!!"<<endl;
                }
            }
            
        }
        else
        {
            cout<<"INVALID INPUT !!!"<<endl;
        }
    }
}
int main()
{
    int value;
    x:
    cout<<"\n\t/ -----STUDENT MANAGMENT SYSTEM----- /"<<endl<<endl;
    cout<<"1) Enter student data"<<endl;
    cout<<"2) Show data"<<endl;
    cout<<"3) Search data"<<endl;
    cout<<"4) Update any student data"<<endl;
    cout<<"5) Delete data"<<endl;
    cout<<"6) Exit"<<endl;


    cout<<"\n\nSelect the no. what operation you want to do"<<endl;
    cin>>value;
    switch (value)
    {
        case 1:
        enter();
        break;

        case 2:
        show();
        break;

        case 3:
        search();
        break;

        case 4:
        update();
        break;

        case 5:
        del();
        break;

        case 6:
        exit(0);
        break;

        default:
        cout<<"enter a valid no."<<endl;
        break;

    }
    goto x;

}
