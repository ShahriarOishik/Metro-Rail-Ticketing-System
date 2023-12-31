/*
Group Members:
Shahriar Mahabub Oishik(Team Lead & Backend Developer)
ID: 2023-3-60-073
Pulok Akibuzzaman(Frontend Developer)
ID: 2023-3-60-051
Md. Ashik-Uz-Zaman(Debugger)
ID: 2023-3-60-074
*/
void HomePage()
{
    system("cls");
    MoveCursor(10,3);
    printf("  __  __      _               _____       _ _   _______ _      _        _   _                _____           _                 ");
    MoveCursor(10,4);
    printf(" |  \\/  |    | |             |  __ \\     (_) | |__   __(_)    | |      | | (_)              / ____|         | |                ");
    MoveCursor(10,5);
    printf(" | \\  / | ___| |_ _ __ ___   | |__) |__ _ _| |    | |   _  ___| | _____| |_ _ _ __   __ _  | (___  _   _ ___| |_ ___ _ __ ___  ");
    MoveCursor(10,6);
    printf(" | |\\/| |/ _ \\ __| '__/ _ \\  |  _  // _` | | |    | |  | |/ __| |/ / _ \\ __| | '_ \\ / _` |  \\___ \\| | | / __| __/ _ \\ '_ ` _ \\ ");
    MoveCursor(10,7);
    printf(" | |  | |  __/ |_| | | (_) | | | \\ \\ (_| | | |    | |  | | (__|   <  __/ |_| | | | | (_| |  ____) | |_| \\__ \\ ||  __/ | | | | |");
    MoveCursor(10,8);
    printf(" |_|  |_|\\___|\\__|_|  \\___/  |_|  \\_\\__,_|_|_|    |_|  |_|\\___|_|\\_\\___|\\__|_|_| |_|\\__, | |_____/ \\__, |___/\\__\\___|_| |_| |_|");
    MoveCursor(10,9);
    printf("                                                                                     __/ |          __/ |                      ");
    MoveCursor(10,10);
    printf("                                                                                    |___/          |___/                       ");

    MoveCursor(10,11);
    Hline(127,'=','=');

    MoveCursor(53,13);
    printf("\e[1m Press Your Desired Option Number: \e[m");

    MoveCursor(42,15);
    printf("\e[1m [1] Tickets \e[m");
    MoveCursor(85,15);
    printf("\e[1m [2] Membership \e[m");
    MoveCursor(42,17);
    printf("\e[1m [3] Timetable \e[m");
    MoveCursor(85,17);
    printf("\e[1m [4] Routes \e[m");

    MoveCursor(65,19);
    printf("\e[1m [ESC] Exit \e[m");
    MoveCursor(147,30);
}

void BuyPreTicket()
{
    system("cls");
    MoveCursor(43,3);
    printf("  ____                _____       _______ _      _        _   ");
    MoveCursor(43,4);
    printf(" |  _ \\              |  __ \\     |__   __(_)    | |      | |  ");
    MoveCursor(43,5);
    printf(" | |_) |_   _ _   _  | |__) | __ ___| |   _  ___| | _____| |_ ");
    MoveCursor(43,6);
    printf(" |  _ <| | | | | | | |  ___/ '__/ _ \\ |  | |/ __| |/ / _ \\ __|");
    MoveCursor(43,7);
    printf(" | |_) | |_| | |_| | | |   | | |  __/ |  | | (__|   <  __/ |_ ");
    MoveCursor(43,8);
    printf(" |____/ \\__,_|\\__, | |_|   |_|  \\___|_|  |_|\\___|_|\\_\___|\\__|");
    MoveCursor(43,9);
    printf("               __/ |                                          ");
    MoveCursor(43,10);
    printf("              |___/                                           ");

    MoveCursor(44,11);
    Hline(61,'=','=');


    MoveCursor(45,15);
    printf("\e[1m Origin: \e[m");
    MoveCursor(45,17);
    printf("\e[1m Destination: \e[m");


    ///HelpBox Line
    Vline(82,13,12,'|');
    Vline(128,13,12,'|');
    MoveCursor(83,12);
    Hline(45,'_','_');
    MoveCursor(83,24);
    Hline(45,'_','_');

    ///Location Box Label
    MoveCursor(96,13);
    printf("\e[1m Station Code  \n\e[m");
    MoveCursor(85,15);
    printf("\e[1m Station:  \n\e[m");
    MoveCursor(120,15);
    printf("\e[1m Code:  \n\e[m");

    ///Location Names
    MoveCursor(85,16);
    printf("\e[1m Aftabnagar\n\e[m");
    MoveCursor(85,17);
    printf("\e[1m Dhaka University\n\e[m");
    MoveCursor(85,18);
    printf("\e[1m Keranigonj\n\e[m");
    MoveCursor(85,19);
    printf("\e[1m Kuril\n\e[m");
    MoveCursor(85,20);
    printf("\e[1m Mirpur DOHS\n\e[m");
    MoveCursor(85,21);
    printf("\e[1m Mogbazar\n\e[m");
    MoveCursor(85,22);
    printf("\e[1m Uttara\n\e[m");

    ///Location Codes
    MoveCursor(120,16);
    printf("\e[1m AFN\n\e[m");
    MoveCursor(120,17);
    printf("\e[1m TSC\n\e[m");
    MoveCursor(120,18);
    printf("\e[1m KRJ\n\e[m");
    MoveCursor(120,19);
    printf("\e[1m KRL\n\e[m");
    MoveCursor(120,20);
    printf("\e[1m MDS\n\e[m");
    MoveCursor(120,21);
    printf("\e[1m MGB\n\e[m");
    MoveCursor(120,22);
    printf("\e[1m UTR\n\e[m");
    MoveCursor(120,23);
}

