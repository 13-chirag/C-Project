#include<iostream>
#include<string>
#include<conio.h>

using namespace std;


class Airline                             //class
{
public:
    Airline()                             //Constructor
    {
        int ch,i,s,j,d;
        double fare;
        char p[15];
        string n;
        string m;
        string pay;
        string dist;
        int ar[10]={};                    //{0,0,0,0,0,0,0,0,0,0}

        cout<<"\n                                            ##    ## ####### ##      ####### ####### ###  ### #######";
        cout<<"\n                                            ##    ## ##      ##      ##      ##   ## ## ## ## ##     ";
        cout<<"\n                                            ##    ## #####   ##      ##      ##   ## ##    ## #####  ";
        cout<<"\n                                            ## ## ## ##      ##      ##      ##   ## ##    ## ##     ";
        cout<<"\n                                            ###  ### ####### ####### ####### ####### ##    ## #######";
        cout<<"\n\n===========================================This project is prepared by 4 members from SE EXTC - B===============================================\n";
        cout<<"\n======Members ::  1.Chirag Sonavale - 19104B0046   2.Shantanu Haralakar - 19104B0050   3.Ajay Jadhav - 19104B0035   4.Anuj Gargote - 19104B0047=====";
        cout<<"\n\n******************************************************AIRLINE RESERVATION SYSTEM********************************************************\n\n";
        cout<<"====================================================================================================================================================\n";

        for(j=0;j<10;j++)
        {
        cout<<"\n==================================================================================================================================================\n";
        cout<<"\n\n\n\nPLACES YOU MAY FLY TO : \n  #:MUMBAI\n  #:DELHI\n  #:KOLKATA\n  #:CHENNAI\n  #:BANGLORE\n";
        cout<<"\n Enter the class you want. Select 1.for First Class. or 2.for Second Class.\n";
        cin>>ch;
        cout<<"=================================================\n";
        system("cls");
        switch(ch)
        {
        {
        case 1:
            cout<<"\n============================================\n";
            cout<<"\n WELCOME TO FIRST CLASS\n";
            cout<<"PLACES YOU MAY FLY TO : 1:MUMBAI , 2:DELHI , 3:KOLKATA , 4:CHENNAI , 5:BANGLORE\n";
            cout<<"\n============================================\n";

            do
            {
                cout<<"\n Enter your first name please!\n";
                cin>>n;
                cout<<"\n Enter your last name please!\n";
                cin>>m;
                cout<<"\n Enter your passport ID please!\n";
                cin>>p;
                cout<<"\n Enter the destination number you want to fly too!!! : \n";
                cin>>d;
                switch(d)
                {
                case 1:
                    {
                      dist="MUMBAI";
                      cout<<"\nSEATS available are NO= 1,2,3,4,5\n";
                      cout<<"\nEnter the seat number you want to reserve for Mumbai flight\n";
                      cin>>s;
                      break;
                    }
                case 2:
                    {
                      dist="DELHI";
                      cout<<"\nSEATS available are NO= 1,2,3,4,5\n";
                      cout<<"\nEnter the seat number you want to reserve for Delhi flight\n";
                      cin>>s;
                      break;
                    }
                case 3:
                    {
                      dist="KOLKATA";
                      cout<<"\nSEATS available are NO= 1,2,3,4,5\n";
                      cout<<"\nEnter the seat number you want to reserve for Kolkata flight\n";
                      cin>>s;
                      break;
                    }
                case 4:
                    {
                      dist="CHENNAI";
                      cout<<"\nSEATS available are NO= 1,2,3,4,5\n";
                      cout<<"\nEnter the seat number you want to reserve for Chennai flight\n";
                      cin>>s;
                      break;
                    }
                case 5:
                    {
                      dist="BANGLORE";
                      cout<<"\nSEATS available are NO= 1,2,3,4,5\n";
                      cout<<"\nEnter the seat number you want to reserve for Banglore flight\n";
                      cin>>s;
                      break;
                    }

                }
                {
                          if(s==1)
                          {
                              cout<<"\nThe cost of NO 1 seat is 5,000";
                              fare= 5000;
                              cout<<"\n\nThe modes of payment are :";
                              cout<<"\n  Credit, Debit, NetBanking, UPI";
                              cout<<"\n\n Enter the mode of payment you will access. \n";
                              cin>>pay;
                          }
                          if(s==2)
                          {
                              cout<<"\nThe cost of NO 2 seat is 4,000";
                              fare= 4000;
                              cout<<"\n\nThe modes of payment are :";
                              cout<<"\n  Credit, Debit, NetBanking, UPI";
                              cout<<"\n\n Enter the mode of payment you will access. \n";
                              cin>>pay;
                          }
                          if(s==3)
                          {
                              cout<<"\nThe cost of NO 3 seat is 4,000";
                              fare= 4000;
                              cout<<"\n\nThe modes of payment are :";
                              cout<<"\n  Credit, Debit, NetBanking, UPI";
                              cout<<"\n\n Enter the mode of payment you will access. \n";
                              cin>>pay;
                          }
                          if(s==4)
                          {
                              cout<<"\nThe cost of NO 4 seat is 3,000";
                              fare= 3000;
                              cout<<"\n\nThe modes of payment are :";
                              cout<<"\n  Credit, Debit, NetBanking, UPI";
                              cout<<"\n\n Enter the mode of payment you will access. \n";
                              cin>>pay;
                          }
                          if(s==5)
                          {
                              cout<<"\nThe cost of NO 5 seat is 3,000";
                              fare= 3000;
                              cout<<"\n\nThe modes of payment are :";
                              cout<<"\n  Credit, Debit, NetBanking, UPI";
                              cout<<"\n\n Enter the mode of payment you will access. \n";
                              cin>>pay;
                          }
                      }


                ar[j]=s;
                system("cls");

                for(i=0;i<j;i++)
                {
                    if(ar[j]==ar[i])
                    {
                        cout<<"\n SORRY THESE SEATS IS RESERVED\n";
                        break;
                    }
                }

            }while(i!=j);

            if(ar[j]<=5)
            {
                cout<<"\n\n==========================================\n";
                cout<<"Your seat is reserved";
                cout<<"\nPRINT of ticket is as followed : \n";
                cout<<"==========================================\n";
                cout<<"\n NAME = "<<n+" "+m;
                cout<<"\n PASSPORT ID = "<<p;
                cout<<"\n CLASS = FIRST CLASS";
                cout<<"\n DESTINATION = "<<dist;
                cout<<"\n SEAT NUMBER YOU RESERVED : "<<s;                                 //ar[j]=s
                cout<<"\n FARE = "<<fare;
                cout<<"\n MODE OF PAYMENT OF FARE : "<<pay;
                cout<<"\n \n\n\n******THANKYOU******\n\n\n\n\n\n\n\n";

            }
            else
            {
                cout<<"ERROR!!! This seat is not available for you";
                cout<<"****************\n";
            }
            break;

            }



        {
            case 2:
            {
                cout<<"\n============================================\n";
                cout<<"\n**WELCOME TO SECOND CLASS**\n";
                cout<<"PLACES YOU MAY FLY TO : 1:MUMBAI , 2:DELHI , 3:KOLKATA , 4:CHENNAI , 5:BANGLORE\n";
                cout<<"\n============================================\n";
                do
                {
                cout<<"\n Enter your first name please!\n";
                cin>>n;
                cout<<"\n Enter your last name please!\n";
                cin>>m;
                cout<<"\n Enter your passport ID please!\n";
                cin>>p;
                cout<<"\nEnter the destination number you want to fly too!!! : \n";
                cin>>d;
                switch(d)
                {
                case 1:
                    {
                      dist="MUMBAI";
                      cout<<"\nSEATS available are NO= 6,7,8,9,10\n";
                      cout<<"\nEnter the seat number you want to reserve for Mumbai flight\n";
                      cin>>s;
                      break;
                    }
                case 2:
                    {
                      dist="DELHI";
                      cout<<"\nSEATS available are NO= 6,7,8,9,10\n";
                      cout<<"\nEnter the seat number you want to reserve for Delhi flight\n";
                      cin>>s;
                      break;
                    }
                case 3:
                    {
                      dist="KOLKATA";
                      cout<<"\nSEATS available are NO= 6,7,8,9,10\n";
                      cout<<"\nEnter the seat number you want to reserve for Kolkata flight\n";
                      cin>>s;
                      break;
                    }
                case 4:
                    {
                      dist="CHENNAI";
                      cout<<"\nSEATS available are NO= 6,7,8,9,10\n";
                      cout<<"\nEnter the seat number you want to reserve for Chennai flight\n";
                      cin>>s;
                      break;
                    }
                case 5:
                    {
                      dist="BANGLORE";
                      cout<<"\nSEATS available are NO= 6,7,8,9,10\n";
                      cout<<"\nEnter the seat number you want to reserve for Banglore flight\n";
                      cin>>s;
                      break;
                    }

                }

                {
                          if(s==6)
                          {
                              cout<<"\nThe cost of NO 6 seat is 3,000";
                              fare= 3000;
                              cout<<"\n\nThe modes of payment are :";
                              cout<<"\n  Credit, Debit, NetBanking, UPI";
                              cout<<"\n\n Enter the mode of payment you will access. \n";
                              cin>>pay;
                          }
                          if(s==7)
                          {
                              cout<<"\nThe cost of NO 7 seat is 2,800";
                              fare= 2800;
                              cout<<"\n\nThe modes of payment are :";
                              cout<<"\n  Credit, Debit, NetBanking, UPI";
                              cout<<"\n\n Enter the mode of payment you will access. \n";
                              cin>>pay;
                          }
                          if(s==8)
                          {
                              cout<<"\nThe cost of NO 8 seat is 2,800";
                              fare= 2800;
                              cout<<"\n\nThe modes of payment are :";
                              cout<<"\n  Credit, Debit, NetBanking, UPI";
                              cout<<"\n\n Enter the mode of payment you will access. \n";
                              cin>>pay;
                          }
                          if(s==9)
                          {
                              cout<<"\nThe cost of NO 9 seat is 2,500";
                              fare= 2500;
                              cout<<"\n\nThe modes of payment are :";
                              cout<<"\n  Credit, Debit, NetBanking, UPI";
                              cout<<"\n\n Enter the mode of payment you will access. \n";
                              cin>>pay;
                          }
                          if(s==10)
                          {
                              cout<<"\nThe cost of NO 10 seat is 2,500";
                              fare= 2500;
                              cout<<"\n\nThe modes of payment are :";
                              cout<<"\n  Credit, Debit, NetBanking, UPI";
                              cout<<"\n\n Enter the mode of payment you will access. \n";
                              cin>>pay;
                          }
                      }


                ar[j]=s;
                system("cls");

                for(i=0;i<j;i++)
                {
                    if(ar[j]==ar[i])
                    {
                        cout<<"\n SORRY THESE SEATS ARE RESERVED\n";
                        break;
                    }
                }
                }while(i!=j);

                if(ar[j]>=6)
                {
                cout<<"==========================================\n";
                cout<<"Your seat is reserved";
                cout<<"\nPRINT of ticket is as followed : \n";
                cout<<"==========================================\n\n\n";
                cout<<"\n NAME = "<<n+" "+m;
                cout<<"\n PASSPORT ID = "<<p;
                cout<<"\n CLASS = SECOND CLASS";
                cout<<"\n DESTINATION = "<<dist;
                cout<<"\n SEAT NUMBER YOU RESERVED : "<<s;     //ar[j]=s
                cout<<"\n FARE = "<<fare;
                cout<<"\n MODE OF PAYMENT OF FARE : "<<pay;
                cout<<"\n\n\n\n **THANKYOU**\n\n\n\n\n\n\n";
                }
                else
                {
                cout<<"ERROR!!! This seat is not available for you";
                cout<<"****************\n";
                }

            }
        }
        default:
            {
                if(ar[j]>10||ar[j]<6)
                cout<<"INVALID CHOICE";
                break;
            }
        }                                              //HERE switch case is ending.
    }                                                   //Here main for loop ends i.e counting seats will stop



    }


};
int main()
{
    Airline myobj;
    return 0;
}
