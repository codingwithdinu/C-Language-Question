#include <stdio.h>

int main() {
    int year , i , j;

    printf("Enter a Year: ");
    scanf("%d", &year);
    
    
    
    
    if(year%4==0 && year%100!=0  ||  year%400==0){
        printf("it is leap year\n");
    }else{
        printf("it is not leap year\n");
    }
    

    printf( "\nEnter 1 For January \n Enter 2 For February \n Enter 3 for March \n Enter 4 For April \n Enter 5 For May \n  Enter 6 For June \n  Enter 7 For July \n  Enter 8 For August \n  Enter 9 For September \n  Enter 10 For October \n  Enter 11 For November \n  Enter 12 For December \n");
    scanf("%d", &i);
    switch (i) {
        case 1:
            printf("January = 31 days\n");
            printf("week =  %d\n" , 31/7);
            printf("hour =  %d\n" , 31*24);
            printf("minutes =  %d\n" , 31*24*60);
            printf("second =  %d\n" , 31*24*60*60);
            break;
        case 2:
            if(year%4==0 && year%100!=0  ||  year%400==0){
            printf("February = 29 days\n");
            printf("week =  %d\n" , 29/7);
            printf("hour =  %d\n" , 29*24);
            printf("minutes =  %d\n" , 29*24*60);
            printf("second =  %d\n" , 29*24*60*60);
            break;
            }else{
            printf("February = 28 days\n");
            printf("week =  %d\n" , 28/7);
            printf("hour =  %d\n" , 28*24);
            printf("minutes =  %d\n" , 28*24*60);
            printf("second =  %d\n" , 28*24*60*60);
            break;
            }
            
        case 3:
            printf("March = 31 days\n", j);
            printf("week =  %d\n" , 31/7);
            printf("hour =  %d\n" , 31*24);
            printf("minutes =  %d\n" , 31*24*60);
            printf("second =  %d\n" , 31*24*60*60);
            break;
        case 4:
            printf("April = 30 days\n", j);
            printf("week =  %d\n" , 30/7);
            printf("hour =  %d\n" , 30*24);
            printf("minutes =  %d\n" , 30*24*60);
            printf("second =  %d\n" , 30*24*60*60);
            break;
        case 5:
            printf("May = 31 days\n", j);
            printf("week =  %d\n" , 31/7);
            printf("hour =  %d\n" , 31*24);
            printf("minutes =  %d\n" , 31*24*60);
            printf("second =  %d\n" , 31*24*60*60);
            break;   
        case 6:
            printf("June = 30 days\n", j);
            printf("week =  %d\n" , 30/7);
            printf("hour =  %d\n" , 30*24);
            printf("minutes =  %d\n" , 30*24*60);
            printf("second =  %d\n" , 30*24*60*60);
            break;
        case 7:
            printf("July = 30 days\n", j);
            printf("week =  %d\n" , 30/7);
            printf("hour =  %d\n" , 30*24);
            printf("minutes =  %d\n", 30*24*60);
            printf("second =  %d\n" , 30*24*60*60);
            break;            
        case 8:
            printf("August = 31 days\n", j);
            printf("week =  %d\n" , 31/7);
            printf("hour =  %d\n" , 31*24);
            printf("minutes =  %d\n" , 31*24*60);
            printf("second =  %d\n" , 31*24*60*60);
            break; 
        case 9:
            printf("September = 30 days\n", j);
            printf("week =  %d\n" , 30/7);
            printf("hour =  %d\n" , 30*24);
            printf("minutes =  %d\n" , 30*24*60);
            printf("second =  %d\n" , 30*24*60*60);
            break;            
        case 10:
            printf("October = 31 days\n", j);
            printf("week =  %d\n" , 31/7);
            printf("hour =  %d\n" , 31*24);
            printf("minutes =  %d\n" , 31*24*60);
            printf("second =  %d\n" , 31*24*60*60);
            break;            
        case 11:
            printf("November = 30 days\n", j);
            printf("week =  %d\n" , 30/7);
            printf("hour =  %d\n" , 30*24);
            printf("minutes =  %d\n" , 30*24*60);
            printf("second =  %d\n" , 30*24*60*60);
            break;            
        case 12:
            printf("December = 31 days\n", j);
            printf("week =  %d\n" , 31/7);
            printf("hour =  %d\n" , 31*24);
            printf("minutes =  %d\n" , 31*24*60);
            printf("second =  %d\n" , 31*24*60*60);
            break;            
        default:
            printf("Invalid Input");
    }
    return 0;
}