void ChangePassword()
{
    system("cls");
    ///Title
    MoveCursor(33,3);
    printf("   _____ _                              _____                                    _ ");
    MoveCursor(33,4);
    printf("  / ____| |                            |  __ \\                                  | |");
    MoveCursor(33,5);
    printf(" | |    | |__   __ _ _ __   __ _  ___  | |__) |_ _ ___ _____      _____  _ __ __| |");
    MoveCursor(33,6);
    printf(" | |    | '_ \\ / _` | '_ \\ / _` |/ _ \\ |  ___/ _` / __/ __\\ \\ /\\ / / _ \\| '__/ _` |");
    MoveCursor(33,7);
    printf(" | |____| | | | (_| | | | | (_| |  __/ | |  | (_| \\__ \\__ \\\\ V  V / (_) | | | (_| |");
    MoveCursor(33,8);
    printf("  \\_____|_| |_|\\__,_|_| |_|\\__, |\\___| |_|   \\__,_|___/___/ \\_/\\_/ \\___/|_|  \\__,_|");
    MoveCursor(33,9);
    printf("                            __/ |                                                  ");
    MoveCursor(33,10);
    printf("                           |___/                                                   ");

    ///Horizontal Line
    MoveCursor(34,11);
    Hline(82,'=','=');

    ///Password input
    MoveCursor(53,13);
    Hline(40,'-','-');
    Vline(53,14,1,'|');
    MoveCursor(54,14);
    printf("\e[1mNew password:\e[m");
    MoveCursor(53,15);
    Hline(40,'-','-');
    Vline(92,14,1,'|');

    ///Retype input
    MoveCursor(53,16);
    Hline(40,'-','-');
    Vline(53,17,1,'|');
    MoveCursor(54,17);
    printf("\e[1mRetype:\e[m");
    MoveCursor(53,18);
    Hline(40,'-','-');
    Vline(92,17,1,'|');
}

void ticketconfirm(char Name[],char PNum[],char OCode[], char DCode[],int numT )
{
    system("cls");
    MoveCursor(61,10);
    printf("\e[1m Do you want to confirm ? \e[m");

    MoveCursor(61,12);
    printf("\e[1m Name: \n \e[m");

    MoveCursor(61,13);
    printf("\e[1m Phone Number: \n \e[m");

    MoveCursor(61,14);
    printf("\e[1m Origin: \n \e[m");

    MoveCursor(61,15);
    printf("\e[1m Destination: \n \e[m");

    MoveCursor(61,16);
    printf("\e[1m Number of tickets: \n\e[m");

    MoveCursor(61,17);
    printf("\e[1m Total Fare: \e[m");

    char destination[20];
    CodeConv(DCode,destination);
    char origin[20];
    CodeConv(OCode,origin);

    MoveCursor(58,21);
    printf("\e[1m Press [ENTER] to Confirm. \e[m");
    MoveCursor(59,22);
    printf("\e[1m Press [ESC] to Return. \e[m");
    MoveCursor(67,12);
    printf("%s",Name);
    MoveCursor(75,13);
    printf("%s",PNum);
    MoveCursor(69,14);
    printf("%s",origin);
    MoveCursor(74,15);
    printf("%s",destination);
    MoveCursor(80,16);
    printf("%d",numT);
    MoveCursor(73,17);
    printf("%dTK",TFare(OCode,DCode,numT));
}

void EndScreen()
{
    MoveCursor(56,6);
    printf("  _______ _                 _");
    MoveCursor(56,7);
    printf(" |__   __| |               | |        ");
    MoveCursor(56,8);
    printf("    | |  | |__   __ _ _ __ | | _____  ");
    MoveCursor(56,9);
    printf("    | |  | '_ \\ / _` | '_ \\| |/ / __| ");
    MoveCursor(56,10);
    printf("    | |  | | | | (_| | | | |   <\\__ \\ ");
    MoveCursor(56,11);
    printf("    |_|  |_| |_|\\__,_|_| |_|_|\\_\\___/ ");

    MoveCursor(66,13);
    printf("  ______         ");
    MoveCursor(66,14);
    printf(" |  ____|        ");
    MoveCursor(66,15);
    printf(" | |__ ___  _ __ ");
    MoveCursor(66,16);
    printf(" |  __/ _ \\| '__|");
    MoveCursor(66,17);
    printf(" | | | (_) | |   ");
    MoveCursor(66,18);
    printf(" |_|  \\___/|_|   ");

    MoveCursor(33,20);
    printf("  _    _     _                ____                _____                 _          ");
    MoveCursor(33,21);
    printf(" | |  | |   (_)              / __ \\              / ____|               (_)         ");
    MoveCursor(33,22);
    printf(" | |  | |___ _ _ __   __ _  | |  | |_   _ _ __  | (___   ___ _ ____   ___  ___ ___");
    MoveCursor(33,23);
    printf(" | |  | / __| | '_ \\ / _` | | |  | | | | | '__|  \\___ \\ / _ \\ '__\\ \\ / / |/ __/ _ \\");
    MoveCursor(33,24);
    printf(" | |__| \\__ \\ | | | | (_| | | |__| | |_| | |     ____) |  __/ |   \\ V /| | (_|  __/");
    MoveCursor(33,25);
    printf("  \\____/|___/_|_| |_|\\__, |  \\____/ \\__,_|_|    |_____/ \\___|_|    \\_/ |_|\\___\\___|");
    MoveCursor(33,26);
    printf("                      __/ |                                                        ");
    MoveCursor(33,27);
    printf("                     |___/                                                         ");
    Sleep(1800);
    system("cls");


}

