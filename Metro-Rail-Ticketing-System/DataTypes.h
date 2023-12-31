/*
Group Members:
Shahriar Mahabub Oishik(Team Lead & Backend Developer)
ID: 2023-3-60-073
Pulok Akibuzzaman(Frontend Developer)
ID: 2023-3-60-051
Md. Ashik-Uz-Zaman(Debugger)
ID: 2023-3-60-074
*/
struct Ticket
{
    char UID[9];
    char name[30];
    char PNum[12];
    char DOP[31];
    char DOE[31];
    char DCode[4];
};
struct Member
{
    char name[30];
    char PNum[12];
    char Password[27];
    int Balance;
};
struct MemberTicket
{
    char name[30];
    char PNum[12];
    char OCode[4];
    char DCode[4];
};
struct PreTicket
{
    char UID[9];
    char name[30];
    char PNum[12];
    char OCode[4];
    char DCode[4];
};
