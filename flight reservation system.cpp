#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
#include<iomanip>

using namespace std;

void mainmenu();

class Management
{
    public:
    Management()
    {
        mainmenu();
    }

};

class Details
{
    public:
    
    static string name,gender;
    int phoneno;
    int age;
    string add;
    static string cid;
    char arr[100];

    void information()
    {
        cout<<"\nEnter the customer ID: ";
        cin>>cid;
        cout<<"\nEnter the Name: ";
        cin>>name;
        cout<<"\nEnter the age: ";
        cin>>age;
        cout<<"\nAddress: ";
        cin>>add;
        cout<<"\nGender: ";
        cin>>gender;
        cout<<"\nYour details are save with us\n"<<endl;
    }
};

string Details::cid;
string Details::name;
string Details::gender;

class registration
{
    public:
    static int choice;
    int choice1;
    string back;
    static float charges;

    void flights()
    {
        string flightN[]={"Dubai","Canada","UK","USA","Australia","Germany"};

        for(int i=0;i<6;i++)
        {
            cout<<(i+1)<<". Flight to---->"<<flightN[i]<<endl;
        }

        cout<<"\nWELCOME TO AIRLINES!"<<endl;
        cout<<"Press the number of the country which you want to book the flight:";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                cout<<"_______________________WELCOME TO DUBAI EMIRATES (HABIBI)___________________\n"<<endl;

                cout<<"_______________________Enjoy your Journey!__________________\n"<<endl;

                cout<<"1. DUB-100"<<endl;
                cout<<"\t15-06-2023 10:00AM 18HRS Rs. 24000"<<endl;
                cout<<"2. DUB-115"<<endl;
                cout<<"\t15-06-2023 06:00AM 23HRS Rs. 20000"<<endl;
                cout<<"3. DUB-120"<<endl;
                cout<<"\t15-06-2023 15:30PM 24HRS Rs. 19000"<<endl;

                cout<<"\n Select the flight you want to book :";
                cin>>choice1;
                if(choice1==1)
                {
                    charges=24000;
                    cout<<"\nYou have successfully booked the flight DUB-100"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==2)
                {
                    charges=20000;
                    cout<<"\nYou have successfully booked the flight DUB-115"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==3)
                {
                    charges=19000;
                    cout<<"\nYou have successfully booked the flight DUB-120"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else
                {
                    cout<<"INVALID INPUT---> shifting to the previous menu"<<endl;
                    flights();
                }
                cout<<"Press any key to go back to main menu:"<<endl;
                cin>>back;

                if(back[0]=='1')
                {
                    mainmenu();
                }
                else{
                    mainmenu();
                }
                break;

            }
            case 2:
            {
                cout<<"_______________________WELCOME TO CANADIAN AIRWAYS (BIENVENUE)___________________\n"<<endl;

                cout<<"_______________________Enjoy your Journey!__________________\n"<<endl;

                cout<<"1. CAD-200"<<endl;
                cout<<"\t15-06-2023 10:00AM 30HRS Rs. 74000"<<endl;
                cout<<"2. CAD-215"<<endl;
                cout<<"\t15-06-2023 06:00AM 35HRS Rs. 60000"<<endl;
                cout<<"3. CAD-220"<<endl;
                cout<<"\t15-06-2023 15:30PM 40HRS Rs. 59000"<<endl;

                cout<<"\n Select the flight you want to book :";
                cin>>choice1;
                if(choice1==1)
                {
                    charges=74000;
                    cout<<"\nYou have successfully booked the flight CAD-200"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==2)
                {
                    charges=60000;
                    cout<<"\nYou have successfully booked the flight CAD-215"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==3)
                {
                    charges=59000;
                    cout<<"\nYou have successfully booked the flight CAD-220"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else
                {
                    cout<<"INVALID INPUT---> shifting to the previous menu"<<endl;
                    flights();
                }
                cout<<"Press any key to go back to main menu:"<<endl;
                cin>>back;

                if(back[0]=='1')
                {
                    mainmenu();
                }
                else{
                    mainmenu();
                }
                break;
            }
            case 3:
            {
                cout<<"_______________________WELCOME TO UK AIRLINES (WELCOME)___________________\n"<<endl;

                cout<<"_______________________Enjoy your Journey!__________________\n"<<endl;

                cout<<"1. UK-300"<<endl;
                cout<<"\t15-06-2023 10:00AM 18HRS Rs. 44000"<<endl;
                

                cout<<"\n Select the flight you want to book :";
                cin>>choice1;
                if(choice1==1)
                {
                    charges=44000;
                    cout<<"\nYou have successfully booked the flight DUB-100"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else
                {
                    cout<<"INVALID INPUT---> shifting to the previous menu"<<endl;
                    flights();
                }
                cout<<"Press any key to go back to main menu:"<<endl;
                cin>>back;

                if(back[0]=='1')
                {
                    mainmenu();
                }
                else{
                    mainmenu();
                }
                break;
            }
            case 4:
            {
                cout<<"_______________________WELCOME TO USA AIRWAYS (WELCOME)___________________\n"<<endl;

                cout<<"_______________________Enjoy your Journey!__________________\n"<<endl;

                cout<<"1. USA-400"<<endl;
                cout<<"\t15-06-2023 10:00AM 20HRS Rs. 54000"<<endl;
                cout<<"2. USA-415"<<endl;
                cout<<"\t15-06-2023 06:00AM 21HRS Rs. 50000"<<endl;
                cout<<"3. USA-420"<<endl;
                cout<<"\t15-06-2023 15:30PM 22HRS Rs. 39000"<<endl;

                cout<<"\n Select the flight you want to book :";
                cin>>choice1;
                if(choice1==1)
                {
                    charges=54000;
                    cout<<"\nYou have successfully booked the flight USA-400"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==2)
                {
                    charges=50000;
                    cout<<"\nYou have successfully booked the flight USA-415"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==3)
                {
                    charges=39000;
                    cout<<"\nYou have successfully booked the flight USA-420"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else
                {
                    cout<<"INVALID INPUT---> shifting to the previous menu"<<endl;
                    flights();
                }
                cout<<"Press any key to go back to main menu:"<<endl;
                cin>>back;

                if(back[0]=='1')
                {
                    mainmenu();
                }
                else{
                    mainmenu();
                }
                break;
            }
            case 5:
            {
                cout<<"_______________________WELCOME TO AUSTRALIA AIRLINES (G'DAY)___________________\n"<<endl;

                cout<<"_______________________Enjoy your Journey!__________________\n"<<endl;

                cout<<"1. AUS-500"<<endl;
                cout<<"\t15-06-2023 10:00AM 18HRS Rs. 40000"<<endl;
                cout<<"2. AUS-515"<<endl;
                cout<<"\t15-06-2023 06:00AM 23HRS Rs. 35000"<<endl;
                cout<<"3. AUS-520"<<endl;
                cout<<"\t15-06-2023 15:30PM 24HRS Rs. 29000"<<endl;

                cout<<"\n Select the flight you want to book :";
                cin>>choice1;
                if(choice1==1)
                {
                    charges=40000;
                    cout<<"\nYou have successfully booked the flight AUS-500"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==2)
                {
                    charges=35000;
                    cout<<"\nYou have successfully booked the flight AUS-515"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==3)
                {
                    charges=29000;
                    cout<<"\nYou have successfully booked the flight AUS-520"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else
                {
                    cout<<"INVALID INPUT---> shifting to the previous menu"<<endl;
                    flights();
                }
                cout<<"Press any key to go back to main menu:"<<endl;
                cin>>back;

                if(back[0]=='1')
                {
                    mainmenu();
                }
                else{
                    mainmenu();
                }
                break;
            }
            case 6:
            {
                cout<<"_______________________WELCOME TO GERMANY AIRWAYS (WILLKOMMEN)___________________\n"<<endl;

                cout<<"_______________________Enjoy your Journey!__________________\n"<<endl;

                cout<<"1. GER-600"<<endl;
                cout<<"\t15-06-2023 10:00AM 18HRS Rs. 75000"<<endl;
                cout<<"2. GER-615"<<endl;
                cout<<"\t15-06-2023 06:00AM 23HRS Rs. 60000"<<endl;
                cout<<"3. GER-620"<<endl;
                cout<<"\t15-06-2023 15:30PM 24HRS Rs. 49000"<<endl;

                cout<<"\n Select the flight you want to book :";
                cin>>choice1;
                if(choice1==1)
                {
                    charges=75000;
                    cout<<"\nYou have successfully booked the flight GER-600"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==2)
                {
                    charges=60000;
                    cout<<"\nYou have successfully booked the flight GER-615"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else if(choice1==3)
                {
                    charges=49000;
                    cout<<"\nYou have successfully booked the flight GER-620"<<endl;
                    cout<<"You can go back to menu and take the ticket"<<endl;
                }
                else
                {
                    cout<<"INVALID INPUT---> shifting to the previous menu"<<endl;
                    flights();
                }
                cout<<"Press any key to go back to main menu:"<<endl;
                cin>>back;

                if(back[0]=='1')
                {
                    mainmenu();
                }
                else{
                    mainmenu();
                }
                break;
            }
            default:
            {
                cout<<"INVALID INPUT-->Shifting you to main menu 1"<<endl;
                mainmenu();
                break;
            }
            
        }
    }
};
float registration::charges;
int registration::choice;

class ticket: public registration, Details
{
    public:
     
     void BILL()
     {
        string destination="";
        ofstream outf("records.txt");
        {
            outf<<"____________________INDIAN AIRLINES________________"<<endl;
            outf<<"_____________________Ticket_________________________"<<endl;
            outf<<"____________________________________________________"<<endl;

            outf<<"Customer ID:"<<Details::cid<<endl;
            outf<<"Customer Name:"<<Details::name<<endl;
            outf<<"Customer Gender:"<<Details::gender<<endl;
            outf<<"\t    Description:"<<endl<<endl;

            if(registration::choice==1)
            {
                destination="Dubai";
            }
            else if(registration::choice==2)
            {
                destination="Canada";
            }
            else if(registration::choice==3)
            {
                destination="UK";
            }
            else if(registration::choice==4)
            {
                destination="USA";
            }
            else if(registration::choice==5)
            {
                destination="Australia";
            }
            else if(registration::choice==6)
            {
                destination="Germany";
            }

            outf<<"Destination:\t\t"<<destination<<endl;
            outf<<"Flight Cost:\t\t"<<registration::charges<<endl;
        }
        outf.close();
     }
     void dispbill()
     {
        ifstream ifs("records.txt");
        {
            if(!ifs)
            {
                cout<<"FILE ERROR!"<<endl;
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

void mainmenu()
{
    string lchoice;
    // int schoice;
    string back;
    //  HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    //  SetConsoleTextAttribute(h,24);
    cout<<"\t******************************************INDIAN AIRLINES************************************************************ \n"<<endl;
    cout<<"\t____________________________________________MAIN MENU_________________________________________________________________\n"<<endl;
    cout<<"\t_____________________________________________\n"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t"<<endl;
    cout<<"\t|\t Press 1 to add the customer details      \t"<<endl;
    cout<<"\t|\t Press 2 for Flight Registration           \t"<<endl;
    cout<<"\t|\t Press 3 for Ticket and Charges             \t"<<endl;
    cout<<"\t|\t Press 4 to Exit                             \t"<<endl;
    cout<<"\t|\t\t\t\t\t\t\t\t\t\t\t\t"<<endl;
    cout<<"\t________________________________________________________"<<endl;

    cout<<endl;
    while(true)
    {
        cout<<"Enter the Choice:- ";
        cin>>lchoice;
        if(lchoice[0]=='1'&& lchoice.length()==1||lchoice[0]=='2'&& lchoice.length()==1||lchoice[0]=='3'&& lchoice.length()==1||
        lchoice[0]=='4'&& lchoice.length()==1)
        {
            break;
        }
        else
        {
            cout<<"INVALID INPUT--->PLEASE enter right choice";
            cout<<endl;
        }
    }

    Details d;
    registration r;
    ticket t;

    switch(lchoice[0])
    {
        case '1':
        {
            cout<<endl;
            cout<<"____________Customers________________\n"<<endl;
            d.information();
            cout<<"Press any key to go back to main menu:";
            
            cin>>back;
            if(back[0]=='1')
            {
                mainmenu();
            }
            else
            {
                mainmenu();
            }
            break;
        }
        case '2':
        {
            cout<<endl;
            cout<<"___________Book a flight usimg this system___________\n"<<endl;
            r.flights();
            break;
        }
        case '3':
        {
        cout<<"_____________GET YOUR TICKET_____________________/n"<<endl;
        t.BILL();

        cout<<"Your ticket is printed, you can collect it \n"<<endl;
        cout<<"Press 1 to display your ticket ";

        cin>>back;

            if(back[0]=='1')
            {
                t.dispbill();
                cout<<"Press any key to go back to main menu:";
                cin>>back;
                if(back[0]=='1')
                {
                    mainmenu();
                }
                else
                {
                    mainmenu();
                }
            }
            else
            {
                mainmenu();
            }
            break;
        }

        case '4':
        {
            cout<<"\n\n\t_______________THANK YOU_______________"<<endl;
            break;
        }
        default:
        {
            cout<<"Invalid input,Please visit try again!\n"<<endl;
            mainmenu();
            break;
        }

    }


}


int main()
{
    Management Mobj;
    return 0;
}