void MainMenu()
{
    system("cls");
    MoveCursor(50,3);
    printf("  __  __       _         __  __                  ");
    MoveCursor(50,4);
    printf(" |  \\/  |     (_)       |  \\/  |                 ");
    MoveCursor(50,5);
    printf(" | \\  / | __ _ _ _ __   | \\  / | ___ _ __  _   _ ");
    MoveCursor(50,6);
    printf(" | |\\/| |/ _` | | '_ \\  | |\\/| |/ _ \\ '_ \\| | | |");
    MoveCursor(50,7);
    printf(" | |  | | (_| | | | | | | |  | |  __/ | | | |_| |");
    MoveCursor(50,8);
    printf(" |_|  |_|\\__,_|_|_| |_| |_|  |_|\\___|_| |_|\\__,_|");

    MoveCursor(51,9);
    Hline(48,'=','=');

    MoveCursor(57,11);
    printf("\e[1m Press Your Desired Option Number: \e[m");

    MoveCursor(44,15);
    printf("\e[1m [1] Buy pre-ticket \e[m");
    MoveCursor(87,15);
    printf("\e[1m [2] Check tickets \e[m");
    MoveCursor(44,17);
    printf("\e[1m [3] Check user info \e[m");
    MoveCursor(87,17);
    printf("\e[1m [4] Top-up balance \e[m");

    MoveCursor(70,19);
    printf("\e[1m [5] Logout \e[m");

}

void MemberLogin()
{
    ///Title
    MoveCursor(40,3);
    printf("  __  __                _                 _                 _       \n");
    MoveCursor(40,4);
    printf(" |  \\/  |              | |               | |               (_)      \n");
    MoveCursor(40,5);
    printf(" | \\  / | ___ _ __ ___ | |__   ___ _ __  | |     ___   __ _ _ _ __  \n");
    MoveCursor(40,6);
    printf(" | |\\/| |/ _ \\ '_ ` _ \\| '_ \\ / _ \\ '__| | |    / _ \\ / _` | | '_ \\ \n");
    MoveCursor(40,7);
    printf(" | |  | |  __/ | | | | | |_) |  __/ |    | |___| (_) | (_| | | | | |\n");
    MoveCursor(40,8);
    printf(" |_|  |_|\\___|_| |_| |_|_.__/ \\___|_|    |______\\___/ \\__, |_|_| |_|\n");
    MoveCursor(40,9);
    printf("                                                       __/ |        \n");
    MoveCursor(40,10);
    printf("                                                      |___/         \n");

    ///Horizontal Line
    MoveCursor(41,11);
    Hline(67,'=','=');

    ///Name input
    MoveCursor(53,13);
    Hline(40,'-','-');
    Vline(53,14,1,'|');
    MoveCursor(55,14);
    printf("\e[1mName:\e[m");
    MoveCursor(53,15);
    Hline(40,'-','-');
    Vline(92,14,1,'|');

    ///Phone Number input
    MoveCursor(53,16);
    Hline(40,'-','-');
    Vline(53,17,1,'|');
    MoveCursor(55,17);
    printf("\e[1mPhone Number:\e[m");
    MoveCursor(53,18);
    Hline(40,'-','-');
    Vline(92,17,1,'|');

    ///Password input
    MoveCursor(53,19);
    Hline(40,'-','-');
    Vline(53,20,1,'|');
    MoveCursor(55,20);
    printf("\e[1mPassword:\e[m");
    MoveCursor(53,21);
    Hline(40,'-','-');
    Vline(92,20,1,'|');

    ///Confirmation & Return
    MoveCursor(61,26);
    printf("\e[1mPress [Enter] to Confirm.\e[m");
    MoveCursor(62,27);
    printf("\e[1mPress [ESC] to Return.\e[m");

}

void Membership()
{
    ///Clearing the Command Prompt
    system("cls");
    ///Heading
    MoveCursor(45,5);
    printf(" __  __                _                   _     _  ");
    MoveCursor(45,6);
    printf("|  \\/  |              | |                 | |   (_) _ __  ");
    MoveCursor(45,7);
    printf("| \\  / | ___ _ __ ___ | |__   ___ _ __ ___| |__  _ | '_ \\ ");
    MoveCursor(45,8);
    printf("| |\\/| |/ _ \\ '_ ` _ \\| '_ \\ / _ \\ '__/ __| '_ \\| || |_) |");
    MoveCursor(45,9);
    printf("| |  | |  __/ | | | | | |_) |  __/ |  \\__ \\ | | | || .__/  ");
    MoveCursor(45,10);
    printf("|_|  |_|\\___|_| |_| |_|_.__/ \\___|_|  |___/_| |_|_||_|    ");

    ///Heading UnderLine
    MoveCursor(45,11);
    Hline(58,'=','=');

    ///Labeling for getting info
    MoveCursor(60,15);
    printf("[1]Subscribe Membership");
    MoveCursor(62,18);
    printf("[2]Already a Member");



}

void MemberSignup()
{
    ///Clearing Console
    system("cls");
    ///Title
    MoveCursor(56,3);
    printf("   _____ _             _    _       \n");
    MoveCursor(56,4);
    printf("  / ____(_)           | |  | |      \n");
    MoveCursor(56,5);
    printf(" | (___  _  __ _ _ __ | |  | |_ __  \n");
    MoveCursor(56,6);
    printf("  \\___ \\| |/ _` | '_ \\| |  | | '_ \\ \n");
    MoveCursor(56,7);
    printf("  ____) | | (_| | | | | |__| | |_) |\n");
    MoveCursor(56,8);
    printf(" |_____/|_|\\__, |_| |_|\____/| .__/\n");
    MoveCursor(56,9);
    printf("            __/ |            | |\n");
    MoveCursor(56,10);
    printf("           |___/             |_|    \n");

    ///Horizontal Line
    MoveCursor(56,11);
    Hline(35,'=','=');

    ///Name input
    MoveCursor(53,13);
    Hline(40,'-','-');
    Vline(53,14,1,'|');
    MoveCursor(55,14);
    printf("\e[1mName:\e[m");
    MoveCursor(53,15);
    Hline(40,'-','-');
    Vline(92,14,1,'|');
    scanf("");

    ///Phone Number input
    MoveCursor(53,16);
    Hline(40,'-','-');
    Vline(53,17,1,'|');
    MoveCursor(55,17);
    printf("\e[1mPhone Number:\e[m");
    MoveCursor(53,18);
    Hline(40,'-','-');
    Vline(92,17,1,'|');

    ///Password input
    MoveCursor(53,19);
    Hline(40,'-','-');
    Vline(53,20,1,'|');
    MoveCursor(55,20);
    printf("\e[1mPassword:\e[m");
    MoveCursor(53,21);
    Hline(40,'-','-');
    Vline(92,20,1,'|');

    ///Confirmation & Return
    MoveCursor(61,24);
    printf("\e[1mPress [Enter] to Confirm.\e[m");
    MoveCursor(62,25);
    printf("\e[1mPress [ESC] to Return.\e[m");

}

