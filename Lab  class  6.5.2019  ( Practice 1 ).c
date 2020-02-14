// Question : Write a code to find a year is leap year or not. If the year is not leap year then find the nearest leap year of that year.

#include<stdio.h>
int main()
{
    int year,nearest_leap_year ;
    printf("Enter a year : ");
    scanf("%d",&year);
    if(year%4==0 || year%100==0 && year%400==0) {
        printf("This year is a leap year");
        }
    else if (year%4==1){
            nearest_leap_year = year - 1 ;
        printf("The nearest leap year is : %d",nearest_leap_year);

        }
    else if (year%4==2){
            nearest_leap_year = year + 2 ;
            nearest_leap_year = year - 2 ;
        printf("The nearest leap year is : %d",nearest_leap_year);
        }
    else if (year%4==3){
            nearest_leap_year = year + 1 ;
    printf("The nearest leap year is : %d",nearest_leap_year);
        }

}
