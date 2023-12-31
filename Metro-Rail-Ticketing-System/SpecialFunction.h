/*
Group Members:
Shahriar Mahabub Oishik(Team Lead & Backend Developer)
ID: 2023-3-60-073
Pulok Akibuzzaman(Frontend Developer)
ID: 2023-3-60-051
Md. Ashik-Uz-Zaman(Debugger)
ID: 2023-3-60-074
*/
///----------------------------------------Input Functions----------------------------------------------------------------
int PasswordInput(char password[])
{
    char pw[30];
    int x=0;
end:
    while(!((int)pw[x-1]==13))
    {
        pw[x] = getch();
        if((int)pw[x]==13)
        {
            pw[x]=0;
            break;
        }
        else if((int)pw[x]==8)
        {
            pw[x]=0;
            if(x>0)
            {
                pw[x-1]=0;
                x--;
                printf("\b \b");
                goto end;
            }
            else if(x=0)
            {
                printf("\b \b");
                goto end;
            }
            goto end;
        }
        else if((int)pw[x]==9 ||(int)pw[x]==27||(int)pw[x]==127||(int)pw[x]==17)
        {
            pw[x]=0;
            x--;
            goto incrementx;

        }
        if(x<28)
        {
            printf("*");
        }
        if(x>28)
        {
            pw[x]=0;
            x-=2;
        }
incrementx:
        x++;
    }
    pw[x] = '\0';
    strcpy(password,pw);
}
int PNumInput(char PNum[])
{

    char pw[15];
    int x=0;
end:
    while(!((int)pw[x-1]==13))
    {
        pw[x] = getch();
        if((int)pw[x]==13)
        {
            pw[x]=0;
            break;
        }
        else if((int)pw[x]==8)
        {
            pw[x]=0;
            if(x>0)
            {
                pw[x-1]=0;
                x--;
                printf("\b \b");
                goto end;
            }
            else if(x=0)
            {
                printf("\b \b");
                goto end;
            }
            goto end;
        }
        else if((int)pw[x]==9 ||(int)pw[x]==27||(int)pw[x]==127||(int)pw[x]==17||((int)pw[x]>=58 && (int)pw[x]<=128)||((int)pw[x]>=1 && (int)pw[x]<=47))
        {
            pw[x]=0;
            x--;
            goto incrementx;

        }
        if(x<11)
        {
            printf("%c",pw[x]);
        }
        if(x>11)
        {
            pw[x]=0;
            x-=2;
        }
incrementx:
        x++;
    }
    pw[x] = '\0';
    strcpy(PNum,pw);
}
int NameInput(char Name[])
{

    char pw[35];
    int x=0;
end:
    while(!((int)pw[x-1]==13))
    {
        pw[x] = getch();
        if((int)pw[x]==13)
        {
            pw[x]=0;
            break;
        }
        else if((int)pw[x]==8)
        {
            pw[x]=0;
            if(x>0)
            {
                pw[x-1]=0;
                x--;
                printf("\b \b");
                goto end;
            }
            else if(x=0)
            {
                printf("\b \b");
                goto end;
            }
            goto end;
        }
        else if((int)pw[x]==9 ||(int)pw[x]==27||(int)pw[x]==127||(int)pw[x]==17||((int)pw[x]>=1 && (int)pw[x]<=31)||((int)pw[x]>=33 && (int)pw[x]<=64)||((int)pw[x]>=91 && (int)pw[x]<=96)||((int)pw[x]>=123 && (int)pw[x]<=128))
        {
            pw[x]=0;
            x--;
            goto incrementx;

        }
        if(x<32)
        {
            printf("%c",pw[x]);
        }
        if(x>32)
        {
            pw[x]=0;
            x-=2;
        }
incrementx:
        x++;
    }
    pw[x] = '\0';
    strcpy(Name,pw);
}
int PasswordInputL(char password[],int Lim)
{
    char pw[30];
    int x=0;
end:
    while(!((int)pw[x-1]==13))
    {
        pw[x] = getch();
        if((int)pw[x]==13)
        {
            pw[x]=0;
            break;
        }
        else if((int)pw[x]==8)
        {
            pw[x]=0;
            if(x>0)
            {
                pw[x-1]=0;
                x--;
                printf("\b \b");
                goto end;
            }
            else if(x=0)
            {
                printf("\b \b");
                goto end;
            }
            goto end;
        }
        else if((int)pw[x]==9 ||(int)pw[x]==27||(int)pw[x]==127||(int)pw[x]==17)
        {
            pw[x]=0;
            x--;
            goto incrementx;

        }
        if(x<Lim)
        {
            printf("*");
        }
        if(x>Lim)
        {
            pw[x]=0;
            x-=2;
        }
incrementx:
        x++;
    }
    pw[x] = '\0';
    strcpy(password,pw);
}
int BalanceInput()
{

    char pw[15];
    int x=0;
end:
    while(!((int)pw[x-1]==13))
    {
        pw[x] = getch();
        if((int)pw[x]==13)
        {
            pw[x]=0;
            break;
        }
        else if((int)pw[x]==8)
        {
            pw[x]=0;
            if(x>0)
            {
                pw[x-1]=0;
                x--;
                printf("\b \b");
                goto end;
            }
            else if(x=0)
            {
                printf("\b \b");
                goto end;
            }
            goto end;
        }
        else if((int)pw[x]==9 ||(int)pw[x]==27||(int)pw[x]==127||(int)pw[x]==17||((int)pw[x]>=58 && (int)pw[x]<=128)||((int)pw[x]>=1 && (int)pw[x]<=47))
        {
            pw[x]=0;
            x--;
            goto incrementx;

        }
        if(x<22)
        {
            printf("%c",pw[x]);
        }
        if(x>22)
        {
            pw[x]=0;
            x-=2;
        }
incrementx:
        x++;
    }
    pw[x] = '\0';
    return atoi(pw);
}