void PurchaseTickets()
{
    ///Clearing the Command Prompt
    system("cls");
    ///Heading
    MoveCursor(36,5);
    printf("  _____            _                          _______ _      _        _       ");
    MoveCursor(36,6);
    printf(" |  __ \\          | |                        |__   __(_)    | |      | |      ");
    MoveCursor(36,7);
    printf(" | |__) |   _ _ __| |__   ___ __ _ ___  ___     | |   _  ___| | _____| |_ ___ ");
    MoveCursor(36,8);
    printf(" |  ___/ | | | '__| '_ \\ / __/ _` / __|/ _ \\    | |  | |/ __| |/ / _ \\ __/ __|");
    MoveCursor(36,9);
    printf(" | |   | |_| | |  | | | | (_| (_| \\__ \\  __/    | |  | | (__|   <  __/ |_\\__ \\");
    MoveCursor(36,10);
    printf(" |_|    \\__,_|_|  |_| |_|\\___\\__,_|___/\\___|    |_|  |_|\\___|_|\\_\\___|\\__|___/");

    ///Heading UnderLine
    MoveCursor(37,11);
    Hline(77,'=','=');


    ///Showing Label for Getting Info
    MoveCursor(37,14);
    printf("\e[1m Name:  \n\e[m");
    MoveCursor(37,16);
    printf("\e[1m Phone Number:  \n\e[m");
    MoveCursor(37,18);
    printf("\e[1m Destination Code:  \n\e[m");
    MoveCursor(37,20);
    printf("\e[1m Number of tickets:  \n\e[m");

    ///Confirmation & Cancellation
    MoveCursor(65,27);
    printf("\e[1m Press [Enter] to confirm  \n\e[m");



    ///HelpBox Line
    Vline(82,13,12,'|');
    Vline(128,13,12,'|');
    MoveCursor(83,12);
    Hline(45,'_','_');
    MoveCursor(83,24);
    Hline(45,'_','_');

    ///Location Box Label
    MoveCursor(96,13);
    printf("\e[1m Destination Code  \n\e[m");
    MoveCursor(85,15);
    printf("\e[1m Destination:  \n\e[m");
    MoveCursor(120,15);
    printf("\e[1m Code:  \n\e[m");

    ///Location Names
    MoveCursor(85,16);
    printf("\e[1m Aftabnagar\n\e[m");
    MoveCursor(85,17);
    printf("\e[1m Dhaka University\n\e[m");
    MoveCursor(85,18);
    printf("\e[1m Keranigonj\n\e[m");
    MoveCursor(85,19);
    printf("\e[1m Kuril\n\e[m");
    MoveCursor(85,20);
    printf("\e[1m Mirpur DOHS\n\e[m");
    MoveCursor(85,21);
    printf("\e[1m Mogbazar\n\e[m");
    MoveCursor(85,22);
    printf("\e[1m Uttara\n\e[m");

    ///Location Codes
    MoveCursor(120,16);
    printf("\e[1m AFN\n\e[m");
    MoveCursor(120,17);
    printf("\e[1m TSC\n\e[m");
    MoveCursor(120,18);
    printf("\e[1m KRJ\n\e[m");
    MoveCursor(120,19);
    printf("\e[1m KRL\n\e[m");
    MoveCursor(120,20);
    printf("\e[1m MDS\n\e[m");
    MoveCursor(120,21);
    printf("\e[1m MGB\n\e[m");
    MoveCursor(120,22);
    printf("\e[1m UTR\n\e[m");
    MoveCursor(120,23);

}

void Routes()
{
    ///Cleaning UI
    system("cls");
    ///Heading
    MoveCursor(57,5);
    printf(" _____             _");
    MoveCursor(57,6);
    printf("|  __ \\           | |");
    MoveCursor(57,7);
    printf("| |__) |___  _   _| |_ ___  ___ ");
    MoveCursor(57,8);
    printf("|  _  // _ \\| | | | __/ _ \\/ __|");
    MoveCursor(57,9);
    printf("| | \\ \\ (_) | |_| | ||  __/\\__ \\");
    MoveCursor(57,10);
    printf("|_|  \\_\\___/ \\__,_|\\__\\___||___/");

    ///Heading UnderLine
    MoveCursor(57,11);
    Hline(32,'=','=');

    MoveCursor(59,13);
    printf("Aftabnagar");
    Vbothway(62,14);
    MoveCursor(59,18);
    printf("Mogbazar");
    Vbothway(62,19);
    MoveCursor(61,23);
    printf("TSC");
    Vbothway(62,24);
    MoveCursor(58,28);
    printf("Keranigonj");
    MoveCursor(70,13);
    Hbothway();
    MoveCursor(81,13);
    printf("Kuril");
    Vbothway(83,14);
    MoveCursor(80,18);
    printf("Uttara");
    Vbothway(83,19);
    MoveCursor(78,23);
    printf("Mirpur DOHS");

}

