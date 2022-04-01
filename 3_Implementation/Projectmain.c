#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
#include<time.h>

void breakFast();
void lunch();
void dinner();
void mainmenu();
void exit();

COORD coord = {0,0};

void gotoxy(int x,int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int num;
float price;
float total;
char choice;
int again;

void main()
{
mainmenu();
}

void mainmenu()
{
char choice = ' ' ;
  printf("\n\t\t\t  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% ");
  printf("\n\t\t\t  *     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~      *");
  printf("\n\t\t\t  $    $                                              $    $");
  printf("\n\t\t\t  $    $                                              $    $");
  printf("\n\t\t\t  $    $           WELCOME TO MY RESTRO               $    $");
  printf("\n\t\t\t  $    $                                              $    $");
  printf("\n\t\t\t  $    $                                              $    $");
  printf("\n\t\t\t  +     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~      +");
  printf("\n\n\n\n\n");

  printf("\n\t\t\t\t\t\t\t MY RESTRO FOOD MENU\n\t\t\t\t\t ________________");
  printf("\n\t\t\t\t\t| [1]  MY RESTRO BREAKFAST MENU                           |");
  printf("\n\t\t\t\t\t| [2]  MY RESTRO LUNCH MENU                               |");
  printf("\n\t\t\t\t\t| [3]  MY RESTRO DINNER MENU                              |");
  printf("\n\t\t\t\t\t| [0] EXIT       ");


  printf("\n\t\t\t\t\t++++++++++++++++++++++++++++++++++++++++++++++++\n");
  printf("\n\t\t\t\t\t");
  time_t t;  
  time(&t);
  printf("\t %s", ctime(&t));
  printf("\n\t\t\t\t\t++++++++++++++++++++++++++++++++++++++++++++++++\n");

  printf("\n\n\n\t\t\t\t\tPLEASE SELECT YOUR CHOICE : ");
  scanf("%c", &choice);

  system("cls");

    {
if (toupper(choice) == '1')
              breakFast();
        else if (toupper(choice) == '2')
              lunch();
        else if (toupper(choice) == '3')
              dinner();
        else if (toupper(choice) == '0')
              exit(0);
        else if (toupper(choice) != '1', '2' , '3' , '0')
            {
               mainmenu();
            }
}

}

void breakFast()
{

  int choice = 0;
  int quantity = 0;
  int again = 0;
  printf("\n\t\t\t      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~      ");
  printf("\n\t\t\t       +                                              +      ");
  printf("\n\t\t\t       +          AVAILABLE  BREAKFAST          +            ");
  printf("\n\t\t\t       +                                              +      ");
  printf("\n\t\t\t      ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~      \n\n");
  printf("\t   [1] EGG BHUJI                         - Rs. 50\n");
  printf("\t   [2] SHAMOSA                           - Rs. 55\n");
  printf("\t   [3] DOSA COMBO                        - Rs. 65\n");
  printf("\t   [4] IDLI COMBO                        - Rs. 70\n");
  printf("\t   [5] VADA COMBO                        - Rs. 45\n");
  printf("\t   [6] POORI COMBO                       - Rs. 50\n");
  printf("\t   [7] BREAD COMBO                       - Rs. 60\n");
  printf("\t   [8] CHOLE COMBO                       - Rs. 65\n");
  printf("\t   [9] ROLL COMBO                        - Rs. 65\n");
  printf("\t   [10] SOUTH INDIAN PACK                - Rs. 65\n");
  printf("\t   [11] Add New One             \n");
  printf("\t   [12] Back To Main-Menu         ");

  printf("\n\n \t   Enter your choice here : ");
  scanf("%d", &choice);
  {
     if (choice == 1)
  {
           printf("\norder details : Egg bhuji with onion,salt,sauce and fried egg\n\n");
      printf("Enter Quantity : ");
      scanf("%d", &quantity);
           total = 50 * quantity ;
           printf("*=====          ");
           printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
           printf("*======          \n");
      printf("Do you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
           scanf("%d", &again);
           system("cls");

if (again == 1 )
breakFast();
else if (again == 2 )
                 mainmenu();
else if (again != 1 , 2)
{
  printf("\n\n\t\tkindly enter a valid answer\n\n");
  exit(0);
}
       }
     
else if ( choice == 2)
       {
 printf("\norder details : sweet SHAMOSA with salt, sugar, garlic and spices\n\n");
 printf("Enter Quantity : ");
 scanf("%d", &quantity);
 total = 60 * quantity ;
 printf("*=====          ");
          printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
          printf("*======          \n");
          printf("Do you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
          scanf("%d", &again);
          system("cls");

if (again == 1 )
breakFast();
else if (again == 2 )
mainmenu();
else if (again != 1 , 2)
{
  printf("\n\n\t\t  kindly enter a valid answer  \n\n");
  exit(0);
}
        }
    else if ( choice == 3 )
        {
 printf("\norder details : tender dosa with masala,onion and butter \n\n");
 printf("Enter Quantity : ");
 scanf("%d", &quantity);
 total = 45 * quantity ;
 printf("*=====          ");
              printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
              printf("*======          \n");
              printf("Do you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
              scanf("%d", &again);
              system("cls");

 if (again == 1 )
{
  breakFast();
                }
 else if (again == 2 )
{
  mainmenu();
}
              else if (again != 1 , 2)
                {
printf("\n\n\t\tkindly enter a valid answer\n\n");
exit(0);
                }
        }
    else if ( choice == 4 )
        {
 printf("\norder details : 5 IDLI with sambar and chutney \n\n");
 printf("Enter Quantity : ");
 scanf("%d", &quantity);
 total = 85 * quantity ;
 printf("*=====          ");
              printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
              printf("*======          \n");
              printf("Do you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
              scanf("%d", &again);
              system("cls");

 if (again == 1 )
{
  breakFast();
                }
 else if (again == 2 )
{
  mainmenu();
}
              else if (again != 1 , 2)
                {
printf("\n\n\t\tkindly enter a valid answer\n\n");
exit(0);
                }
        }
    else if ( choice == 5 )
        {
 printf("\norder details :6 vada with chuffed onion and chutney\n\n");
 printf("Enter Quantity : ");
 scanf("%d", &quantity);
 total = 60 * quantity ;
 printf("*=====          ");
             printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
              printf("*======          \n");
              printf("Do you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
              scanf("%d", &again);
              system("cls");

 if (again == 1 )
{
  breakFast();
                }
 else if (again == 2 )
{
  mainmenu();
}
              else if (again != 1 , 2)
                {
printf("\n\n\t\tkindly enter a valid answer\n\n");
exit(0);
                }
        }
    else if ( choice == 6 )
        {
 printf("\n order details:  6 fried POORI with Chicken keema \n\n");
 printf("Enter Quantity : ");
 scanf("%d", &quantity);
 total = 90 * quantity ;
 printf("*=====          ");
              printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
              printf("*======          \n");
              printf("Do you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
              scanf("%d", &again);
              system("cls");

 if (again == 1 )
{
  breakFast();
                }
 else if (again == 2 )
{
  mainmenu();
}
              else if (again != 1 , 2)
                {
printf("\n\n\t\tkindly enter a valid answer\n\n");
exit(0);
                }
        }
    else if ( choice == 7 )
        {
 printf("\norder details :  fried bread with mutton keema \n\n");
 printf("Enter Quantity : ");
 scanf("%d", &quantity);
 total = 99 * quantity ;
 printf("*=====          ");
              printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
              printf("*======          \n");
              printf("Do you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
              scanf("%d", &again);
              system("cls");

 if (again == 1 )
{
  breakFast();
                }
 else if (again == 2 )
{
  mainmenu();
}
              else if (again != 1 , 2)
                {
printf("\n\n\t\tkindly enter a valid answer\n\n");
exit(0);
                }
        }
    else if ( choice == 8 )
        {
 printf("\norder details : fresh chole with bhature and  1 small onion, \n\n");
 printf("Enter Quantity : ");
 scanf("%d", &quantity);
 total = 35 * quantity ;
 printf("*=====          ");
              printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
              printf("*======          \n");
              printf("Do you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
              scanf("%d", &again);
              system("cls");

 if (again == 1 )
{
  breakFast();
                }
 else if (again == 2 )
{
  mainmenu();
}
              else if (again != 1 , 2)
                {
printf("\n\n\t\tkindly enter a valid answer\n\n");
exit(0);
                }
        }
    else if ( choice == 9 )
        {
 printf("\norder details : egg roll + paneer roll + Chicken roll\n\n");
 printf("Enter Quantity : ");
 scanf("%d", &quantity);
 total = 220 * quantity ;
 printf("*=====          ");
              printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
              printf("*======          \n");
              printf("Do you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
              scanf("%d", &again);
              system("cls");

 if (again == 1 )
{
  breakFast();
                }
 else if (again == 2 )
{
  mainmenu();
}
              else if (again != 1 , 2)
                {
printf("\n\n\t\tkindly enter a valid answer\n\n");
exit(0);
                }
        }
    else if ( choice == 10 )
        {
 printf("\norder details : \n\n");
 printf("Enter Quantity : ");
 scanf("%d", &quantity);
 total = 410 * quantity ;
 printf("*=====          ");
              printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
              printf("*======          \n");
              printf("Do you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
              scanf("%d", &again);
              system("cls");

 if (again == 1 )
{
  breakFast();
                }
 else if (again == 2 )
{
  mainmenu();
}
              else if (again != 1 , 2)
                {
printf("\n\n\t\tkindly enter a valid answer\n\n");
exit(0);
                }
        }
    else if ( choice == 11 )
        {
            FILE *fp, *ft;
            char another, choice;

            struct emp
             {
               char name[40];
               int pri;
             };

    struct emp e; // structure variable creation

    char empname[40]; // string to store name of the food

    long int recsize; // size of each record of food

    fp = fopen("FOS.DAT","rb+");
    if(fp == NULL)
    {
        fp = fopen("FOS.DAT","wb+");
        if(fp == NULL)
        {
            printf("Connot open file");
            exit(1);
        }
    }

    // size of each record i.e. size of structure variable e
    recsize = sizeof(e);

    while(1)
    {
        system("cls");
        gotoxy(30,10);
        printf("1. Add Food");
        gotoxy(30,12);
        printf("2. Display Food");
        gotoxy(30,14);
        printf("3. Delete Food");
        gotoxy(30,16);
        printf("4. Back To Main-Menu");
        gotoxy(30,18);
        printf("Your Choice: ");
        fflush(stdin); // flush the input buffer
        choice  = getche();
        switch(choice)
        {
        case '1':
            system("cls");
            fseek(fp,0,SEEK_END);

            another = 'y';
            while(another == 'y')
            {
                printf("\nEnter Item's Name: ");
                scanf("%s",e.name);
                printf("\nEnter Price: ");
                scanf("%d", &e.pri);
                fwrite(&e,recsize,1,fp);
                printf("\nAdd another record(y/n) ");
                fflush(stdin);
                another = getche();
            }
            break;
        case '2':
            system("cls");
            rewind(fp);
            while(fread(&e,recsize,1,fp)==1)  
            {
                printf("\nItem is %s",e.name);
                printf("\nPrice is: %d",e.pri);
            }
            getch();
            break;
        case '3':
            system("cls");
            another = 'y';
            while(another == 'y')
            {
                printf("\nEnter name of Food to delete: ");
                scanf("%s",empname);
                ft = fopen("Temp.dat","wb");  
                rewind(fp);
                while(fread(&e,recsize,1,fp) == 1)  
                {
                    if(strcmp(e.name,empname) != 0)  
                    {
                        fwrite(&e,recsize,1,ft);
                    }
                }
                fclose(fp);
                fclose(ft);
                remove("FOS.DAT");
                rename("Temp.dat","FOS.DAT");
                fp = fopen("FOS.DAT", "rb+");
                printf("Delete another record(y/n)");
                fflush(stdin);
                another = getche();
            }
            break;
        case '4':
            fclose(fp);
            system("cls");
            breakFast();
        }
    }

        }
    else if ( choice == 12 )
        {
            mainmenu();

        }
    else if (choice != 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10, 11 , 12)
        {
            system("cls");
            printf("\n\n\t\t   Invalid Choice Entered\n\n");
            breakFast();
        }
  }

}

void lunch() /// Lunch Screen Menu
{
  int choice;
  int quantity;
  int again;

  printf("\t               ******************************          \n");
  printf("\t                        Lunch Menu   \n");
  printf("\t               ******************************          \n\n");

  printf("\t   [1] plain rice with dal                      - Rs.300 \n");
  printf("\t   [2] egg fried rice                           - Rs.365 \n");
  printf("\t   [3] chicken fried rice                       - Rs.320 \n");
  printf("\t   [4] jeera fried rice                         - Rs.300 \n");
  printf("\t   [5] Veg chilli with gravy                    - Rs.340 \n");
  printf("\t   [6] chicken chiili with gravy                - Rs.420 \n");
  printf("\t   [7] Fish chilli                              - Rs.480 \n");
  printf("\t   [8] Chicken manchurian                       - Rs.520 \n");
  printf("\t   [9] Paneer tikka                             - Rs.320 \n");
  printf("\t   [10] Prawn Chilli                            - Rs.320 \n");
  printf("\t   [11] vegetable Manchurian                    - Rs.490 \n");
  printf("\t   [12] Panner kofta                            - Rs.490 \n");
  printf("\t   [13] Mutton keema                            - Rs.400 \n");
  printf("\t   [14] Chicken Hyderabadi                      - Rs.590 \n");
  printf("\t   [15] CHOLE                                   - Rs.640 \n");
  printf("\t   [16] Add New One                     \n");
  printf("\t   [17] Back To Main-Menu               \n");

  printf("\n \t   Enter your choice here : ");
  scanf("%d", &choice);
  {
     if (choice == 1)
  {
     printf("\norder details : steam rice with seasonal dal \n\n");
     printf("Enter Quantity : ");
     scanf("%d", &quantity);
     total = 99 * quantity ;
     printf("*=====          ");
          printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
          printf("*======          \n");
       {
      printf("Do you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
               scanf("%d", &again);
      system("cls");
      if (again == 1 )
     lunch();
               else if (again == 2 )
 mainmenu();
      else if (again != 1 , 2)
               {
     printf("\n\n\t\tkindly enter a valid answer\n\n");
     exit(0);
  }
            }
       }
else if ( choice == 2)
       {
 printf("\norder details : fried rice with 3 eggs \n\n");
 printf("Enter Quantity : ");
 scanf("%d", &quantity);
 total = 165 * quantity ;
 printf("*=====          ");
          printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
          printf("*======          \n");
 {
   printf("Do you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
   scanf("%d", &again);
   system("cls");
   if (again == 1 )
  lunch();
   else if (again == 2 )
mainmenu();
   else if (again != 1 , 2)
{
  printf("\n\n\t\tkindly enter a valid answer\n\n");
  exit(0);
}
 }
       }
    else if ( choice == 3 )
        {
            printf("\norder details : fried rice with tender Chicken \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 220 * quantity ;
            printf("*=====          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("*======          \n");
            {
printf("Do you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
scanf("%d", &again);
system("cls");
if (again == 1 )
lunch();
else if (again == 2 )
                    mainmenu();
else if (again != 1 , 2)
{
 printf("\n\n\t\tkindly enter a valid answer\n\n");
 exit(0);
}
            }
        }
    else if ( choice == 4 )
        {
            printf("\norder details : jeera rice with veg curry  \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 200 * quantity ;
            printf("*=====          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("*======          \n");
            {
printf("Do you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
scanf("%d", &again);
system("cls");
if (again == 1 )
lunch();
else if (again == 2 )
                    mainmenu();
else if (again != 1 , 2)
{
 printf("\n\n\t\tkindly enter a valid answer\n\n");
 exit(0);
}
            }
        }
    else if ( choice == 5 )
        {
            printf("\n veg rice with vegtable chilli \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 210 * quantity ;
            printf("*=====          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("*======          \n");
            {
printf("Do you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
scanf("%d", &again);
system("cls");
if (again == 1 )
lunch();
else if (again == 2 )
                    mainmenu();
else if (again != 1 , 2)
{
 printf("\n\n\t\tkindly enter a valid answer\n\n");
 exit(0);
}
            }
        }
    else if ( choice == 6 )
        {
            printf("\n Chicken chilli with normal rice \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 220 * quantity ;
            printf("*=====          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("*======          \n");
            {
printf("Do you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
scanf("%d", &again);
system("cls");
if (again == 1 )
 lunch();
else if (again == 2 )
                      mainmenu();
else if (again != 1 , 2)
{
 printf("\n\n\t\tkindly enter a valid answer\n\n");
 exit(0);
}
            }
        }
    else if ( choice == 7 )
        {
            printf("\norder details : bengal fish with steam rice \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 280 * quantity ;
            printf("*=====          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("*======          \n");
            {
printf("Do you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
scanf("%d", &again);
system("cls");
if (again == 1 )
lunch();
else if (again == 2 )
                    mainmenu();
else if (again != 1 , 2)
{
 printf("\n\n\t\tkindly enter a valid answer\n\n");
 exit(0);
}
            }
        }
    else if ( choice == 8 )
        {
            printf("\nsteam rice with flavoured chicken masala \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 320 * quantity ;
            printf("*=====          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("*======          \n");
            {
printf("Do you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
scanf("%d", &again);
system("cls");
if (again == 1 )
lunch();
else if (again == 2 )
                    mainmenu();
else if (again != 1 , 2)
{
 printf("\n\n\t\tkindly enter a valid answer\n\n");
 exit(0);
}
            }
        }
    else if ( choice == 9 )
        {
            printf("\norder details : jeera rice with butter and paneer tikka \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 920 * quantity ;
            printf("*=====          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("*======          \n");
            {
printf("Do you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
scanf("%d", &again);
system("cls");
if (again == 1 )
lunch();
else if (again == 2 )
                    mainmenu();
else if (again != 1 , 2)
{
 printf("\n\n\t\tkindly enter a valid answer\n\n");
 exit(0);
}
            }
        }
    else if ( choice == 10 )
        {
            printf("\norder details : special bali prawn + brown basmati rice\n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 420 * quantity ;
            printf("*=====          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("*======          \n");
            {
printf("Do you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
scanf("%d", &again);
system("cls");
if (again == 1 )
lunch();
else if (again == 2 )
                    mainmenu();
else if (again != 1 , 2)
{
 printf("\n\n\t\tkindly enter a valid answer\n\n");
 exit(0);
}
            }
        }
    else if ( choice == 11 )
        {
            printf("\norder details : rice with vegetable manchurian \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 190 * quantity ;
            printf("*=====          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("*======          \n");
            {
printf("\nDo you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
scanf("%d", &again);
system("cls");
if (again == 1 )
lunch();
else if (again == 2 )
                    mainmenu();
else if (again != 1 , 2)
{
 printf("\n\n\t\tkindly enter a valid answer\n\n");
 exit(0);
}
            }
        }
    else if ( choice == 12 )
        {
            printf("\norder details : rice with special butter panner kofta\n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 890 * quantity ;
            printf("*=====          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("*======          \n");
            {
printf("\nDo you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
scanf("%d", &again);
system("cls");
if (again == 1 )
lunch();
else if (again == 2 )
                    mainmenu();
else if (again != 1 , 2)
{
 printf("\n\n\t\tkindly enter a valid answer\n\n");
 exit(0);
}
            }
        }
    else if ( choice == 13 )
        {
            printf("\norder details : basmati rice with mutton keema \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 400 * quantity ;
            printf("*=====          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("*======          \n");
            {
printf("\nDo you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
scanf("%d", &again);
system("cls");
if (again == 1 )
lunch();
else if (again == 2 )
                    mainmenu();
else if (again != 1 , 2)
{
 printf("\n\n\t\tkindly enter a valid answer\n\n");
 exit(0);
}
            }
        }
    else if ( choice == 14 )
        {
            printf("\norder details : jeera rice with hyderabadi chicken \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 290 * quantity ;
            printf("*=====          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("*======          \n");
            {
printf("\nDo you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
scanf("%d", &again);
system("cls");
if (again == 1 )
lunch();
else if (again == 2 )
                    mainmenu();
else if (again != 1 , 2)
{
 printf("\n\n\t\tkindly enter a valid answer\n\n");
 exit(0);
}
            }
        }
    else if ( choice == 15 )
        {
            printf("\norder details : odia rice with chole desi style \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 440 * quantity ;
            printf("*=====          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("*======          \n");
            {
printf("\nDo you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
scanf("%d", &again);
system("cls");
if (again == 1 )
lunch();
else if (again == 2 )
                    mainmenu();
else if (again != 1 , 2)
{
 printf("\n\n\t\tkindly enter a valid answer\n\n");
 exit(0);
}
            }
        }

    else if ( choice == 16 )
        {
            FILE *fp, *ft;
            char another, choice;

            struct emp
             {
               char name[40];
               int pri;
             };

    struct emp e; // structure variable creation

    char empname[40]; // string to store name of the food

    long int recsize; // size of each record of food

    fp = fopen("FOS.DAT","rb+");
    if(fp == NULL)
    {
        fp = fopen("FOS.DAT","wb+");
        if(fp == NULL)
        {
            printf("Connot open file");
            exit(1);
        }
    }

    // size of each record i.e. size of structure variable e
    recsize = sizeof(e);

    while(1)
    {
        system("cls"); //clear the console window
        gotoxy(30,10); // move the cursor to position 30, 10 from top-left corner
        printf("1. Add Food");
        gotoxy(30,12);
        printf("2. Display Food");
        gotoxy(30,14);
        printf("3. Delete Food");
        gotoxy(30,16);
        printf("4. Back To Main-Menu");
        gotoxy(30,18);
        printf("Your Choice: ");
        fflush(stdin); // flush the input buffer
        choice  = getche();
        switch(choice)
        {
        case '1':
            system("cls");
            fseek(fp,0,SEEK_END); // search the file and move cursor to end of the file
            // here 0 indicates moving 0 distance from the end of the file

            another = 'y';
            while(another == 'y')
            {
                printf("\nEnter Item Name: ");
                scanf("%s",e.name);
                printf("\nEnter Price: ");
                scanf("%d", &e.pri);
                fwrite(&e,recsize,1,fp); // write the record in the file
                printf("\nAdd another record(y/n) ");
                fflush(stdin);
                another = getche();
            }
            break;
        case '2':
            system("cls");
            rewind(fp); //this moves file cursor to start of the file
            while(fread(&e,recsize,1,fp)==1)  // read the file and fetch the record one record per fetch
            {
                printf("\nItem is %s",e.name);
                printf("\nPrice is: %d",e.pri);
            }
            getch();
            break;
        case '3':
            system("cls");
            another = 'y';
            while(another == 'y')
            {
                printf("\nEnter name of Food to delete: ");
                scanf("%s",empname);
                ft = fopen("Temp.dat","wb");  // create a intermediate file for temporary storage
                rewind(fp); // move record to starting of file
                while(fread(&e,recsize,1,fp) == 1)  // read all records from file
                {
                    if(strcmp(e.name,empname) != 0)  // if the entered record match
                    {
                        fwrite(&e,recsize,1,ft); // move all records except the one that is to be deleted to temp file
                    }
                }
                fclose(fp);
                fclose(ft);
                remove("FOS.DAT"); // remove the original file
                rename("Temp.dat","FOS.DAT"); // rename the temp file to original file name
                fp = fopen("FOS.DAT", "rb+");
                printf("Delete another record(y/n)");
                fflush(stdin);
                another = getche();
            }
            break;
        case '4':
            fclose(fp);// close the file
            system("cls");
            lunch();
        }
    }

        }
    else if ( choice == 17 )
        {
            mainmenu();

        }
    else if (choice != 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17)
                    {

system("cls");
printf("\n\n\t\t   Invalid Choice Entered\n\n");
lunch();
                    }
  }

}

void dinner() /// Dinner Menu Screen
{
  int choice;
  int quantity;
  int again;

  printf("\t               *          \n");
  printf("\t                        Dinner Menu   \n");
  printf("\t               *          \n\n");
  printf("\t   [1] Roti + Tadka  -                  Rs.610 \n");
  printf("\t   [2] Roti + Dal Fry  -                Rs.460 \n");
  printf("\t   [3] Butter roti + Veg curry  -       Rs.475 \n");
  printf("\t   [4] Naan + Chole                   - Rs.420 \n");
  printf("\t   [5] kulcha + Dal Fry  -              Rs.460 \n");
  printf("\t   [6] Egg rice  -                      Rs.440 \n");
  printf("\t   [7] Chicken rice          -  `       Rs.535 \n");
  printf("\t   [8] Jeera rice                   -   Rs.410 \n");
  printf("\t   [9] Biryani                       -  Rs.490 \n");
  printf("\t   [10] Chicken Biryani               - Rs.500 \n");
  printf("\t   [11] Egg Biryani                   - Rs.440 \n");
  printf("\t   [12] Mutton Biryani                - Rs.520 \n");
  printf("\t   [13] egg pudding                   - Rs.465 \n");
  printf("\t   [14] masala colddrinks            - Rs.410 \n");
  printf("\t   [15] Lassi                        - Rs.470 \n");
  printf("\t   [16] meetha paan                  - Rs.480 \n");
  printf("\t   [17] Add New One                     \n");
  printf("\t   [18] Back To Main-Menu               \n");


  printf("\n \t   Enter your choice here : ");
  scanf("%d", &choice);
  {
      if (choice == 1)
  {
     printf("\norder details : wheat roti with dal tadka \n\n");
     printf("Enter Quantity : ");
     scanf("%d", &quantity);
     total = 110 * quantity ;
     printf("*=====          ");
          printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
          printf("*======          \n");
       {
      printf("\nDo you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
               scanf("%d", &again);
      system("cls");
      if (again == 1 )
     dinner();
               else if (again == 2 )
 mainmenu();
      else if (again != 1 , 2)
               {
     printf("\n\n\t\tkindly enter a valid answer\n\n");
     exit(0);
  }
       }
}
else if ( choice == 2)
       {
 printf("\norder details :wheat roti with masala dal fry \n\n");
 printf("Enter Quantity : ");
 scanf("%d", &quantity);
 total = 160 * quantity ;
 printf("*=====          ");
          printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
          printf("*======          \n");
 {
   printf("\nDo you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
   scanf("%d", &again);
   system("cls");
   if (again == 1 )
  dinner();
   else if (again == 2 )
mainmenu();
   else if (again != 1 , 2)
{
  printf("\n\n\t\tkindly enter a valid answer\n\n");
  exit(0);
}
 }
       }
    else if ( choice == 3 )
        {
            printf("\norder details : day-old rice fried in oil and garlic \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 375 * quantity ;
            printf("*=====          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("*======          \n");
            {
printf("\nDo you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
scanf("%d", &again);
system("cls");
if (again == 1 )
dinner();
else if (again == 2 )
                    mainmenu();
else if (again != 1 , 2)
{
 printf("\n\n\t\tkindly enter a valid answer\n\n");
 exit(0);
}
            }
        }
    else if ( choice == 4 )
        {
            printf("\norder details : naan along with chole \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 120 * quantity ;
            printf("*=====          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("*======          \n");
            {
printf("\nDo you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
scanf("%d", &again);
system("cls");
if (again == 1 )
dinner();
else if (again == 2 )
                    mainmenu();
else if (again != 1 , 2)
{
 printf("\n\n\t\tkindly enter a valid answer\n\n");
 exit(0);
}
            }
        }
    else if ( choice == 5 )
        {
            printf("\norder details : kulcha alomg with dal fry \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 160 * quantity ;
            printf("*=====          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("*======          \n");
            {
printf("\nDo you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
scanf("%d", &again);
system("cls");
if (again == 1 )
dinner();
else if (again == 2 )
                    mainmenu();
else if (again != 1 , 2)
{
 printf("\n\n\t\tkindly enter a valid answer\n\n");
 exit(0);
}
            }
        }
    else if ( choice == 6 )
        {
            printf("\negg rice with fried egg \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 140 * quantity ;
            printf("*=====          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("*======          \n");
            {
printf("\nDo you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
scanf("%d", &again);
system("cls");
if (again == 1 )
dinner();
else if (again == 2 )
                    mainmenu();
else if (again != 1 , 2)
{
 printf("\n\n\t\tkindly enter a valid answer\n\n");
 exit(0);
}
            }
        }
    else if ( choice == 7 )
        {
            printf("\norder details : chicken fried rice with chilly chicken \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 255 * quantity ;
            printf("*=====          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("*======          \n");
            {
printf("\nDo you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
scanf("%d", &again);
system("cls");
if (again == 1 )
dinner();
else if (again == 2 )
                    mainmenu();
else if (again != 1 , 2)
{
 printf("\n\n\t\tkindly enter a valid answer\n\n");
 exit(0);
}
            }
        }
    else if ( choice == 8 )
        {
            printf("\norder details :  jeera rice with panner chilli \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 180 * quantity ;
            printf("*=====          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("*======          \n");
            {
printf("\nDo you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
scanf("%d", &again);
system("cls");
if (again == 1 )
dinner();
else if (again == 2 )
                    mainmenu();
else if (again != 1 , 2)
{
 printf("\n\n\t\tkindly enter a valid answer\n\n");
 exit(0);
}
            }
        }
    else if ( choice == 9 )
        {
            printf("\norder details : veg biryani with raita \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 390 * quantity ;
            printf("*=====          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("*======          \n");
            {
printf("\nDo you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
scanf("%d", &again);
system("cls");
if (again == 1 )
dinner();
else if (again == 2 )
                    mainmenu();
else if (again != 1 , 2)
{
 printf("\n\n\t\tkindly enter a valid answer\n\n");
 exit(0);
}
            }
        }
    else if ( choice == 10 )
        {
            printf("\norder details : chicken biryani with raita \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 200 * quantity ;
            printf("*=====          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("*======          \n");
            {
printf("\nDo you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
scanf("%d", &again);
system("cls");
if (again == 1 )
dinner();
else if (again == 2 )
                    mainmenu();
else if (again != 1 , 2)
{
 printf("\n\n\t\tkindly enter a valid answer\n\n");
 exit(0);
}
            }
        }
    else if ( choice == 11 )
        {
            printf("\norder details : egg biryani with raita \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 140 * quantity ;
            printf("*=====          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("*======          \n");
            {
printf("\nDo you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
scanf("%d", &again);
system("cls");
if (again == 1 )
dinner();
else if (again == 2 )
                    mainmenu();
else if (again != 1 , 2)
{
 printf("\n\n\t\tkindly enter a valid answer\n\n");
 exit(0);
}
            }
        }
    else if ( choice == 12 )
        {
            printf("\norder details : mutton rice with raita \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 420 * quantity ;
            printf("*=====          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("*======          \n");
            {
printf("\nDo you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
scanf("%d", &again);
system("cls");
if (again == 1 )
dinner();
else if (again == 2 )
                    mainmenu();
else if (again != 1 , 2)
{
 printf("\n\n\t\tkindly enter a valid answer\n\n");
 exit(0);
}
 else if ( choice == 13 )
        {
            printf("\norder details : pudding \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 420 * quantity ;
            printf("*=====          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("*======          \n");
            {
printf("\nDo you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
scanf("%d", &again);
system("cls");
if (again == 1 )
dinner();
else if (again == 2 )
                    mainmenu();
else if (again != 1 , 2)
{
 printf("\n\n\t\tkindly enter a valid answer\n\n");
 exit(0);
}
else if ( choice == 14 )
        {
            printf("\norder details : masala cold drinks \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 420 * quantity ;
            printf("*=====          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("*======          \n");
            {
printf("\nDo you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
scanf("%d", &again);
system("cls");
if (again == 1 )
dinner();
else if (again == 2 )
                    mainmenu();
else if (again != 1 , 2)
{
 printf("\n\n\t\tkindly enter a valid answer\n\n");
 exit(0);
}
else if ( choice == 15 )
        {
            printf("\norder details : lassi\n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 420 * quantity ;
            printf("*=====          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("*======          \n");
            {
printf("\nDo you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
scanf("%d", &again);
system("cls");
if (again == 1 )
dinner();
else if (again == 2 )
                    mainmenu();
else if (again != 1 , 2)
{
 printf("\n\n\t\tkindly enter a valid answer\n\n");
 exit(0);
}
else if ( choice == 16 )
        {
            printf("\norder details : paan \n\n");
            printf("Enter Quantity : ");
            scanf("%d", &quantity);
            total = 420 * quantity ;
            printf("*=====          ");
            printf("\nYour total bill amount is Rs.%.2f,\nPayment: CASH\n", total);
            printf("*======          \n");
            {
printf("\nDo you need more items ?\nEnter [1] - Yes, Enter [2] - No : ");
scanf("%d", &again);
system("cls");
if (again == 1 )
dinner();
else if (again == 2 )
                    mainmenu();
else if (again != 1 , 2)
{
 printf("\n\n\t\tkindly enter a valid answer\n\n");
 exit(0);
}
            }
        }
            }
        }
            }
        }
            }
        }
            }

        }
  }
}
