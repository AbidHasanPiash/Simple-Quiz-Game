#include<stdio.h>   //standard input and output header file
#include<conio.h>   //console input output header file
#include <windows.h>    //windows api(core set of application) header file
#include<ctype.h>   //character type header file(testing and maping character)
#include<stdlib.h>  //includes function envolving memory allowcation proceses control, conversion control header file
#include<time.h>   //for use of exit function
#include<dos.h> // for communicate with basic hardware
void displaypoint()
{
    char name[20];  //string
    float s;    //initializing point
    FILE *f;    //declare a file
    system("cls");  //close previous action
    f=fopen("point.txt","r");   //open that file in read mode
    fscanf(f,"%s%f",&name,&s);  //scan player name and score from that file
    printf("\n\n\t\t ");    //for desihning
    printf("\n\n\t\t %s has secured the highest point %.f\n\n\t\t[We are showing you the highest point only]\n\t\t   Press any key to go to main menu....",name,s);
    printf("\n\n\t\t ");
    fclose(f);  //close that file
    getch();    //for taking a character and wait for main menu
}
void help()
{
    system("cls");  //for closing previous action
    system("color a");  //for color light green
    printf("\n   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
    printf("   \xdb\xdb                                                                    \xdb\xdb");
    printf("   \xdb\xdb\tThis game is very easy to play. You'll be asked some general     \xdb\xdb\n");
    printf("   \xdb\xdb                                                                    \xdb\xdb");
    printf("   \xdb\xdb\tknowledge questions and the right answer is to be chosen among   \xdb\xdb\n");
    printf("   \xdb\xdb                                                                    \xdb\xdb");
    printf("   \xdb\xdb\tthe four options provided. Your point will be calculated at the  \xdb\xdb\n");
    printf("   \xdb\xdb                                                                    \xdb\xdb");
    printf("   \xdb\xdb\ttime. Remember that the more quicker you give answer the more    \xdb\xdb\n");
    printf("   \xdb\xdb                                                                    \xdb\xdb");
    printf("   \xdb\xdb\tskill you will get. Your skill will be calculated and displayed  \xdb\xdb\n");
    printf("   \xdb\xdb                                                                    \xdb\xdb");
    printf("   \xdb\xdb\tat the end. If you secure highest score, your score will be      \xdb\xdb\n");
    printf("   \xdb\xdb                                                                    \xdb\xdb");
    printf("   \xdb\xdb\trecorded. So BEST OF LUCK.                                       \xdb\xdb\n");
    printf("\n   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
    printf("   \xdb\xdb\t             Press any key to go to main menu....                \xdb\xdb\n");
    printf("   \xdb\xdb                                                                    \xdb\xdb");
    printf("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
}
void writeskill(float point, char playername[20])   // initalizing variable
{
    float sc;
    char nm[20];    //string
    FILE *f;    //it's a variable for adeclare a file
    system("cls");  //to remove previous action
    f=fopen("point.txt","r");   //open that file into read mode
    fscanf(f,"%s%f",&nm,&sc);   //for scaning player name and score from that file
    if (point>=sc)
    {
        sc=point;   //assigning new point to old point
        fclose(f);  //for closing that file
        f=fopen("point.txt","w");   //for opening that file in write mode
        fprintf(f,"%s\n%.2f",playername,sc);    //print player name and score in that file
        fclose(f);  //for closing that file
    }
}
int main()
{
    int countq,countr,point=0,c=0;         //countq for question qount, countr for right question
    int r,i;    //r for question randomize, i for loop control(10)
    //int pa;
    int nq[10]; //for randomization
    int w;  //for randomize with loop
    float skill;    //for count skill
    char choice;
    char playername[20];
    time_t initialtime,finaltime;   //pc real rime & player's playing time
    system("cls");  //for closing previous output
mainhome:   //lebel statement for using goto
    system("cls");  //for closing previous output
    system ("color b"); //for color light aqua
    printf("\n   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
    printf("\n   \xdb\xdb                                                                              \xdb\xdb\n");
    printf("   \xdb\xdb\t\t\t\t WELCOME TO OUR QUIZ GAME                          \xdb\xdb\n");
    puts("   \xdb\xdb                                                                              \xdb\xdb");
    puts("   \xdb\xdb\t\t\t\t      Programed by                                 \xdb\xdb");
    puts("   \xdb\xdb                # Abid # Naoshin # Shuvo # Zahid # Sami # Nabila              \xdb\xdb");
    puts("   \xdb\xdb                                                                              \xdb\xdb");
    puts("   \xdb\xdb                                 Designed by                                  \xdb\xdb");
    puts("   \xdb\xdb                           #Abid #Naoshin #Shuvo                              \xdb\xdb");
    puts("   \xdb\xdb                                                                              \xdb\xdb");
    puts("   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
    puts("   \xdb\xdb                                                                              \xdb\xdb");
    puts("   \xdb\xdb\t\t\t\t-------------------------------                    \xdb\xdb");
    puts("   \xdb\xdb                                                                              \xdb\xdb");
    puts("   \xdb\xdb\t\t\t\t> Enter 'S' to start game                          \xdb\xdb");
    puts("   \xdb\xdb                                                                              \xdb\xdb");
    puts("   \xdb\xdb\t\t\t\t> Enter 'V' to view high score                     \xdb\xdb");
    puts("   \xdb\xdb                                                                              \xdb\xdb");
    puts("   \xdb\xdb\t\t\t\t> Enter 'H' for help                               \xdb\xdb");
    puts("   \xdb\xdb                                                                              \xdb\xdb");
    puts("   \xdb\xdb\t\t\t\t> Enter 'Q' to quit                                \xdb\xdb");
    puts("   \xdb\xdb                                                                              \xdb\xdb");
    printf("   \xdb\xdb\t\t\t\t-------------------------------\t\t           \xdb\xdb");
    printf("\n   \xdb\xdb                                                                              \xdb\xdb");
    printf("\n   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
    choice=toupper(getch());    //for making small letter into capital letter
    if (choice=='V')
    {
        displaypoint();
        goto mainhome;  // lebel statement for goto
    }
    else if (choice=='Q')
        exit(1);
    else if (choice=='H')
    {
        help();
        getch();
        goto mainhome;
    }
    else if(choice=='S')
    {
        system("cls");  //for closing previous action
        int phone,i;    //initaling phonne number , i for loop control
        printf("\n\n\n\t\t\t Enter your name\n\t\t\t[One word please]\n\t\t\t");
        scanf("%s",&playername);    //for input player name
        printf("\n\n\t\t\tEnter your contact number\n\t\t\t+8801");
        scanf("%d",&phone); // taking input phone number from user
profile:    //lebel statement for using goto
        if(99999999<phone)
        {
            if(phone>1000000000)
            {
                printf("\n\n\t\t\tInvalid contact number.\n\n\t\t\tTry again...");
                printf("\n\n\t\t\tEnter your contact number\n\t\t\t+8801");
                scanf("%d",&phone);
                goto profile;   //lebel statement for goto
            }
            else
            {
                printf("\n\n\n\t\t\tCreating your profile...");
                for(i=0; i<15; i++) //loop for profile
                {
                    printf("\xdb");
                    Sleep(150);
                }
                goto creat; //lebel statemenrt for goto
            }
        }
        else
        {
            printf("\n\n\t\t\tInvalid contact number.\n\n\t\t\tTry again...");
            printf("\n\n\t\t\tEnter your contact number\n\t\t\t+8801");
            scanf("%d",&phone);
            goto profile;   //lebel statement for goto
        }
creat:  //level statement for goto
        system("cls");  // for closing previous action
        printf("\n\n\t\t\t\tYour profile is...");
        printf("\n\n\n\n   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
        printf("\n   \xdb\xdb                                                                              \xdb\xdb\n");
        printf("\n                              Player's name \t: %s",playername);
        printf("\n                              Contact number\t: 01%d",phone);
        printf("\n\n   \xdb\xdb                                                                              \xdb\xdb");
        printf("\n   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n\n\n\n\t\t\t    Press anything to start game.");
        choice=toupper(getch());    // for making small letter into capital letter
home:   //lebel statement for goto
        system("cls");  // for closing previous action
        initialtime=time(NULL); //initalizing time into null value
        countq=countr=0;
        i=1;
start:  //level statement for goto
        srand ( time(NULL) );
        r=rand()%53+1;  //for randomizing question
        nq[i]=r;
        for (w=0; w<i; w++)
            if (nq[w]==r) goto start;
        switch(r)
        {
        case 1:
            printf("\n\nWhich of the following is the most powerful type of computer?");
            printf("\n\nA.Micro computer\tB.Super computer\n\nC.Mini computer\t\tD.Megaframe computer\n\n");
            countq++;
            if (toupper(getch())=='B')  //converting small letter to capital letter
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!!\nThe correct answer is B.Super computer\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 2:
            printf("\n\n\nWEB pages are written by using...");
            printf("time period is same?");
            printf("\n\nA.FTP\tB.HTTP\n\nC.HTML\tD.URL\n\n");
            countq++;
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  // for counting wright question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.HTML\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 3:
            printf("\n\n\nWho was the first US President?");
            printf("\n\nA.Richard Nikson\tB.Abraham Linkon\n\nC.John F. Kennedy\tD.George Washington\n\n");
            countq++;
            if (toupper(getch())=='D')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.George Washington\nYou lose 5 points");
                c=c+1;  //for counting wright question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 4:
            printf("\n\n\nWho was awarded the 'Man of the Tournament' of ICC WORLD CUP 2007?");
            printf("\n\nA.Glen Magrath     \tB.Mahela Jawardan\n\nC.Mathew Hayden     \tD.Sachin Tendulkar\n\n");
            countq++;
            if (toupper(getch())=='A')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Glen Magrath\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 5:
            printf("\n\n\nWhich country won the Fifa World Cup 1998?");
            printf("\n\nA.France\tB.Brazil\n\nC.Italy\t\tD.England\n\n");
            countq++;
            if (toupper(getch())=='A')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.France\nYou lose 5 points");
                c=c+1;
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 6:
            printf("\n\n\nWhich of the following is an example of non volatile memory?");
            printf("\n\nA.VLSI\tB.ROM\n\nC.LSI\tD.RAM\n\n");
            countq++;
            if (toupper(getch())=='B' )
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.ROM\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 7:
            printf("\n\n\nWhich country was the winner of Cricket World Cup 1987?");
            printf("\n\nA.West Indies\tB.India\n\nC.Australia\tD.England\n\n");
            countq++;
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Australia\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 8:
            printf("\n\n\nWhat is the height of Mount everest in feet?");
            printf("\n\nA.8648\tB.6648\n\nC.8884\tD.8848\n\n");
            countq++;
            if (toupper(getch())=='D')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.8848\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 9:
            printf("\n\n\nWhat is the capital of Denmark?");
            printf("\n\nA.Copenhagen\tB.Helsinki\n\nC.Rome\t\tD.Madrid\n\n");
            countq++;
            if (toupper(getch())=='A')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Copenhagen\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 10:
            printf("\n\n\nOne byte is equivalent to...");
            printf("\n\nA.4 bits\tB.8 bits\n\nC.16 bits\tD.32 bits\n\n");
            countq++;
            if (toupper(getch())=='B')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.8 bits\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }


        case 11:
            printf("\n\n\nWho was the only player to scored 6 successive sixes in an over?");
            printf("\n\nA.Adam Gilchrist\tB.M.S.Dhoni\n\nC.Herschel Gibbs\tD.Sanath Jayasurya\n\n");
            countq++;
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Herschel Gibbs\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 12:
            printf("\n\n\nWho was the only player to take 4 successive wickets?");
            printf("\n\nA.Malinga Bandara\tB.Lasith Malinga\n\nC.Bret Lee\t\tD.Murali Daran\n\n");
            countq++;
            if (toupper(getch())=='B')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Lasith Malinga\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 13:
            printf("\n\n\nWhich country is hosting the Fifa World Cup 2010?");
            printf("\n\nA.South Africa\tB.Italy\n\nC.Argentina\tD.Spain\n\n");
            countq++;
            if (toupper(getch())=='A')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.South Africa\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 14:
            printf("\n\n\nA terabyte comprises...");
            printf("\n\nA.1024 gigabyte  \tB.1024 kilobyte\n\nC.1024 megabyte  \tD.1024 byte\n\n");
            countq++;
            if (toupper(getch())=='A')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.1024 gigabyte\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 15:
            printf("\n\n\nThe S.I. unit of power is...");
            printf("\n\nA.henry\tB.coulomb\n\nC.watt\tD.watt-hour\n\n");
            countq++;
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.watt\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 16:
            printf("\n\n\nWhich is the world's leading egg-producing country?");
            printf("\n\nA.India\tB.China\n\nC.Japan\tD.Malaysia\n\n");
            countq++;
            if (toupper(getch())=='B')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.China\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 17:
            printf("\n\n\nWhich living bird lays the world's smallest egg?");
            printf("\n\nA.Hornbill\tB.Beee Humming Bird\n\nC.Gulls\t\tD.Woodpecker\n\n");
            countq++;
            if (toupper(getch())=='B')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer isB.Beee Humming Bird\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 18:
            printf("\n\n\nWhich living bird lays the world's largest egg?");
            printf("\n\nA.Eagle\t\tB.Vulture\n\nC.Ostrich\tD.Owl\n\n");
            countq++;
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer isC.Ostrich\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 19:
            printf("\n\n\nThe animal kingdom is formally classified into major groups known as...?");
            printf("\n\nA.Families\tB.Sub phyla\n\nC.phyla\t\tD.orders\n\n");
            countq++;
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.phyla\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 20:
            printf("\n\n\nWhich city is known at 'The City of Seven Hills'?");
            printf("\n\nA.Rome\t\tB.Vactican City\n\nC.Madrid\tD.Berlin\n\n");
            countq++;
            if (toupper(getch())=='A')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Rome\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 21:
            printf("\n\n\nWho proposed the GREEN HAUSE Effect in 1824?");
            printf("\n\nA.Louis Hamilton\tB.Joseph Fourier\n\nC.Fernando Alonso\tD.Michael Hendry\n\n");
            countq++;
            if (toupper(getch())=='B')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Joseph Fourier\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 22:
            printf("\n\n\nWho won the Women Australian Open 2007?");
            printf("\n\nA.Martina Hingis\tB.Maria Sarapova\n\nC.Kim Clijster\t\tD.Serena Williams\n\n");
            countq++;
            if (toupper(getch())=='D')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.Serena Williams\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 23:
            printf("\n\n\nName the country where there no mosquito is found?");
            printf("\n\nA.Germany\tB.Spain\n\nC.Japan\t\tD.France\n\n");
            countq++;
            if (toupper(getch())=='D')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.France\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 24:
            printf("\n\n\nWhich of the following is the most toxic gas?");
            printf("\n\nA.Carbon dioxide\tB.Carbon monoxide\n\nC.Nitrogen\t\tD.Hidrogen\n\n");
            countq++;
            if (toupper(getch())=='B')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Carbon monoxide\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 25:
            printf("\n\n\nWhich planet has five moons?");
            printf("\n\nA.Venus    \tB.Mars\n\nC.Uranus\tD.Neptune\n\n");
            countq++;
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Uranus\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 26:
            printf("\n\n\nWhich planets are nearest to the sun?");
            printf("\n\nA.Mars & Venus\t\tB.Mercury & Venus\n\nC.Mercury & Uranus\tD.Earth & Mars\n\n");
            countq++;
            if (toupper(getch())=='B')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Mercury & Venus\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 27:
            printf("\n\n\nWhat is the name of the first test-tube baby of the world?");
            printf("\n\nA.Leslie O'connor\tB.Louise Joy Brown\n\nC.Parrica spear\t\tD.None of these\n\n");
            countq++;
            if (toupper(getch())=='B')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Louise Joy Brown\nYou lose 5 points");
                c=c+1;
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 28:
            printf("\n\n\nWhich of the following is smallest country?");
            printf("\n\nA.Cuba\t\tB.Vatican City\n\nC.Japan\t\tD.Bangladesh\n\n");
            countq++;
            if (toupper(getch())=='B')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Vatican City\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 29:
            printf("\n\n\nWhat is the new name of East Pakistan?");
            printf("\n\nA.Bengal\tB.Bhutan\n\nC.Bangladesh\tD.Pakistan\n\n");
            countq++;
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Bangladesh\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 30:
            printf("\n\n\nWhat is the previous name of China?");
            printf("\n\nA.Anglia\tB.Seres\n\nC.Italia\tD.Chad\n\n");
            countq++;
            if (toupper(getch())=='B')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Seres\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 31:
            printf("\n\n\nWhat is the time required for moon light to reach earth?");
            printf("\n\nA.3 Seconds\tB.3.5 Seconds\n\nC.1 Seconds\tD.1.3 Seconds\n\n");
            countq++;
            if (toupper(getch())=='D')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.1.3 Seconds\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 32:
            printf("\n\n\nWhen is the world population day observed?");
            printf("\n\nA.May 31\tB.June 13\n\nC.July 11\tD.August 10\n\n");
            countq++;
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.July 11\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 33:
            printf("\n\n\nWhich one is city of canals?");
            printf("\n\nA.San Francisco\tB.Venice\n\nC.Balkh\t\tD.Bangladesh\n\n");
            countq++;
            if (toupper(getch())=='B')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Venice\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 34:
            printf("\n\n\nWho is the first Asian Winner of Nobel Prize?");
            printf("\n\nA.C.V.Raman\t\tB.Bill Clinton\n\nC.Rabindranath Tagore\tD.Mother Teresa\n\n");
            countq++;
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Rabindranath Tagore\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 35:
            printf("\n\n\nThe Noble Prize was first awarded in...");
            printf("\n\nA.1982\tB.1906\n\nC.1901\tD.1971\n\n");
            countq++;
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.1901\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 36:
            printf("\n\n\nThe first history book was written by?");
            printf("\n\nA.Euclid\tB.Herodotus\n\nC.Cerodotus\tD.Aristotle\n\n");
            countq++;
            if (toupper(getch())=='B')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Herodotus\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 37:
            printf("\n\n\nWhich one of the following is not a search engine?");
            printf("\n\nA.Google\tB.Duck Go\n\nC.Being\t\tD.Facebook\n\n");
            countq++;
            if (toupper(getch())=='D')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.Facebook\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 38:
            printf("\n\n\nMother Teresa was born in...");
            printf("\n\nA.Switzerland\t\tB.India\n\nC.Albania\t\tD.Germany\n\n");
            countq++;
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Albania\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 39:
            printf("\n\n\nWho is said to be the world's greatest genius?");
            printf("\n\nA.Newton\tB.Einstein\n\nC.Max plank     D.Leonardo da vinci\n\n");
            countq++;
            if (toupper(getch())=='D')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.Leonardo da vinci\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 40:
            printf("\n\n\nWho is the father of Geometry?");
            printf("\n\nA.Euclid\tB.Herodotus\n\nC.Cerodotus\tD.Aristotle\n\n");
            countq++;
            if (toupper(getch())=='A')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Euclid\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 41:
            printf("\n\n\nWimax means?");
            printf("\n\nA.Worldwide Interperobility for Microwave Acess\t\tB.Wireless Fidelity\n\nC.Wifi Maximum\t\t\t\t\t\tD.Wifi Acess\n\n");
            countq++;
            if (toupper(getch())=='A')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Worldwide Interperobility for Microwave Acess\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 42:
            printf("\n\n\nThe working language of UNESCO are?");
            printf("\n\nA.English & French\t\tB.French & Hindi\n\nC.English,French & Russian      D.English & Russian\n\n");
            countq++;
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.English,French & Russian\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 43:
            printf("\n\n\nWhich is the following choice is Bill's birth name?");
            printf("\n\nA.William Henry Gates I \tB.William Henry Gates II\n\nC.William Henry Gates IV\tD.William Henry Gates V\n\n");
            countq++;
            if (toupper(getch())=='B')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.William Henry Gates II\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 44:
            printf("\n\n\nRadium was discovered by...");
            printf("\n\nA.Willard Libby\t\tB.Edward Telle\n\nC.Ernst Haeckel\t\tD.Marie and Pierrie Curie\n\n");
            countq++;
            if (toupper(getch())=='D')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is D.Marie and Pierrie Curie\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 45:
            printf("\n\n\nWhere was the yo-yo invented?");
            printf("\n\nA.France\tB.United States\n\nC.China\t\tD.England\n\n");
            countq++;
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.China\nYou lose 5 points");
                c=c+1; //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 46:
            printf("\n\n\nWho invented Ball-point pen?");
            printf("\n\nA.Willard Libby\t\tB.Otto\n\nC.Laszlo Biro\t\tD.Ernst Haeckel\n\n");
            countq++;
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Laszlo Biro\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 47:
            printf("\n\n\nWhich company made the first commercial portable cellphone in 1983?");
            printf("\n\nA.Nokia\t\tB.Micromax\n\nC.Motorola\tD.Samsung\n\n");
            countq++;
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Motorola\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 48:
            printf("\n\n\nWhat is the name of first mobile phone in the world?");
            printf("\n\nA.Motorola Dyna Tac 700TXX\tB.Motorola Dyna Tac 800TX\n\nC.Motorola Dyna Tac 800T\tD.Nokia Dyna Tac 800TX\n\n");
            countq++;
            if (toupper(getch())=='B')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Motorola Dyna Tac 800TX\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 49:
            printf("\n\n\nHow many people can share a Nobel Prize?");
            printf("\n\nA.Not more then 1\tB.Not more then 2\n\nC.Not more then 3\tD.Not more then 5\n\n");
            countq++;
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.Not more then 3\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 50:
            printf("\n\n\nEarth day is observed on...?");
            printf("\n\nA.16-Feb\tB.14-Apr\n\nC.22-Apr\tD.17-Sep\n\n");
            countq++;
            if (toupper(getch())=='C')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is C.22-Apr\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 51:
            printf("\n\n\nWhat you would call the study of earthquakes?");
            printf("\n\nA.Ecology\tB.Seismology\n\nC.Earthology\tD.Epcenter\n\n");
            countq++;
            if (toupper(getch())=='B')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.Seismology\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 52:
            printf("\n\n\nWhich is the first living creature to go to space?");
            printf("\n\nA.Dog\tB.Rabid\n\nC.Cat\tD.Goat\n\n");
            countq++;
            if (toupper(getch())=='A')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Dog\nYou lose 5 points");
                c=c+1;  //for counting right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        case 53:
            printf("\n\n\nWho invented Logarithm Tables?");
            printf("\n\nA.John Napier\t\tB.John Doe\n\nC.John Harrison\t\tD.John Clinton\n\n");
            countq++;
            if (toupper(getch())=='A')
            {
                printf("\n\nCorrect!!!\nYou got 10 points");
                c=c+1;  //for counting right question
                point=point+10;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                countr++;
                break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.John Napier\nYou lose 5 points");
                c=c+1;  //for case right question
                point=point-5;
                printf("\nAfter answering %d question your point is: %d now\n",c,point);
                break;
            }
        }
        i++;
        if (i<=10) goto start;  //level control for goto
        skill=(float)countr/countq*100; //for skill counting
        if (point<0)
        {
            skill=0;
            printf("\n\n\n\n\n\n\n\n   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
            printf("\n   \xdb\xdb                                                                              \xdb\xdb\n");
            printf("\n                              Player's name \t: %s",playername);
            printf("\n                              Contact number\t: 01%d",phone);
            printf("\n\n                          Your Playing Skill Is\t: %.2f%%",skill);
            printf("\n                              Your point is \t: %d",point);
            printf("\n   \xdb\xdb                                                                              \xdb\xdb");
            printf("\n   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n\n\n");
            puts("PRESS 'Q' TO QUIT GAME WITHOUT SAVING SCORE.\nOR PRESS OTHER KEY TO SAVE SCORE & GO TO MAIN MENU.");
            choice=toupper(getch());    //for converting small letter to capital letter
            if (choice=='Q')    // dicition control statement
                exit (1);   //end program
            else
            {
                writeskill(point,playername);
                goto mainhome; //lebel control for goto
            }
        }
        else
        {
            printf("\n\n\n\n\n\n\n\n   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
            printf("\n   \xdb\xdb                                                                              \xdb\xdb\n");
            printf("\n                              Player's name \t: %s",playername);
            printf("\n                              Contact number\t: 01%d",phone);
            printf("\n\n                          Your Playing Skill Is\t: %.2f%%",skill);
            printf("\n                              Your point is \t: %d",point);
            printf("\n   \xdb\xdb                                                                              \xdb\xdb");
            printf("\n   \xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n\n\n");
            puts("PRESS 'Q' TO QUIT GAME WITHOUT SAVING SCORE.\nOR PRESS OTHER KEY TO SAVE SCORE & GO TO MAIN MENU.");
            choice=toupper(getch());    //converting small letter into capital letter
            if (choice=='Q')    //dicision control statement
                exit (1);   //end program
            else
            {
                writeskill(point,playername);
                goto mainhome;  //lebel control for goto
            }
        }

    }
    else
    {
        printf("\n\n\t\t  Enter the right key\n\n\t\t  ");
        Sleep(700); //for showing "Enter the right key for some time"
        goto mainhome;  //lebel control for goto
    }
    return 0;
}
