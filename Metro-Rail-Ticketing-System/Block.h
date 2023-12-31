/*
Group Members:
Shahriar Mahabub Oishik(Team Lead & Backend Developer)
ID: 2023-3-60-073
Pulok Akibuzzaman(Frontend Developer)
ID: 2023-3-60-051
Md. Ashik-Uz-Zaman(Debugger)
ID: 2023-3-60-074
*/
void right()
{
    printf("-------->\n");
}
void Hbothway()
{
    printf("<-------->\n");
}
void up(int x, int y)
{
    MoveCursor(x,y);
    printf("^");
    MoveCursor(x-1,y+1);
    printf("/|\\");
    MoveCursor(x,y+2);
    printf("|");
}
void down(int x, int y)
{
    MoveCursor(x,y);
    printf("|");
    MoveCursor(x-1,y+1);
    printf("\\|/");
    MoveCursor(x,y+2);
    printf("V\n");
}
void Vbothway(int x, int y)
{
    MoveCursor(x,y);
    printf("^");
    MoveCursor(x-1,y+1);
    printf("/|");
    MoveCursor(x,y+2);
    printf("|/");
    MoveCursor(x,y+3);
    printf("V");
}


///Function for Horizontal Line
void Hline(int nth_fill, char fill1,char endpoint)
{
    printf("%c", endpoint);
    for(int li =0; li<nth_fill-2; li++ )
    {
        printf("%c", fill1);
    }

    printf("%c\n", endpoint);
}


///Function for Vertical Line
void Vline(int x, int y, int line,char sign)
{
    for(int j=0; j<line; j++)
    {
        MoveCursor(x,y+j);
        printf("%c", sign);
    }
}


COORD coord = {0, 0};
//Function to move Cursor
void MoveCursor(int a, int b)
{
    coord.X = a;
    coord.Y = b;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