void ShowTickets()
{
    ///Cleaning Everything
    system("cls");
    ///Title
    MoveCursor(43,5);
    printf("   _____ _                     _______ _      _        _        ");
    MoveCursor(43,6);
    printf("  / ____| |                   |__   __(_)    | |      | |       ");
    MoveCursor(43,7);
    printf(" | (___ | |__   _____      __    | |   _  ___| | _____| |_ ___  ");
    MoveCursor(43,8);
    printf("  \\___ \\| '_ \\ / _ \\ \\ /\\ / /    | |  | |/ __| |/ / _ \\ __/ __|");
    MoveCursor(43,9);
    printf("  ____) | | | | (_) \\ V  V /     | |  | | (__|   <  __/ |_\\__ \\ ");
    MoveCursor(43,10);
    printf(" |_____/|_| |_|\\___/ \\_/\\_/      |_|  |_|\\___|_|\\_\\___|\\__|___/ ");

    ///Horizontal Line
    MoveCursor(44,11);
    Hline(62,'=','=');

    ///Name input
    MoveCursor(53,13);
    Hline(40,'-','-');
    Vline(53,14,1,'|');
    MoveCursor(55,14);
    printf("\e[1mName:\e[m");
    MoveCursor(53,15);
    Hline(40,'-','-');
    Vline(92,14,1,'|');

    ///Phone Number input
    MoveCursor(53,16);
    Hline(40,'-','-');
    Vline(53,17,1,'|');
    MoveCursor(55,17);
    printf("\e[1mPhone Number:\e[m");
    MoveCursor(53,18);
    Hline(40,'-','-');
    Vline(92,17,1,'|');
}
void SplashScreen()
{
    MoveCursor(44,4);
    printf(" __          __ ______  _      _____ ____  __  __ ______ ");
    MoveCursor(44,5);
    printf(" \\ \\        / /|  ____|| |    / ____/ __ \\|  \\/  |  ____|");
    MoveCursor(44,6);
    printf("  \\ \\  /\\  / / | |__   | |   | |   | |  | | \\  / | |__   ");
    MoveCursor(44,7);
    printf("   \\ \\/  \\/ /  |  __|  | |   | |   | |  | | |\\/| |  __|  ");
    MoveCursor(44,8);
    printf("    \\  /\\  /   | |____ | |___| |___| |__| | |  | | |____ ");
    MoveCursor(44,9);
    printf("     \\/  \\/    |______||______\\_____\\____/|_|  |_|______|");
    MoveCursor(65,11);
    printf("  _        ");
    MoveCursor(65,12);
    printf(" | |_ ___ ");
    MoveCursor(65,13);
    printf(" | __/ _ \\ ");
    MoveCursor(65,14);
    printf(" | || (_) |");
    MoveCursor(65,15);
    printf("  \\__\\___/ ");
    MoveCursor(42,17);
    printf("  __  __ ______ _______ _____   ____  _____            _____ _      ");
    MoveCursor(42,18);
    printf(" |  \\/  |  ____|__   __|  __ \\ / __ \\|  __ \\     /\\   |_   _| |     ");
    MoveCursor(42,19);
    printf(" | \\  / | |__     | |  | |__) | |  | | |__) |   /  \\    | | | |    ");
    MoveCursor(42,20);
    printf(" | |\\/| |  __|    | |  |  _  /| |  | |  _  /   / /\\ \\   | | | |     ");
    MoveCursor(42,21);
    printf(" | |  | | |____   | |  | | \\ \\| |__| | | \\ \\  / ____ \\ _| |_| |____ ");
    MoveCursor(42,22);
    printf(" |_|  |_|______|  |_|  |_|  \\_\\\\____/|_|  \\_\\/_/    \\_\\_____|______|");
    MoveCursor(21,24);
    printf("  _______ _____ _____ _  ________ _______ _____ _   _  _____    _______     _______ _______ ______ __  __ ");
    MoveCursor(21,25);
    printf(" |__   __|_   _/ ____| |/ /  ____|__   __|_   _| \\ | |/ ____|  / ____\\ \\   / / ____|__   __|  ____|  \\/  |");
    MoveCursor(21,26);
    printf("    | |    | || |    | ' /| |__     | |    | | |  \\| | |  __  | (___  \\ \\_/ / (___    | |  | |__  | \\  / |");
    MoveCursor(21,27);
    printf("    | |    | || |    |  < |  __|    | |    | | | . ` | | |_ |  \\___ \\  \\   / \\___ \\   | |  |  __| | |\\/| |");
    MoveCursor(21,28);
    printf("    | |   _| || |____| . \\| |____   | |   _| |_| |\\  | |__| |  ____) |  | |  ____) |  | |  | |____| |  | |");
    MoveCursor(21,29);
    printf("    |_|  |_____\\_____|_|\\_\\______|  |_|  |_____|_| \\_|\\_____| |_____/   |_| |_____/   |_|  |______|_|  |_|");
    MoveCursor(147,30);
    Sleep(1700);
    system("cls");

}

void TicketPage()
{
    system("cls");
    MoveCursor(53,5);
    printf("  _______ _      _        _       ");
    MoveCursor(53,6);
    printf(" |__   __(_)    | |      | |");
    MoveCursor(53,7);
    printf("    | |   _  ___| | _____| |_ ___");
    MoveCursor(53,8);
    printf("    | |  | |/ __| |/ / _ \\ __/ __|");
    MoveCursor(53,9);
    printf("    | |  | | (__|   <  __/ |_\\__ \\");
    MoveCursor(53,10);
    printf("    |_|  |_|\\___|_|\\_\\___|\\__|___/");

    MoveCursor(54,11);
    Hline(33,'=','=');


    MoveCursor(53,13);
    printf("\e[1m Press Your Desired Option Number: \e[m");

    MoveCursor(53,15);
    printf("\e[1m[1] Purchase Tickets\e[m\n ");
    MoveCursor(53,17);
    printf("\e[1m[2] Show Tickets\e[m\n ");
    MoveCursor(53,19);
    printf("\e[1m[3] Cancel Tickets\e[m\n ");
    MoveCursor(147,30);



}


