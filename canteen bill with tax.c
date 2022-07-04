#include<stdio.h>
#include<stdlib.h>

void main_menu();
void display();
void display_total_words();

int total=0;
int again;
float gst;
float cgst;
float sgst;

void display()
{
	printf("|********************************************************************|\n");
	printf("   \n##############>>Welcome to SR CANTEEN<<#########################|\n");
    printf("|********************************************************************|\n");
    printf("|################ CANTEEN MENU SR U #################################|\n");
    printf("|********************************************************************|\n");
    printf("|  Item name :--> Price           ||     Item name-->  price         |\n");
    printf("|********************************************************************|\n");
    printf("|####################      >DRINKS<          ########################|\n");
     printf("|*******************************************************************|\n");
    printf("|  0.coke          Rs:-30         ||     1.sprite          Rs:-35    |\n");
    printf("|********************************************************************|\n");
    printf("|  2.fanta         Rs:-40         ||     3.dew             Rs:-20    |\n");
    printf("|********************************************************************|\n");
    printf("|  4.milk          Rs:-15         ||     5.tea             Rs:-20    |\n");
    printf("|********************************************************************|\n");
    printf("|  6.coffee        Rs:-30         ||     more                        |\n");
    printf("|********************************************************************|\n");
    printf("|####################            >FOOD<      ########################|\n");
    printf("|********************************************************************|\n");
    printf("|  0.veg biryani   Rs:-80         ||      1.special meal   Rs:-120   |\n");
    printf("|********************************************************************|\n");
    printf("|  2.mutton biryani Rs:-120       ||      3.manchuria      Rs:-60    |\n");
    printf("|**************************************************************8*****|\n");
    printf("|   4.fried rice    Rs:-60        ||      5.noodles        Rs:-60    |\n");
    printf("|********************************************************************|\n");
    printf("|   6.vegrice       Rs:-60        ||      more                       |\n");
    printf("|********************************************************************|\n");
    printf("|********************************************************************|\n");
    printf("|####################      >ICE CREAMS<      ########################|\n");
    printf("|********|***********************************************************|\n");
    printf("|   0.chocobar     Rs:-50         ||     1.butterscotch     Rs:50    |\n");
    printf("|********************************************************************|\n");
    printf("|   2.pot         Rs:-50          ||     3.venilla          Rs:50    |\n");
    printf("|********************************************************************|\n");
    printf("|   4.meo         Rs:-50          ||     5.diary            Rs:50    |\n");
    printf("|********************************************************************|\n");
    printf("|   6.fruitsalad  Rs:-50          ||     MORE                        |\n");
    printf("|********************************************************************|\n");
    printf("|******    >SR MENU CARD<      **************************************|\n");
    printf("|******       BILLING          **************************************|\n");
    printf("|********************************************************************|\n");
    printf("|********************************************************************|\n");
    
	
    printf("                Welcome to SR CANTEEN AND CAFE.          \n ");
    printf("             +============================+          \n\n");
    printf("  && Please select the ITEAM that you would like to EAT. && \n\n");
    printf("\t\t      [A] DRINKS\n");
    printf("\t\t      [B] FOOD\n");
    printf("\t\t      [C] ICECREAMS\n");
}
int drinkrate[7][2]={  {0,30},
                    {1,35},
                    {2,40},
                    {3,20},
                    {4,15},
                    {5,20},
                    {6,30}
                };
int foodrate[7][2]={{0,80},
                {1,120},
                {2,20},
                {3,60},
                {4,60},
                {5,60},
                {6,60}};
int icecreamrate[7][2]={{0,50},
                {1,50},
                {2,50},
                {3,50},
                {4,50},
                {5,50},
                {6,50}};
int purchased[][3]={{0,0},
                        {0,0},
                        {0,0},
                        {0,0},
                        {0,0},
                        {0,0},
                        {0,0}
                        };
int temp[][3]={{0,0},
                        {0,0},
                        {0,0},
                        {0,0},
                        {0,0},
                        {0,0},
                        {0,0}
                        };
void drink(char drinkmenu[][100]);
void food( char foodmenu[][100]);
void icecream(char icecreammenu[][100]);
void display_bf_bill(char drinkmenu[][100]);
void display_lunch_bill(char foodmenu[][100]);
void display_dinner_bill(char icecreammenu[][100]);
void display_bfmenu();
void repeatbf(char drinkmenu[][100]);
void repeatlunch(char foodmenu[][100]);
void repeatdinner(char icecreammenu[][100]);
void lunch_menucard();
void dinner_menu();

