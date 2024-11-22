
#include<stdio.h>
 
int main()
{
    int ch,qty;
    
    printf("         DINU CAfe\n");
    printf("MENU CARD\n");
    printf("1.COFFEE        Rs:15\n");
    printf("2.TEA           Rs:10\n");
    printf("3.COLD COFFEE   Rs:25\n");
    printf("4.MILK SHAKE    Rs:50\n");
    printf("Enter Your choice  : ");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("\nYou have selected Coffee");
        printf("\nEnter The Qty : ");
        scanf("%d",&qty);
        printf("\nTotal amount : %d",qty*15);
        break;
     case 2:
        printf("\nYou have selected Tea");
        printf("\nEnter The Qty : ");
        scanf("%d",&qty);
        printf("\nTotal amount : %d",qty*10);
        break;
     case 3:
        printf("\nYou have selected Cold Coffee");
        printf("\nEnter The Qty : ");
        scanf("%d",&qty);
        printf("\nTotal amount : %d",qty*25);
        break;
     case 4:
        printf("\nYou have selected Milk Shake");
        printf("\nEnter The Qty : ");
        scanf("%d",&qty);
        printf("\nTotal amount : %d",qty*50);
        break;
     default:
          printf("\nInvalid Product Selection");
          break;
 
    }
    return 0;
}