void TimeTable()
{
    time_t s;///Declaring Time DataType Variable s
    struct tm* current_time;///Decalring Variable using Stuct tm datatype from Time Header
    s = time(NULL);///Saving S as time container
    current_time = localtime(&s);///saving localtime using tm pointer

    system("cls");
    ///Heading
    MoveCursor(50,5);
    printf("  _______ _                _        _     _      ");
    MoveCursor(50,6);
    printf(" |__   __(_)              | |      | |   | |     ");
    MoveCursor(50,7);
    printf("    | |   _ _ __ ___   ___| |_ __ _| |__ | | ___ ");
    MoveCursor(50,8);
    printf("    | |  | | '_ ` _ \\ / _ \\ __/ _` | '_ \\| |/ _ \\");
    MoveCursor(50,9);
    printf("    | |  | | | | | | |  __/ || (_| | |_) | |  __/");
    MoveCursor(50,10);
    printf("    |_|  |_|_| |_| |_|\\___|\\__\\__,_|_.__/|_|\\___|");

    ///Heading HeadLine
    MoveCursor(52,11);
    Hline(47,'=','=');

    ///Inside Table Label
    MoveCursor(30,15);
    printf("\e[1m Origin\e[m");
    MoveCursor(45,15);
    printf("\e[1m Destination\e[m");
    MoveCursor(66,15);
    printf("\e[1m Arrival Time\e[m");
    MoveCursor(87,15);
    printf("\e[1m Departure Time\e[m");
    MoveCursor(111,15);
    printf("\e[1m Train\e[m");

    ///Box Line
    ///Horizontal
    MoveCursor(25,13);
    Hline(97,'=','=');
    MoveCursor(25,17);
    Hline(97,'=','=');
    MoveCursor(25,33);
    Hline(97,'=','=');
    ///Vertical
    Vline(25,13,20,'|');
    Vline(42,13,20,'|');
    Vline(61,13,20,'|');
    Vline(83,13,20,'|');
    Vline(106,13,20,'|');
    Vline(121,13,20,'|');

    ///Inside the Box
    ///Origin Data
    MoveCursor(28,19);
    printf("\e[1m Keranigonj\e[m");
    MoveCursor(28,20);
    printf("\e[1m TSC\e[m");
    MoveCursor(28,21);
    printf("\e[1m Mogbazar\e[m");
    MoveCursor(28,22);
    printf("\e[1m Aftabnagar\e[m");
    MoveCursor(28,23);
    printf("\e[1m Kuril\e[m");
    MoveCursor(28,24);
    printf("\e[1m Uttara\e[m");
    MoveCursor(28,25);
    printf("\e[1m Mirpur DOHS\e[m");
    MoveCursor(28,26);
    printf("\e[1m Uttara\e[m");
    MoveCursor(28,27);
    printf("\e[1m Kuril\e[m");
    MoveCursor(28,28);
    printf("\e[1m Aftabnagar\e[m");
    MoveCursor(28,29);
    printf("\e[1m Mogbazar\e[m");
    MoveCursor(28,30);
    printf("\e[1m TSC\e[m");

    ///Destination Data
    MoveCursor(45,19);
    printf("\e[1m TSC\e[m");
    MoveCursor(45,20);
    printf("\e[1m Mogbazar\e[m");
    MoveCursor(45,21);
    printf("\e[1m Aftabnagar\e[m");
    MoveCursor(45,22);
    printf("\e[1m Kuril\e[m");
    MoveCursor(45,23);
    printf("\e[1m Uttara\e[m");
    MoveCursor(45,24);
    printf("\e[1m Mirpur DOHS\e[m");
    MoveCursor(45,25);
    printf("\e[1m Uttara\e[m");
    MoveCursor(45,26);
    printf("\e[1m Kuril\e[m");
    MoveCursor(45,27);
    printf("\e[1m Aftabnagar\e[m");
    MoveCursor(45,28);
    printf("\e[1m Mogbazar\e[m");
    MoveCursor(45,29);
    printf("\e[1m TSC\e[m");
    MoveCursor(45,30);
    printf("\e[1m Keranigonj\e[m");

    if ((current_time->tm_hour >= 5 && current_time->tm_hour < 9) || (current_time->tm_hour == 9 && current_time->tm_min <= 29 && current_time->tm_sec <= 59))
    {
        ///Arrival Time
        MoveCursor(68,19);
        printf("\e[1m 06:50AM\e[m");
        MoveCursor(68,20);
        printf("\e[1m 07:20AM\e[m");
        MoveCursor(68,21);
        printf("\e[1m 07:50AM\e[m");
        MoveCursor(68,22);
        printf("\e[1m 08:20AM\e[m");
        MoveCursor(68,23);
        printf("\e[1m 08:50AM\e[m");
        MoveCursor(68,24);
        printf("\e[1m 09:20AM\e[m");
        MoveCursor(68,25);
        printf("\e[1m 06:50AM\e[m");
        MoveCursor(68,26);
        printf("\e[1m 07:20AM\e[m");
        MoveCursor(68,27);
        printf("\e[1m 07:50AM\e[m");
        MoveCursor(68,28);
        printf("\e[1m 08:20AM\e[m");
        MoveCursor(68,29);
        printf("\e[1m 08:50AM\e[m");
        MoveCursor(68,30);
        printf("\e[1m 09:20AM\e[m");

        ///Departure Time
        MoveCursor(90,19);
        printf("\e[1m 07:00AM\e[m");
        MoveCursor(90,20);
        printf("\e[1m 07:30AM\e[m");
        MoveCursor(90,21);
        printf("\e[1m 08:00AM\e[m");
        MoveCursor(90,22);
        printf("\e[1m 08:30AM\e[m");
        MoveCursor(90,23);
        printf("\e[1m 09:00AM\e[m");
        MoveCursor(90,24);
        printf("\e[1m 09:30AM\e[m");
        MoveCursor(90,25);
        printf("\e[1m 07:00AM\e[m");
        MoveCursor(90,26);
        printf("\e[1m 07:30AM\e[m");
        MoveCursor(90,27);
        printf("\e[1m 08:00AM\e[m");
        MoveCursor(90,28);
        printf("\e[1m 08:30AM\e[m");
        MoveCursor(90,29);
        printf("\e[1m 09:00AM\e[m");
        MoveCursor(90,30);
        printf("\e[1m 09:30AM\e[m");
    }
    else if ((current_time->tm_hour >= 9 && current_time->tm_hour < 13) || (current_time->tm_hour == 13 && current_time->tm_min <= 29 && current_time->tm_sec <= 59))
    {
        ///Arrival Time
        MoveCursor(68,19);
        printf("\e[1m 10:50AM\e[m");
        MoveCursor(68,20);
        printf("\e[1m 11:20AM\e[m");
        MoveCursor(68,21);
        printf("\e[1m 11:50AM\e[m");
        MoveCursor(68,22);
        printf("\e[1m 12:20PM\e[m");
        MoveCursor(68,23);
        printf("\e[1m 12:50PM\e[m");
        MoveCursor(68,24);
        printf("\e[1m 01:20PM\e[m");
        MoveCursor(68,25);
        printf("\e[1m 10:50AM\e[m");
        MoveCursor(68,26);
        printf("\e[1m 11:20AM\e[m");
        MoveCursor(68,27);
        printf("\e[1m 11:50AM\e[m");
        MoveCursor(68,28);
        printf("\e[1m 12:20PM\e[m");
        MoveCursor(68,29);
        printf("\e[1m 12:50PM\e[m");
        MoveCursor(68,30);
        printf("\e[1m 01:20PM\e[m");

        ///Departure Time
        MoveCursor(90,19);
        printf("\e[1m 11:00AM\e[m");
        MoveCursor(90,20);
        printf("\e[1m 11:30AM\e[m");
        MoveCursor(90,21);
        printf("\e[1m 12:00PM\e[m");
        MoveCursor(90,22);
        printf("\e[1m 12:30PM\e[m");
        MoveCursor(90,23);
        printf("\e[1m 01:00PM\e[m");
        MoveCursor(90,24);
        printf("\e[1m 01:30PM\e[m");
        MoveCursor(90,25);
        printf("\e[1m 11:00AM\e[m");
        MoveCursor(90,26);
        printf("\e[1m 11:30AM\e[m");
        MoveCursor(90,27);
        printf("\e[1m 12:00PM\e[m");
        MoveCursor(90,28);
        printf("\e[1m 12:30PM\e[m");
        MoveCursor(90,29);
        printf("\e[1m 01:00PM\e[m");
        MoveCursor(90,30);
        printf("\e[1m 01:30PM\e[m");
    }
    else if ((current_time->tm_hour >= 13 && current_time->tm_hour < 17) || (current_time->tm_hour == 17 && current_time->tm_min <= 29 && current_time->tm_sec <= 59))
    {
        ///Arrival Time
        MoveCursor(68,19);
        printf("\e[1m 02:50PM\e[m");
        MoveCursor(68,20);
        printf("\e[1m 03:20PM\e[m");
        MoveCursor(68,21);
        printf("\e[1m 03:50PM\e[m");
        MoveCursor(68,22);
        printf("\e[1m 04:20PM\e[m");
        MoveCursor(68,23);
        printf("\e[1m 05:50PM\e[m");
        MoveCursor(68,24);
        printf("\e[1m 05:20PM\e[m");
        MoveCursor(68,25);
        printf("\e[1m 02:50PM\e[m");
        MoveCursor(68,26);
        printf("\e[1m 03:20PM\e[m");
        MoveCursor(68,27);
        printf("\e[1m 03:50PM\e[m");
        MoveCursor(68,28);
        printf("\e[1m 04:20PM\e[m");
        MoveCursor(68,29);
        printf("\e[1m 04:50PM\e[m");
        MoveCursor(68,30);
        printf("\e[1m 05:20PM\e[m");

        ///Departure Time
        MoveCursor(90,19);
        printf("\e[1m 03:00PM\e[m");
        MoveCursor(90,20);
        printf("\e[1m 03:30PM\e[m");
        MoveCursor(90,21);
        printf("\e[1m 04:00PM\e[m");
        MoveCursor(90,22);
        printf("\e[1m 04:30PM\e[m");
        MoveCursor(90,23);
        printf("\e[1m 05:00PM\e[m");
        MoveCursor(90,24);
        printf("\e[1m 05:30PM\e[m");
        MoveCursor(90,25);
        printf("\e[1m 03:00PM\e[m");
        MoveCursor(90,26);
        printf("\e[1m 03:30PM\e[m");
        MoveCursor(90,27);
        printf("\e[1m 04:00PM\e[m");
        MoveCursor(90,28);
        printf("\e[1m 04:30PM\e[m");
        MoveCursor(90,29);
        printf("\e[1m 05:00PM\e[m");
        MoveCursor(90,30);
        printf("\e[1m 05:30PM\e[m");
    }
    else if ((current_time->tm_hour >= 17 && current_time->tm_hour < 23) || (current_time->tm_hour == 23 && current_time->tm_min <= 59 && current_time->tm_sec <= 59))
    {
        ///Arrival Time
        MoveCursor(68,19);
        printf("\e[1m 06:50PM\e[m");
        MoveCursor(68,20);
        printf("\e[1m 07:20PM\e[m");
        MoveCursor(68,21);
        printf("\e[1m 07:50PM\e[m");
        MoveCursor(68,22);
        printf("\e[1m 08:20PM\e[m");
        MoveCursor(68,23);
        printf("\e[1m 08:50PM\e[m");
        MoveCursor(68,24);
        printf("\e[1m 09:20PM\e[m");
        MoveCursor(68,25);
        printf("\e[1m 06:50PM\e[m");
        MoveCursor(68,26);
        printf("\e[1m 07:20PM\e[m");
        MoveCursor(68,27);
        printf("\e[1m 07:50PM\e[m");
        MoveCursor(68,28);
        printf("\e[1m 08:20PM\e[m");
        MoveCursor(68,29);
        printf("\e[1m 08:50PM\e[m");
        MoveCursor(68,30);
        printf("\e[1m 09:20PM\e[m");

        ///Departure Time
        MoveCursor(90,19);
        printf("\e[1m 07:00PM\e[m");
        MoveCursor(90,20);
        printf("\e[1m 07:30PM\e[m");
        MoveCursor(90,21);
        printf("\e[1m 08:00PM\e[m");
        MoveCursor(90,22);
        printf("\e[1m 08:30PM\e[m");
        MoveCursor(90,23);
        printf("\e[1m 09:00PM\e[m");
        MoveCursor(90,24);
        printf("\e[1m 09:30PM\e[m");
        MoveCursor(90,25);
        printf("\e[1m 07:00PM\e[m");
        MoveCursor(90,26);
        printf("\e[1m 07:30PM\e[m");
        MoveCursor(90,27);
        printf("\e[1m 08:00PM\e[m");
        MoveCursor(90,28);
        printf("\e[1m 08:30PM\e[m");
        MoveCursor(90,29);
        printf("\e[1m 09:00PM\e[m");
        MoveCursor(90,30);
        printf("\e[1m 09:30PM\e[m");
    }

    ///Train Name
    MoveCursor(109,19);
    printf("\e[1m Train A\e[m");
    MoveCursor(109,20);
    printf("\e[1m Train A\e[m");
    MoveCursor(109,21);
    printf("\e[1m Train A\e[m");
    MoveCursor(109,22);
    printf("\e[1m Train A\e[m");
    MoveCursor(109,23);
    printf("\e[1m Train A\e[m");
    MoveCursor(109,24);
    printf("\e[1m Train A\e[m");
    MoveCursor(109,25);
    printf("\e[1m Train B\e[m");
    MoveCursor(109,26);
    printf("\e[1m Train B\e[m");
    MoveCursor(109,27);
    printf("\e[1m Train B\e[m");
    MoveCursor(109,28);
    printf("\e[1m Train B\e[m");
    MoveCursor(109,29);
    printf("\e[1m Train B\e[m");
    MoveCursor(109,30);
    printf("\e[1m Train B\e[m");
    MoveCursor(147,30);
}