void main()
{ 
    char drinkmenu[][100]={"coke","sprite","fanta","dew","milk","tea","coffee"};
    char foodmenu[][100]={"Veg Biryani","Special meal","muttonbiryani","manchuria","friedrice","noddles","vegrice"};
    char icecreammenu[][100]={"chocobar","kulfi","creambell"};
    char choice;
    do
    {
        enter:
        display();
        printf("Enter your choice here : ");
        scanf("%c", &choice);
        getchar();
        switch(choice)
        {
            case 'A':
            case 'a':printf("\nDRINKS\n");
                    drink(drinkmenu);
                    break;
            case 'B':
             case 'b':printf("\nFOOD\n");
                    food(foodmenu);
                    break;
             case 'C':
            case 'c':printf("\nICECREAM\n");
                    icecream(icecreammenu);
                    break;
           default:printf("\nWrong choice entered Please enter the valid choice!!\n");
                    goto enter;
        }
    }while(choice!='d');
}


void display_bfmenu()
{
    printf("                Welcome to SR CANTEEN.          \n ");
    printf("             +============================+          \n\n");
    printf("                  $  CANTEEN MENU  $ \n\n");
    printf("  && Please select the food that you would like to purchase. && \n\n");
    printf("\t\t   [0] COKE - Rs 30.00\n");
    printf("\t\t   [1] SPRITE - Rs 35.00\n");
    printf("\t\t   [2] FANTA- Rs 40.00\n");
    printf("\t\t   [3] DEW -Rs 20.00\n");
    printf("\t\t   [4] Milk- Rs 15.00\n");
    printf("\t\t   [5] Tea - Rs 20.00\n");
    printf("\t\t   [6] Coffee - Rs 30.00\n");
}
void drink(char drinkmenu[][100]) // Menu Screen
{
    int choice = 0; //local variables
    int quantity = 0;
    int again = 0,amt=0;
    int code,i;
    display_bfmenu();
    printf("\nEnter the code:: ");
    scanf("%d", &code);
    getchar();
    printf("Total is %d\n\n",total);
    if(code>=0&&code<=6)
    {
        printf("\nEnter the quantity::");
        scanf("%d",&quantity);
        purchased[code][1]= quantity*drinkrate[code][1]; //purchased[code][1]+ (quantity*bfrate[code][1]);/
        total+=purchased[code][ 1];
        printf("Total is %d\n\n",total);
        gst=total*0.12;
        cgst=gst/2;
        sgst=cgst;
    }
    else
    {
        printf("\nInvalid code entered, Please enter the code again!!!!\n\n");
        drink(drinkmenu);
    }
    repeatbf(drinkmenu);
}
void repeatbf(char drinkmenu[][100])
{
    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
    scanf("%d",&again);
    if (again == 1)
            drink(drinkmenu);
    else if (again == 2 )
    {
        display_bf_bill(drinkmenu);
        exit(0);
    }
    else
    {
        printf("\n\n\t\tSorry Invalid Decision Entered\n");
        repeatbf(drinkmenu);
    }
}
void display_bf_bill(char drinkmenu[][100])
{
    int i;
    printf("  +#######################################################+          \n\n");
    printf("                      SR CANTEEN & CAFE                   \n");
    printf("                    BILLING INFORMATION                \n");
    printf("\t\t ITEMS\t\tPrice(in Rs.)\n");
    for(i=0;i<7;i++)
    {
        if(purchased[i][1]!=0)
        {
            printf("\t\t%s\t\t",drinkmenu[i]);
            printf("%d\n",purchased[i][1]); //purchased[i][1]);/
        }
    }
    printf("\t\tGST=Rs.%0.2f\n",gst);
    printf("\t\tC-GST=Rs.%0.2f\n",cgst);
    printf("\t\tS-GST=Rs.%0.2f\n",sgst);
    printf("\t\tTotal=Rs.%0.2f\n",total+gst);
    display_total_words();
    printf("\n\n  +####################################################+          \n\n");

}
void display_lunch_bill(char foodmenu[][100])
{
    int i;
    printf("  +~~~~~~~~~~~~~~~~~~~~+          \n\n");
    printf("                      SR CANTEEN & CAFE                   \n");
    printf("                    BILLING INFORMATION                \n");
    printf("\t\t ITEMS\t\t\tPrice(in Rs.)\n");
    for(i=0;i<7;i++)
    {
        if(purchased[i][1]!=0)
        {
            printf("\t\t %s \t\t",foodmenu[i]);
            printf("%d\n",purchased[i][1]);
        }
    }
    printf("\t\tGST=Rs.%0.2f\n",gst);
    printf("\t\tC-GST=Rs.%0.2f\n",cgst);
    printf("\t\tS-GST=Rs.%0.2f\n",sgst);
    printf("\t\tTotal=Rs.%0.2f\n",total+gst);
    display_total_words();
    printf("\n\n  +~~~~~~~~~~~~~~~~~~~~+          \n\n");
}
void display_dinner_bill(char icecreammenu[][100])
{
    int i;
    printf("  +~~~~~~~~~~~~~~~~~~~~+          \n\n");
    printf("                      SR CANTEEN & CAFE                   \n");
    printf("                    BILLING INFORMATION                \n");
    printf("\t\t ITEMS\t\t\tPrice(in Rs.)\n");
    for(i=0;i<7;i++)
    {
        if(purchased[i][1]!=0)
        {
            printf("\t\t %s \t\t",icecreammenu[i]);
            printf("%d\n",purchased[i][1]);
        }

    }
    printf("\t\tGST=Rs.%0.2f\n",gst);
    printf("\t\tC-GST=Rs.%0.2f\n",cgst);
    printf("\t\tS-GST=Rs.%0.2f\n",sgst);
    printf("\t\tTotal=Rs.%0.2f\n\n",total+gst);
    display_total_words();
    printf("\n\n  +~~~~~~~~~~~~~~~~~~~~+          \n\n");
}
void food(char foodmenu[][100]) // Lunch Screen Menu
{
    int choice = 0; //local variables
    int quantity = 0;
    int again = 0,amt=0;
    int code,i;
    lunch_menucard();
    printf("\nEnter the code:: ");
    scanf("%d", &code);
    getchar();
    if(code>=0&&code<=6)
    {
        printf("\nEnter the quantity::");
        scanf("%d",&quantity);
        purchased[code][1]= quantity*foodrate[code][1];
         total+=purchased[code][ 1];
        gst=total*0.12;
        cgst=gst/2;
        sgst=cgst;
    }
    else
    {
        printf("\nInvalid code entered, Please enter the code again!!!!\n\n");
         food(foodmenu);
    }
    repeatlunch(foodmenu);
}
void icecream(char icecreammenu[][100]) //  Screen
{
    int choice = 0; //local variables
    int quantity = 0;
    int again = 0,amt=0;
    int code,i;
    dinner_menu();

    printf("\nEnter the code:: ");
    scanf("%d", &code);
    getchar();
    if(code>=0&&code<=6)
    {
        printf("\nEnter the quantity::");
        scanf("%d",&quantity);
        purchased[code][1]= quantity*icecreamrate[code][1];
        total+=purchased[code][1];
        gst=total*0.12;
        cgst=gst/2;
        sgst=cgst;
    }
    else
    {
        printf("\nInvalid code entered, Please enter the code again!!!!\n\n");
        icecream(icecreammenu);
    }
    repeatdinner(icecreammenu);
}
void lunch_menucard()
{
    printf("                Welcome to SR CANTEEN.          \n ");
    printf("             +============================+          \n\n");
    printf("                   $  food Menu  $ \n\n");
    printf("  && Please select the food that you would like to purchase. && \n\n");
    printf("\t\t   [0] Veg Biryani - Rs 80.00\n");
    printf("\t\t   [1] Special Meal- Rs 120.00\n");
    printf("\t\t   [2] muttonbiryani - Rs 120.00\n");
    printf("\t\t   [3] manchuria- Rs 60.00\n");
    printf("\t\t   [4] friedrice - Rs 60.00\n");
    printf("\t\t   [5] noodles- Rs 60.00\n");
    printf("\t\t   [6] vegrice - Rs 60.00\n");
    printf("Enter your choice here : ");
}
void dinner_menu()
{
    printf("                Welcome to SR CANTEEN.          \n ");
    printf("             +============================+          \n\n");
    printf("                    $  ICECREAM Menu  $ \n\n");
    printf("  && Please select the food that you would like to purchase. && \n\n");
    printf("\t\t   [0] chocobar - Rs 50.00\n");
    printf("\t\t   [1] kulfi- Rs50\n");
    printf("\t\t   [2] creambell - Rs 50.00\n");
    printf("\t\t   [3] venilla - Rs 50.00\n");
    printf("\t\t   [4] meo - Rs 50.00\n");
    printf("\t\t   [5] diary - Rs 50.00\n");
    printf("\t\t   [6] Fruit Salad - Rs 50.00\n");
}
void repeatlunch(char foodmenu[][100])
{
    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
    scanf("%d",&again);
    if (again == 1)
            food(foodmenu);
    else if (again == 2 )
    {
        display_lunch_bill(foodmenu);
        exit(0);
    }
    else
    {
        printf("\n\n\t\tSorry Invalid Decision Entered\n");
        repeatlunch(foodmenu);
    }
}
void repeatdinner(char icecreammenu[][100])
{

    printf("\nWould you like to buy anything else?\n[1] Yes , [2] No : "); // Allows user to choose whether to check-out or buy anything else.
    scanf("%d",&again);
    if (again == 1)
    {
        icecream(icecreammenu);
    }
    else if (again == 2 )
    {
        display_dinner_bill(icecreammenu);
        exit(0);
    }
    else
    {
        printf("\n\n\t\tSorry Invalid Decision Entered\n");
        repeatdinner(icecreammenu);
    }
}
void display_total_words()
{
	int t=total+gst;
    int num=0,digits=0,temp=0;
    while(t != 0)
    {
        num=(num * 10)+(t % 10);
        t/= 10;
        digits++;
    }
    printf("\nNo of digits::%d\n",digits);
    while(num!= 0)
    {
        temp++;
        switch(num%10)
        {
            case 0:
                printf("Zero ");
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
        }
        num = num / 10;
    }
    if(num==0&&digits!=temp)
      printf(" Zero ");
    return;
}
