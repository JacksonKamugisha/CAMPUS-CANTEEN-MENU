#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char end;

bool loop = true;
int p1 = 1500, p2 = 1500, p3 = 1000, p4 = 2000, p5 = 3000, quantity, discount, cost, total;

void smart_menu();
void checkout();
void main_loop(int choice);

int main()
{
    while(loop)
    {
        smart_menu();
    }

    return 0;
}

void smart_menu()
{
    int option = 0;
    printf("\nWELCOME TO THE CAMPUS CANTEEN!\n");
    printf("\n+==========================================+\n");
    printf("||     Samosas       |      UGX 1,500     ||\n");
    printf("||     Sausages      |      UGX 1,500     ||\n");
    printf("||     Chapati       |      UGX 1,000     ||\n");
    printf("||     Kebabs        |      UGX 2,000     ||\n");
    printf("||     Juice         |      UGX 3,000     ||\n");
    printf("+==========================================+\n");
    printf("\nPick a snack: ");
    scanf("%d", &option);
    printf("\nHow many snacks?\n");
    scanf("%d", &quantity);
    if (quantity<=0)
    {
        printf("\nInvalid quantity\n");
    }
    else
    {
        main_loop(option);
    }
}


void main_loop(int choice)
{
    switch(choice)
    {
    case 1:
        cost = quantity * p1;
        printf("\n+==========================================================+\n");
        printf(" ||You have chosen to buy %d Samosas, that will cost: %d||", quantity, cost);
        printf("\n +========================================================+\n");
        checkout();
        break;
    case 2:
        cost = quantity * p2;
        printf("\n+===========================================================+\n");
        printf(" ||You have chosen to buy %d Sausages, that will cost: %d||", quantity, cost);
        printf("\n +=========================================================+\n");
        checkout();
        break;
    case 3:
        cost = quantity * p3;
        printf("\n+==========================================================+\n");
        printf(" ||You have chosen to buy %d Chapati, that will cost: %d||", quantity, cost);
        printf("\n +========================================================+\n");
        checkout();
        break;
    case 4:
        cost = quantity * p4;
        printf("\n+=========================================================+\n");
        printf(" ||You have chosen to buy %d Kebabs, that will cost: %d||", quantity, cost);
        printf("\n +=======================================================+\n");
        checkout();
        break;
    case 5:
        cost = quantity * p5;
        printf("\n+=================================================================+\n");
        printf(" ||You have chosen to buy %d cups of Juice, that will cost: %d||", quantity, cost);
        printf("\n +===============================================================+\n");
        checkout();
        break;
    default:
        printf("\nNot a menu choice!\n");
        loop = false;
    }
}

void  checkout()
{
    printf("Proceed to checkout?\nY/N\n");
    scanf(" %c", &end);
    if (end == 'Y' || end == 'y')
    {
        total += cost;
        if (total >= 50000)
        {
            discount = total * 0.05;
            total -= discount;
            printf("\nYou've received a discount of UGX %d\n", discount);
            printf("Your total is UGX %d", total);
            loop = false;
        }
        else
        {
            printf("Your total is UGX %d", total);
            loop = false;
        }
    }
}