int CodeInput(char Name[])
{

    char pw[35];
    int x=0;
end:
    while(!((int)pw[x-1]==13))
    {
        pw[x] = getch();
        if((int)pw[x]==13)
        {
            pw[x]=0;
            break;
        }
        else if((int)pw[x]==8)
        {
            pw[x]=0;
            if(x>0)
            {
                pw[x-1]=0;
                x--;
                printf("\b \b");
                goto end;
            }
            else if(x=0)
            {
                printf("\b \b");
                goto end;
            }
            goto end;
        }
        else if((int)pw[x]==9 ||(int)pw[x]==27||(int)pw[x]==127||(int)pw[x]==17||((int)pw[x]>=1 && (int)pw[x]<=31)||((int)pw[x]>=33 && (int)pw[x]<=64)||((int)pw[x]>=91 && (int)pw[x]<=96)||((int)pw[x]>=123 && (int)pw[x]<=128))
        {
            pw[x]=0;
            x--;
            goto incrementx;

        }
        if(x<3)
        {
            printf("%c",pw[x]);
        }
        if(x>3)
        {
            pw[x]=0;
            x-=2;
        }
incrementx:
        x++;
    }
    pw[x] = '\0';
    strcpy(Name,strupr(pw));
}

///--------------------------------------------------------------Code Conversion Function--------------------------------------------------
int CodeConvNum(char a[])
{
    int x=0;
    if(!strcmp(a,"AFN"))
    {
        x=18;
    }
    else if(!strcmp(a,"KRL"))
    {
        x=19;
    }
    else if(!strcmp(a,"MGB"))
    {
        x=17;
    }
    else if(!strcmp(a,"KRJ"))
    {
        x=15;
    }
    else if(!strcmp(a,"TSC"))
    {
        x=16;
    }
    else if(!strcmp(a,"UTR"))
    {
        x=20;
    }
    else if(!strcmp(a,"MDS"))
    {
        x=21;
    }
    return x;
}



int CodeConv(char a[],char destination[])
{
    if(!strcmp(a,"AFN"))
    {
        strcpy(destination,"Aftabnagar");
    }
    else if(!strcmp(a,"KRL"))
    {
        strcpy(destination,"Kuril");
    }
    else if(!strcmp(a,"MGB"))
    {
        strcpy(destination,"Mogbazar");
    }
    else if(!strcmp(a,"KRJ"))
    {
        strcpy(destination,"Keranigonj");
    }
    else if(!strcmp(a,"TSC"))
    {
        strcpy(destination,"TSC");
    }
    else if(!strcmp(a,"UTR"))
    {
        strcpy(destination,"Uttara");
    }
    else if(!strcmp(a,"MDS"))
    {
        strcpy(destination,"Mirpur DOHS");
    }
    else
    {
        strcpy(destination,"Doesn't Exist");
    }
}

///------------------------------------------------------------Total Fare Function-------------------------------------------------
#define PER_STATION_FEE 10
int TFare(char DCode[],char OCode[],int numT)
{
    int des=0,ori=0,StationTravel=0,TotalFare=0,countdes=0,countori=0;
    des=CodeConvNum(DCode);
    ori=CodeConvNum(OCode);
    int route[7]= {15,16,17,18,19,20,21};
    while(!(des==route[countdes]))
    {
        countdes++;
    }
    while(!(ori==route[countori]))
    {
        countori++;
    }
    if(ori<des)
    {
        StationTravel= -1*(ori-des);
    }
    else if(ori>des)
    {
        StationTravel =(ori-des);
    }
    else
    {
        StationTravel=0;
    }
    TotalFare= StationTravel*PER_STATION_FEE*numT;
    return TotalFare;
}

int getTime(int predate,char Date[]){
    time_t currentTime = time(NULL)+(predate * 24 * 60 * 60);

    if (currentTime == -1) {
        perror("Error getting time");
        return 1;
    }
    struct tm *localTime = localtime(&currentTime);
    if (localTime == NULL) {
        perror("Error converting to local time");
        return 1;
    }
    sprintf(Date,"%02d-%02d-%04d %02d:%02d:%02d",
           localTime->tm_mday,        // day of the month
           localTime->tm_mon + 1,     // months (0-11, so add 1)
           localTime->tm_year + 1900, // years since 1900
           localTime->tm_hour,        // hours
           localTime->tm_min,         // minutes
           localTime->tm_sec);        // seconds
}