void TopUp()
{
    system("cls");
    ///Title
    MoveCursor(57,3);
    printf("  _______            _    _");
    MoveCursor(57,4);
    printf(" |__   __|          | |  | |      ");
    MoveCursor(57,5);
    printf("    | | ___  _ __   | |  | |_ __  ");
    MoveCursor(57,6);
    printf("    | |/ _ \\| '_ \\  | |  | | '_ \\ ");
    MoveCursor(57,7);
    printf("    | | (_) | |_) | | |__| | |_) |");
    MoveCursor(57,8);
    printf("    |_|\\___/| .__/   \\____/| .__/ ");
    MoveCursor(57,9);
    printf("            | |            | |    ");
    MoveCursor(57,10);
    printf("            |_|            |_|    ");

    ///Horizontal Line
    MoveCursor(58,11);
    Hline(33,'=','=');

    ///Amount input
    MoveCursor(58,13);
    Hline(33,'-','-');
    Vline(58,14,1,'|');
    MoveCursor(58,15);
    Hline(33,'-','-');
    Vline(90,14,1,'|');
    MoveCursor(59,14);
    printf(" Amount:");

}


void UserInfo()
{
    system("cls");
    MoveCursor(51,3);
    printf("  _    _                 _____        __      ");
    MoveCursor(51,4);
    printf(" | |  | |               |_   _|      / _|     ");
    MoveCursor(51,5);
    printf(" | |  | |___  ___ _ __    | |  _ __ | |_ ___  ");
    MoveCursor(51,6);
    printf(" | |  | / __|/ _ \\ '__|   | | | '_ \\|  _/ _ \\ ");
    MoveCursor(51,7);
    printf(" | |__| \\__ \\  __/ |     _| |_| | | | || (_) |");
    MoveCursor(51,8);
    printf("  \\____/|___/\\___|_|    |_____|_| |_|_| \\___/ ");

    MoveCursor(52,9);
    Hline(45,'=','=');


    MoveCursor(53,12);
    printf("\e[1m Name: \e[m");
    MoveCursor(53,14);
    printf("\e[1m Phone Number: \e[m");
    MoveCursor(53,16);
    printf("\e[1m Balance: \e[m");

    MoveCursor(65,19);
    printf("\e[1m [1] Change Password \e[m");
    MoveCursor(58,20);
    printf("\e[1m [Backspace] Return to Main Menu \e[m");

}

