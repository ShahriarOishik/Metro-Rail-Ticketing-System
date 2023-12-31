/*
Group Members:
Shahriar Mahabub Oishik(Team Lead & Backend Developer)
ID: 2023-3-60-073
Pulok Akibuzzaman(Frontend Developer)
ID: 2023-3-60-051
Md. Ashik-Uz-Zaman(Debugger)
ID: 2023-3-60-074
*/
///--------------------------------------------------Read Function----------------------------------------------------------------
///TicketDBS Reader
int DReadTic(struct Ticket TDBS[])
{
    FILE *file;
    file = fopen("./Database/TicketDBS.txt","r");

    if(file== NULL )
    {
        printf("Error opening file.TIC\n");
        return 1;
    }
    int read=0;
    int records = 0;
    do
    {
        read = fscanf(file,
                      "%8[^,],%60[^,],%11[^,],%30[^,],%30[^,],%s\n",
                      TDBS[records].UID,
                      TDBS[records].name,
                      TDBS[records].PNum,
                      TDBS[records].DOP,
                      TDBS[records].DOE,
                      TDBS[records].DCode
                      );
        if (read==6) records++;
        if(read!=6 && !feof(file))
        {
            printf("File formate incorrect in Ticket");
            return 1;
        }
        if(ferror(file))
        {
            printf("Error Reading TIC");
            return 1;
        }

    }
    while(!feof(file));
    fclose(file);
    return records;
}

///MemberDBS Reader
int DReadMemb(struct Member TDBS[])
{
    FILE *file;
    file = fopen("./Database/MemberDBS.txt","r");

    if(file== NULL )
    {
        printf("Error opening file.MEMB\n");
        return 1;
    }
    int read=0;
    int records = 0;
    do
    {
        read = fscanf(file,
                      "%32[^,],%11[^,],%35[^,],%d\n",
                      TDBS[records].name,
                      TDBS[records].PNum,
                      TDBS[records].Password,
                      &TDBS[records].Balance);
        if (read==4) records++;
        if(read!=4 && !feof(file))
        {
            printf("File formate incorrect in Member");
            return 1;
        }
        if(ferror(file))
        {
            printf("Error Reading MEMB");
            return 1;
        }

    }
    while(!feof(file));
    fclose(file);
    return records;
}

int DReadPreTic(struct PreTicket TDBS[])
{
    FILE *file;
    file = fopen("./Database/PreTicketDBS.txt","r");

    if(file== NULL )
    {
        printf("Error opening file.PreTic\n");
        return 1;
    }
    int read=0;
    int records = 0;
    do
    {
        read = fscanf(file,
                      "%8[^,],%60[^,],%11[^,],%3[^,],%s\n",
                      TDBS[records].UID,
                      TDBS[records].name,
                      TDBS[records].PNum,
                      TDBS[records].OCode,
                      TDBS[records].DCode);
        if (read==5) records++;
        if(read!=5 && !feof(file))
        {
            printf("File formate incorrect in PreTicket");
            return 1;
        }
        if(ferror(file))
        {
            printf("Error Reading TIC");
            return 1;
        }

    }
    while(!feof(file));
    fclose(file);
    return records;
}


///--------------------------------------------------Write Function----------------------------------------------------------------

int updateMemberDBS(struct Member MemberDBS[],int records)
{
    FILE *file;
    file = fopen("./Database/MemberDBS.txt","w");
    if (file==NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    for (int i =0; i<records; i++)
    {
        fprintf(file,"%s,%s,%s,%d\n",MemberDBS[i].name,MemberDBS[i].PNum,MemberDBS[i].Password,MemberDBS[i].Balance);
        if (ferror(file))
        {
            printf("Error writing to file.\n");
            return 1;
        }
    }

    fclose(file);
}
int updateTicketDBS(struct Ticket TicketDBS[],int records)
{
    FILE *file;
    file = fopen("./Database/TicketDBS.txt","w");
    if (file==NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    for (int i =0; i<records; i++)
    {
        fprintf(file,"%s,%s,%s,%s,%s,%s\n",TicketDBS[i].UID,TicketDBS[i].name,TicketDBS[i].PNum,TicketDBS[i].DOP,TicketDBS[i].DOE,TicketDBS[i].DCode);
        if (ferror(file))
        {
            printf("Error writing to file.\n");
            return 1;
        }
    }

    fclose(file);
}
int updatePreTicketDBS(struct PreTicket PreTicketDBS[],int records)
{
    FILE *file;
    file = fopen("./Database/PreTicketDBS.txt","w");
    if (file==NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }
    for (int i =0; i<records; i++)
    {
        fprintf(file,"%s,%s,%s,%s,%s\n",PreTicketDBS[i].UID,PreTicketDBS[i].name,PreTicketDBS[i].PNum,PreTicketDBS[i].OCode,PreTicketDBS[i].DCode);
        if (ferror(file))
        {
            printf("Error writing to file.\n");
            return 1;
        }
    }

    fclose(file);
}
