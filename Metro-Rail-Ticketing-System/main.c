/*
Group Members:
Shahriar Mahabub Oishik(Team Lead & Backend Developer)
ID: 2023-3-60-073
Pulok Akibuzzaman(Frontend Developer)
ID: 2023-3-60-051
Md. Ashik-Uz-Zaman(Debugger)
ID: 2023-3-60-074
*/

///Global Header Files
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
///Local Header Files
#include"Block.h"
#include"SpecialFunction.h"
#include"DataTypes.h"
#include"R_W.h"
#include"UserInterface.h"

int main()
{
    ///Record Counter Variable
    int TicketCount=0,MemberCount=0,PreTicketCount=0,j=0,k=0,ticcount=0;
    int upper_bound = 1000000,lower_bound = 100000;
    ///File Variable
    FILE *file;
    ///UserDefined Value Variable
    char Name[35],PNum[15],DCode[10],OCode[10],Password[30],Retype[30],CPassword[30],UID[11],RndStr[7],DOP[30],DOE[30];
    int numT,balance;

    ///KeyBoard Value Taker Variable
    char ch;

    ///DBS Arrays
    struct Ticket TicketDBS[1000];
    struct PreTicket PreTicketDBS[1000];
    struct Member MemberDBS[1000];
    ///Reading DBS File
    TicketCount=DReadTic(TicketDBS);
    PreTicketCount=DReadPreTic(PreTicketDBS);
    MemberCount=DReadMemb(MemberDBS);
    ///Hiding The Cursor
    printf("\e[?25l");

    ///Splash Screen
    SplashScreen();

    ///Program
homepage:
    HomePage();
    ch=getch();
    if((int)ch==49/*1*/)///HomePage Option #1/ticketpage
    {
        ///Ticket page Flag/point
ticketpage:
        ///Showing Ticket Page Interaface
        TicketPage();
        ///Starting of Keyboard Interaction in Ticketpage
        ch=getch();
        if((int)ch==49)///Purchase Ticket Option
        {
            ///Opening TicketDBS.txt
            file = fopen("Database/TicketDBS.txt", "a");
            ///Showing The PurchaseTickets Interface
            PurchaseTickets();
            ///Showing The Cursor
            printf("\e[?25h");

            while(1)
            {
                MoveCursor(43,14);
                fflush(stdin);
                NameInput(Name);///Getting Name from Purchase ticket process
                if(strlen(Name)>=3)
                {
                    break;
                }
                else
                {
                    MoveCursor(60,26);
                    printf("                                                   ");
                    MoveCursor(60,26);
                    printf("\aName must be more than 2 letters.");
                    MoveCursor(43,14);
                    printf("                         ");
                }
            }
            while(1)
            {
                MoveCursor(51,16);
                PNumInput(PNum);///Getting PNum from Purchase ticket process
                if(strlen(PNum)==11)
                {
                    break;
                }
                else
                {
                    MoveCursor(60,26);
                    printf("                                                   ");
                    MoveCursor(60,26);
                    printf("\aPhone number must contain 11 digits.");
                    MoveCursor(51,16);
                    printf("           ");
                }
            }
            while(1)
            {
                MoveCursor(55,18);
                CodeInput(DCode);///Getting Destination Code from Purchase ticket process
                if(!((strcmp(DCode,"AFN")) && ((!strcmp(DCode,"TSC")) || (!strcmp(DCode,"KRJ")) || (!strcmp(DCode,"KRL")) || (!strcmp(DCode,"MDS")) || (!strcmp(DCode,"MGB")) || (!strcmp(DCode,"UTR")))))
                {
                    MoveCursor(60,26);
                    printf("                                                                                           ");
                    MoveCursor(41,26);
                    printf("\aDestination Code error or Can't be Aftabnagar.(Origin station)");
                    MoveCursor(55,18);
                    printf("   ");
                }
                else if(strlen(DCode)==3 && strcmp(DCode,"AFN"))
                {
                    break;
                }
            }
            while(1)
            {
                MoveCursor(56,20);
                scanf("%d",&numT);///Getting Number of Tickets from Purchase ticket process
                if(numT<5 && numT>0)
                {
                    break;
                }
                else
                {
                    MoveCursor(41,26);
                    printf("                                                                                                     ");
                    MoveCursor(63,26);
                    printf("\aPlease buy less than 5 tickets");
                    MoveCursor(56,20);
                    printf("     ");
                }
            }
            ///Hiding The Cursor
            printf("\e[?25l");
            ///TicketConfirm Flag/Point
            while(1)
            {
                ///Showing Ticket Purchasing Confirmation Interface
                ticketconfirm(Name,PNum,"AFN",DCode,numT);
                ///Taking Keyboard Interaction from the user
                ch=getch();
                if((int)ch==13)///Confirming Data to Save
                {
                    /*---------------Start of Saving Value in DBS-----------------*/
                    for(int i=0; i<numT; i++)
                    {
                        int value = rand() % (upper_bound - lower_bound + 1) + lower_bound;
                        char DC1[2]= {DCode[0]};
                        sprintf(RndStr, "%d", value);
                        strcat(UID,"A");
                        strcat(UID,DC1);
                        strcat(UID,RndStr);
                        getTime(0,DOP);
                        getTime(1,DOE);
                        fprintf(file,"%s,%s,%s,%s,%s,%s\n",UID,Name,PNum,DOP,DOE,DCode);
                        strcpy(UID,"");
                    }
                    strcpy(DOP,"");
                    strcpy(DOE,"");
                    fclose(file);
                    ///Updating Struct in Real-Time
                    TicketCount = DReadTic(TicketDBS);
                    /*---------Ending of Saving Data----------------------*/
                    system("cls");
                    MoveCursor(58,15);
                    printf("Please Insert Your Payment Card.");
                    Sleep(1500);
                    system("cls");
                    for(int i=5; i>0; i--)
                    {
                        MoveCursor(64,15);
                        printf("Stand By....%d",i);
                        Sleep(800);
                    }
                    system("cls");
                    MoveCursor(64,15);
                    printf("Purchase Successful!");
                    Sleep(1000);
                    goto ticketpage;
                }
                ///Cancelling Confirmation
                else if((int)ch==27)
                {
                    fclose(file);
                    goto ticketpage;
                }
                ///Tapping Gibberish in Ticket Confirmation
            }
        }
        ///Ending of Purchase Tickets Functionallity
        else if((int)ch==50)
        {
            ShowTickets();
            fflush(stdin);
            printf("\e[?25h");
            MoveCursor(60,14);
            fflush(stdin);
            NameInput(Name);///Getting Name from Show ticket process
            MoveCursor(68,17);
            PNumInput(PNum);///Getting PNum from Show ticket process
            system("cls");
            j=0;
            for(int i=0; i<TicketCount; i++)
            {
                if(!(strcmp(TicketDBS[i].name,Name))&& !(strcmp(TicketDBS[i].PNum,PNum)))
                {
                    MoveCursor(48,0+12*j);
                    Hline(50,'-','|');
                    MoveCursor(48,12+12*j);
                    Hline(50,'-','|');
                    Vline(48,1,12+11*j,'|');
                    Vline(97,1,12+11*j,'|');
                    MoveCursor(52,2+12*j);
                    printf("ID:%s",TicketDBS[i].UID);
                    MoveCursor(52,6+12*j);
                    printf("Date of Purchase:%s",TicketDBS[i].DOP);
                    MoveCursor(52,3+12*j);
                    printf("Name:%s",TicketDBS[i].name);
                    MoveCursor(52,7+12*j);
                    printf("Date of Expiry:%s",TicketDBS[i].DOE);
                    MoveCursor(52,4+12*j);
                    printf("Phone Number:%s",TicketDBS[i].PNum);
                    MoveCursor(52,8+12*j);
                    printf("From:Aftabnagar");
                    MoveCursor(70,8+12*j);
                    char Destination[20];
                    CodeConv(TicketDBS[i].DCode,Destination);
                    printf("To: %s",Destination);
                    MoveCursor(52,10+12*j);
                    printf("Price:%d Taka",TFare(TicketDBS[i].DCode,"AFN",1));
                    j++;
                    ticcount++;
                }
            }
            if(ticcount==0)
            {
                MoveCursor(66,15);
                printf("No Ticket Found");
            }
            printf("\n\n\n\t\t\t\t\t\t\t\tPress [ESC] to return");
            ticcount=0;
            j=0;
            while(1)
            {
                ch = getch();
                if((int)ch==27)
                {
                    goto ticketpage;
                }
            }
        }
        else if((int)ch==51)
        {
            TicketCancellation();
            printf("\e[?25h");
            MoveCursor(60,14);
            fflush(stdin);
            NameInput(Name);///Getting Name from Show ticket process
            MoveCursor(68,17);
            PNumInput(PNum);///Getting PNum from Show ticket process
            printf("\e[?25l");
showT:
            system("cls");
            for(int i=0; i<TicketCount; i++)
            {
                if(!(strcmp(TicketDBS[i].name,Name))&& !(strcmp(TicketDBS[i].PNum,PNum)))
                {
                    MoveCursor(48,0+12*j);
                    Hline(50,'-','|');
                    MoveCursor(48,12+12*j);
                    Hline(50,'-','|');
                    Vline(48,1,12+11*j,'|');
                    Vline(97,1,12+11*j,'|');
                    MoveCursor(52,2+12*j);
                    printf("ID:%s",TicketDBS[i].UID);
                    MoveCursor(52,6+12*j);
                    printf("Date of Purchase:%s",TicketDBS[i].DOP);
                    MoveCursor(52,3+12*j);
                    printf("Name:%s",TicketDBS[i].name);
                    MoveCursor(52,7+12*j);
                    printf("Date of Expiry:%s",TicketDBS[i].DOE);
                    MoveCursor(52,4+12*j);
                    printf("Phone Number:%s",TicketDBS[i].PNum);
                    MoveCursor(52,8+12*j);
                    printf("From:Aftabnagar");
                    MoveCursor(70,8+12*j);
                    char Destination[20];
                    CodeConv(TicketDBS[i].DCode,Destination);
                    printf("To: %s",Destination);
                    MoveCursor(52,10+12*j);
                    printf("Price:%d Taka",TFare(TicketDBS[i].DCode,"AFN",1));
                    j++;
                    ticcount++;
                }

            }
            if(ticcount==0)
            {
                MoveCursor(66,15);
                printf("No Ticket Found");
            }
            MoveCursor(57,14+12*(j-1));
            printf("Press[Enter] to Cancel Tickets");
            MoveCursor(60,15+12*(j-1));
            printf("Press [ESC] to return");
            while(1)
            {
                ch = getch();
                if((int)ch==27)
                {
                    goto ticketpage;
                }
                if((int)ch==13)
                {
                    printf("\e[?25h");
                    MoveCursor(52,13+12*(j-1));
                    printf("Enter Ticket UID you want to cancel:");
                    MoveCursor(88,13+12*(j-1));
                    fgets(UID, 11, stdin);
                    UID[strcspn(UID, "\n")] = '\0';
                    strcpy(UID,strupr(UID));
                    printf("\e[?25l");
                    for (int i = 0; i < TicketCount; i++)
                    {
                        if (!(strcmp(TicketDBS[i].UID, UID)) && !(strcmp(TicketDBS[i].PNum, PNum)) && !(strcmp(TicketDBS[i].name, Name)))
                        {
                            // Ticket found, shift elements to remove it
                            for (int k = i; k < TicketCount - 1; k++)
                            {
                                strcpy(TicketDBS[k].UID, TicketDBS[k + 1].UID);
                                strcpy(TicketDBS[k].name, TicketDBS[k + 1].name);
                                strcpy(TicketDBS[k].DCode, TicketDBS[k + 1].DCode);
                                strcpy(TicketDBS[k].PNum, TicketDBS[k + 1].PNum);
                            }
                            // Clear the content of the last element
                            memset(&TicketDBS[TicketCount - 1], 0, sizeof(struct Ticket));

                            TicketCount--;
                            break;  // No need to continue searching once the ticket is found and removed
                        }
                    }
                    break;

                }
            }
            updateTicketDBS(TicketDBS,TicketCount);
            TicketCount=DReadTic(TicketDBS);
            ticcount=0;
            j=0;
            goto showT;
        }

        ///KeyBoard Interaction from Ticket return to HomePage
        else if((int)ch==27)
        {
            goto homepage;
        }
        ///Avoiding Tapping Gibberish in TicketPage
        else
        {
            goto ticketpage;
        }

        ///Ending Point of Ticket KeyBoard Interaction
    }
    ///Ending Point of Tickets Functionality
    else if((int)ch==50)///HomePage Option #2
    {
membership:
        Membership();
        ch=getch();
        if((int)ch==49)
        {
membersignup:
            MemberSignup();
            ch=getch();
            if((int)ch==27)
            {
                goto membership;
            }
memberinput:
            printf("\e[?25h");
            while(1)
            {
                fflush(stdin);
                MoveCursor(60,14);
                NameInput(Name);
                if(strlen(Name)==0)
                {
                    MoveCursor(61,24);
                    printf("                                                  ");
                    MoveCursor(63,24);
                    printf("\aUsername is required.");
                    MoveCursor(60,14);
                    printf("                    ");

                }
                else if(strlen(Name)<=2)
                {
                    MoveCursor(61,24);
                    printf("                                                  ");
                    MoveCursor(57,24);
                    printf("\aUsername can't be 2 characaters.");
                    MoveCursor(60,14);
                    printf("                    ");

                }
                else
                {
                    break;
                }
            }
            ch=getch();
            if((int)ch==27)
            {
                goto membership;
            }
            while(1)
            {
                MoveCursor(68,17);
                PNumInput(PNum);
                if(strlen(PNum)==11)
                {
                    break;
                }
                else
                {
                    MoveCursor(61,24);
                    printf("                                                  ");
                    MoveCursor(63,24);
                    printf("\aPhone number must be 11 digits.");
                    MoveCursor(68,17);
                    printf("           ");
                }
            }
            ch=getch();
            if((int)ch==27)
            {
                goto membership;
            }
            while(1)
            {
                MoveCursor(64,20);
                PasswordInput(Password);
                if(strlen(Password)==0)
                {
                    MoveCursor(61,24);
                    printf("                                                  ");
                    MoveCursor(63,24);
                    printf("\aPassword is required.");
                    MoveCursor(64,20);
                    printf("                    ");

                }
                else if(strlen(Password)<=4)
                {
                    MoveCursor(61,24);
                    printf("                                                  ");
                    MoveCursor(57,24);
                    printf("\aPassword must be atleat 5 characaters.");
                    MoveCursor(64,20);
                    printf("                    ");

                }
                else
                {
                    break;
                }
            }
            printf("\e[?25l");
            for(int i=0; i<MemberCount; i++)
            {
                if(!(strcmp(PNum,MemberDBS[i].PNum))&& !(strcmp(Name,MemberDBS[i].name)))
                {
                    MoveCursor(61,23);
                    printf("\aAccount Already exists");
                    MoveCursor(60,14);
                    printf("                                ");
                    MoveCursor(68,17);
                    printf("                        ");
                    MoveCursor(64,20);
                    printf("                            ");
                    goto memberinput;
                }
                else if(!(strcmp(PNum,MemberDBS[i].PNum)))
                {
                    MoveCursor(57,23);
                    printf("\aPhone Number is already in use");
                    MoveCursor(60,14);
                    printf("                                ");
                    MoveCursor(68,17);
                    printf("                        ");
                    MoveCursor(64,20);
                    printf("                            ");
                    goto memberinput;
                }
                else if(pow(strcmp(PNum,MemberDBS[i].PNum),2)&& pow(strcmp(Name,MemberDBS[i].name),2))
                {
                    continue;
                }
            }
            system("cls");
            MoveCursor(60,15);
            printf("Please insert your payment card");
            Sleep(1500);
            system("cls");
            MoveCursor(60,15);
            printf("Initial Balance you want to add:");
            scanf("%d",&balance);
            /*---------------Start of Saving Value in DBS-----------------*/
            /**/file = fopen("Database/MemberDBS.txt", "a");
            /**/ fprintf(file,"%s,%s,%s,%d\n",Name,PNum,Password,balance);
            /**/ fclose(file);
            /**////Updating Struct in Real-Time
            /**/MemberCount = DReadMemb(MemberDBS);
            /*---------Ending of Saving Data----------------------*/
            system("cls");
            for(int i=5; i>0; i--)
            {
                MoveCursor(64,15);
                printf("Stand By....%d",i);
                Sleep(800);
            }
            system("cls");
            MoveCursor(60,15);
            printf("Your Account has been created!");
            Sleep(1200);
            goto membership;
        }
        else if((int)ch==50)
        {
memberlogin:
            MemberLogin();
logintrya:
            printf("\e[?25h");
            fflush(stdin);
            MoveCursor(60,14);
            NameInput(Name);

            ch=getch();
            if((int)ch==27)
            {
                goto membership;
            }
            MoveCursor(68,17);
            PNumInput(PNum);
            ch=getch();
            if((int)ch==27)
            {
                goto membership;
            }
            MoveCursor(64,20);
            PasswordInput(Password);
            printf("\e[?25l");
            int userindex=0;
            for(userindex=0; userindex<MemberCount; userindex++)
            {
                if(!(strcmp(PNum,MemberDBS[userindex].PNum))&& !(strcmp(Name,MemberDBS[userindex].name))&& !(strcmp(Password,MemberDBS[userindex].Password)))
                {
                    goto mainmenu;
                }
                else if(pow(strcmp(PNum,MemberDBS[userindex].PNum),2)&& pow(strcmp(Name,MemberDBS[userindex].name),2)&&pow(strcmp(Password,MemberDBS[userindex].Password),2))
                {
                    continue;
                }
            }
            MoveCursor(45,23);
            printf("\aYour Phone Number or password is incorrect.Please Try Again");
            MoveCursor(27,24);
            printf("Do you want to try again? Press Space to Try Again and ESC to go back to Membership");
YN1:
            ch=getch();
            if((int)ch==27)
            {
                goto membership;
            }
            else if((int)ch==32)
            {
                MoveCursor(60,14);
                printf("                                ");
                MoveCursor(68,17);
                printf("                        ");
                MoveCursor(64,20);
                printf("                            ");
                goto logintrya;
            }
            else
            {
                goto YN1;
            }
            while(1)
            {
mainmenu:
                MainMenu();
                MoveCursor(50,13);
                printf("Welcome, %s! Hope you're having a great day!",Name);
                ch=getch();
                if((int)ch==49)///"Buy Pre-Ticket For Member" Option
                {
                    BuyPreTicket();
                    while(1)
                    {
                        MoveCursor(53,15);
                        CodeInput(OCode);///Getting Destination Code from Purchase ticket process
                        if(strlen(OCode)==3 && (!strcmp(OCode,"AFN") || !strcmp(OCode,"TSC") || !strcmp(OCode,"KRJ") || !strcmp(OCode,"KRL") || !strcmp(OCode,"MDS") || !strcmp(OCode,"MGB") || !strcmp(OCode,"UTR")))
                        {
                            break;
                        }
                        else
                        {
                            MoveCursor(60,26);
                            printf("                                                                                           ");
                            MoveCursor(46,26);
                            printf("\aOrigin Code error.");
                            MoveCursor(55,18);
                            printf("   ");
                        }
                    }
                    while(1)
                    {
                        MoveCursor(58,17);
                        CodeInput(DCode);///Getting Destination Code from Purchase ticket process
                        if(strlen(DCode)==3 && strcmp(DCode,OCode) && (!strcmp(DCode,"AFN") || !strcmp(DCode,"TSC") || !strcmp(DCode,"KRJ") || !strcmp(DCode,"KRL") || !strcmp(DCode,"MDS") || !strcmp(DCode,"MGB") || !strcmp(DCode,"UTR")))
                        {
                            break;
                        }
                        else
                        {
                            MoveCursor(60,26);
                            printf("                                                                                           ");
                            MoveCursor(41,26);
                            printf("\aDestination Code error.");
                            MoveCursor(55,18);
                            printf("   ");
                        }
                    }
                    file = fopen("Database/PreTicketDBS.txt", "a");
                    while(1)
                    {

                        ticketconfirm(Name,PNum,OCode,DCode,1);
                        //printf("\n%s\n%s\n",OCode,DCode);
                        ch=getch();
                        if((int)ch==13)///Confirming Data to Save
                        {
                            if (MemberDBS[userindex].Balance < TFare(DCode,OCode,1))
                            {
                                MoveCursor(63,19);
                                printf("\aNot enough balance.");
                                Sleep(2000);
                                goto mainmenu;
                            }
                            else
                            {
                                MemberDBS[userindex].Balance-=TFare(DCode,OCode,1);
                            }
                            /*---------------Start of Saving Value in DBS-----------------*/
                            for(int i=0; i<1; i++)
                            {
                                strcpy(RndStr,"");
                                int value = rand() % (upper_bound - lower_bound + 1) + lower_bound;
                                char DC1[2]= {DCode[0]};
                                char DC2[2]= {OCode[0]};
                                sprintf(RndStr, "%d", value);
                                strcat(UID,DC2);
                                strcat(UID,DC1);
                                strcat(UID,RndStr);
                                fprintf(file,"%s,%s,%s,%s,%s\n",UID,Name,PNum,OCode,DCode);
                                strcpy(UID,"");
                            }
                            fclose(file);
                            ///Updating Struct in Real-Time
                            updateMemberDBS(MemberDBS,MemberCount);
                            MemberCount= DReadMemb(MemberDBS);
                            PreTicketCount = DReadPreTic(PreTicketDBS);
                            /*---------Ending of Saving Data----------------------*/
                            system("cls");
                            MoveCursor(64,15);
                            printf("Please Insert Your Payment Card");
                            Sleep(1500);
                            system("cls");
                            for(int i=5; i>0; i--)
                            {
                                MoveCursor(64,15);
                                printf("Stand By....%d",i);
                                Sleep(800);
                            }
                            system("cls");
                            MoveCursor(64,15);
                            printf("Purchase Successful!");
                            Sleep(1000);
                            goto mainmenu;
                        }
                        ///Cancelling Confirmation
                        else if((int)ch==27)
                        {
                            fclose(file);
                            goto mainmenu;
                        }
                    }
                    //---------------------------------------------------------------------------------------------------------------------------------------------
                }
                else if((int)ch==50)///"Check Tickets for Member" Option
                {
showPT:
                    system("cls");
                    j=0;
                    for(int i=0; i<PreTicketCount; i++)
                    {
                        if(!(strcmp(PreTicketDBS[i].name,Name))&& !(strcmp(PreTicketDBS[i].PNum,PNum)))
                        {
                            MoveCursor(48,0+12*j);
                            Hline(50,'-','|');
                            MoveCursor(48,12+12*j);
                            Hline(50,'-','|');
                            Vline(48,1,12+11*j,'|');
                            Vline(97,1,12+11*j,'|');
                            MoveCursor(52,2+12*j);
                            printf("ID:%s",PreTicketDBS[i].UID);
                            MoveCursor(52,4+12*j);
                            printf("Name:%s",PreTicketDBS[i].name);
                            MoveCursor(52,6+12*j);
                            printf("Phone Number:%s",PreTicketDBS[i].PNum);
                            MoveCursor(52,8+12*j);
                            char Origin[20];
                            CodeConv(PreTicketDBS[i].OCode,Origin);
                            printf("From: %s",Origin);
                            MoveCursor(70,8+12*j);
                            char Destination[20];
                            CodeConv(PreTicketDBS[i].DCode,Destination);
                            printf("To: %s",Destination);
                            MoveCursor(52,10+12*j);
                            printf("Price:%d Taka",TFare(PreTicketDBS[i].DCode,PreTicketDBS[i].OCode,1));
                            j++;
                            ticcount++;
                        }

                    }
                    if(ticcount==0)
                    {
                        MoveCursor(66,15);
                        printf("No Ticket Found");
                    }
                    MoveCursor(57,14+12*(j-1));
                    printf("Press[Enter] to Cancel Tickets");
                    MoveCursor(60,15+12*(j-1));
                    printf("Press [ESC] to return");
                    while(1)
                    {
                        ch = getch();
                        if((int)ch==27)
                        {
                            goto mainmenu;
                        }
                        if((int)ch==13)
                        {
                            printf("\e[?25h");
                            MoveCursor(52,13+12*(j-1));
                            printf("Enter Ticket UID you want to cancel:");
                            MoveCursor(88,13+12*(j-1));
                            fgets(UID, 11, stdin);
                            UID[strcspn(UID, "\n")] = '\0';
                            strcpy(UID,strupr(UID));
                            printf("\e[?25l");
                            for (int i = 0; i < PreTicketCount; i++)
                            {
                                if (!(strcmp(PreTicketDBS[i].UID, UID)) && !(strcmp(PreTicketDBS[i].PNum, PNum)) && !(strcmp(PreTicketDBS[i].name, Name)))
                                {
                                    // Ticket found, shift elements to remove it
                                    for (int k = i; k < TicketCount - 1; k++)
                                    {
                                        strcpy(PreTicketDBS[k].UID, PreTicketDBS[k + 1].UID);
                                        strcpy(PreTicketDBS[k].name, PreTicketDBS[k + 1].name);
                                        strcpy(PreTicketDBS[k].DCode, PreTicketDBS[k + 1].DCode);
                                        strcpy(PreTicketDBS[k].OCode, PreTicketDBS[k + 1].OCode);
                                        strcpy(PreTicketDBS[k].PNum, PreTicketDBS[k + 1].PNum);
                                    }
                                    // Clear the content of the last element
                                    memset(&PreTicketDBS[PreTicketCount - 1], 0, sizeof(struct PreTicket));

                                    PreTicketCount--;
                                    break;  // No need to continue searching once the ticket is found and removed
                                }
                            }
                            break;

                        }
                    }
                    updatePreTicketDBS(PreTicketDBS,PreTicketCount);
                    PreTicketCount=DReadPreTic(PreTicketDBS);
                    ticcount=0;
                    j=0;
                    goto showPT;
                }
                else if((int)ch==51)///"Check UserInfo for Member" Option
                {
userinfo:
                    UserInfo();
                    MoveCursor(59,12);
                    printf("%s",Name);
                    MoveCursor(67,14);
                    printf("%s",PNum);
                    MoveCursor(62,16);
                    printf("%dTK",MemberDBS[userindex].Balance);
                    ch=getch();
                    if((int)ch==49)
                    {
changepassword:
                        ChangePassword();
                        printf("\e[?25h");
                        while(1)
                        {
                            MoveCursor(67,14);
                            PasswordInputL(CPassword,26);
                            if(strlen(CPassword)==0)
                            {
                                MoveCursor(61,24);
                                printf("                                                  ");
                                MoveCursor(63,24);
                                printf("\aPassword is required.");
                                MoveCursor(64,20);
                                printf("                    ");
                            }
                            else if(strlen(CPassword)<=4)
                            {
                                MoveCursor(61,24);
                                printf("                                                  ");
                                MoveCursor(57,24);
                                printf("\aPassword must be atleat 5 characaters.");
                                MoveCursor(64,20);
                                printf("                    ");
                            }
                            else
                            {
                                break;
                            }
                        }
                        MoveCursor(61,17);
                        PasswordInputL(Retype,26);
                        printf("\e[?25l");
                        if(!(strcmp(CPassword,MemberDBS[userindex].Password)))
                        {
                            MoveCursor(58,21);
                            printf("\aYou can't change it to old password");
                            MoveCursor(50,22);
                            printf("Press [ENTER] to Try again and [ESC] to go back");
                            while(1)
                            {
                                ch=getch();
                                if((int)ch==27)
                                {
                                    goto userinfo;
                                }
                                else if((int)ch==13)
                                {
                                    goto changepassword;
                                }
                            }
                        }
                        else if(!(strcmp(CPassword,Retype)))
                        {
                            strcpy(MemberDBS[userindex].Password,CPassword);
                            updateMemberDBS(MemberDBS,MemberCount);
                            MemberCount = DReadMemb(MemberDBS);
                            MoveCursor(58,21);
                            printf("Your Password has been Updated");
                            MoveCursor(54,22);
                            printf("Please Press [ESC] to Go Back");
                            while(1)
                            {
                                ch=getch();
                                if((int)ch==27)
                                {
                                    goto userinfo;
                                }
                            }
                        }
                        else if(pow((strcmp(CPassword,Retype)),2))
                        {
                            MoveCursor(58,21);
                            printf("\aYour Password and Retype doesn't Match");
                            MoveCursor(50,22);
                            printf("Press [ENTER] to Try again and [ESC] to go back");
                            while(1)
                            {
                                ch=getch();
                                if((int)ch==27)
                                {
                                    goto userinfo;
                                }
                                else if((int)ch==13)
                                {
                                    goto changepassword;
                                }
                            }
                        }
                    }
                    else if((int)ch==27)
                    {
                        goto mainmenu;
                    }
                    else
                    {
                        goto userinfo;
                    }
                }
                else if((int)ch==52)///"Top-Up" Option
                {
                    TopUp();
                    printf("\e[?25h");
                    int balanceCont=0;
                    MoveCursor(67,14);
                    balanceCont=BalanceInput();
                    printf("\e[?25l");
                    MoveCursor(54,17);
                    printf("Do you want add %dTK to your account?",balanceCont);
                    MoveCursor(61,19);
                    printf("Press [ENTER] to Confirm");
                    MoveCursor(46,20);
                    printf("Press [ESC] to Cancel and go back to Main Menu");
                    while(1)
                    {
                        ch=getch();
                        if((int)ch==13)
                        {
                            break;
                        }
                        else if((int)ch==27)
                        {
                            goto mainmenu;
                        }
                    }
                    system("cls");
                    MoveCursor(60,15);
                    printf("Please Complete the payment");
                    Sleep(800);
                    system("cls");
                    for(int i=5; i>0; i--)
                    {
                        MoveCursor(65,15);
                        printf("Please Stand by %d",i);
                        Sleep(1000);
                    }
                    system("cls");
                    MoveCursor(62,15);
                    printf("Balance has been added");
                    Sleep(800);
                    MemberDBS[userindex].Balance+=balanceCont;
                    updateMemberDBS(MemberDBS,MemberCount);
                    MemberCount = DReadMemb(MemberDBS);
                    goto mainmenu;
                }
                else if((int)ch==53)
                {
                    userindex=0;
                    strcpy(Password,"");
                    strcpy(Name,"");
                    strcpy(PNum,"");
                    ch=0;
                    goto homepage;
                }
            }
        }
        else if((int)ch==27)
        {
            goto homepage;
        }
        else
        {
            goto membership;
        }
    }
    else if((int)ch==51)///HomePage Option #3
    {
timetable:
        TimeTable();
        ch=getch();
        if((int)ch==27)
        {
            goto homepage;
        }
        else
        {
            goto timetable;
        }
    }
    else if((int)ch==52)///HomePage Option #4
    {
routes:
        Routes();
        ch=getch();
        if((int)ch==27)
        {
            goto homepage;
        }
        else
        {
            goto routes;
        }
    }
    else if((int)ch==27)
    {
        system("cls");
        EndScreen();
        exit(0);
    }
    else
    {
        goto homepage;
    }
}