int TicketCancellation()
{
    system("cls");
    ///Title
    MoveCursor(30,3);
    printf("  _______ _      _        _      _____                     _ _       _   _              \n");
    MoveCursor(30,4);
    printf(" |__   __(_)    | |      | |    / ____|                   | | |     | | (_)             \n");
    MoveCursor(30,5);
    printf("    | |   _  ___| | _____| |_  | |     __ _ _ __   ___ ___| | | __ _| |_ _  ___  _ __   \n");
    MoveCursor(30,6);
    printf("    | |  | |/ __| |/ / _ \\ __| | |    / _` | '_ \\ / __/ _ \\ | |/ _` | __| |/ _ \\| '_ \\  \n");
    MoveCursor(30,7);
    printf("    | |  | | (__|   <  __/ |_  | |___| (_| | | | | (_|  __/ | | (_| | |_| | (_) | | | | \n");
    MoveCursor(30,8);
    printf("    |_|  |_|\\___|_|\\_\\___|\\__|  \\_____\\__,_|_| |_|\\___\\___|_|_|\\__,_|\\__|_|\\___/|_| |_| \n");

    ///Horizontal Line
    MoveCursor(31,10);
    Hline(86,'=','=');

    ///Name input
    MoveCursor(53,13);
    Hline(40,'-','-');
    Vline(53,14,1,'|');
    MoveCursor(55,14);
    printf("\e[1mName:\e[m");
    MoveCursor(53,15);
    Hline(40,'-','-');
    Vline(92,14,1,'|');

    ///Phone Number input
    MoveCursor(53,16);
    Hline(40,'-','-');
    Vline(53,17,1,'|');
    MoveCursor(55,17);
    printf("\e[1mPhone Number:\e[m");
    MoveCursor(53,18);
    Hline(40,'-','-');
    Vline(92,17,1,'|');

    ///Confirmation & Return
    MoveCursor(56,19);
    printf("\e[1m Press [Enter] to Confirm. \e[m");

}




