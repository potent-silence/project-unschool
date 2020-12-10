#include<stdio.h>
int main()
{
    int monthdays[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int month_date,day_date,month,date,year,d1,totmonthday,days,i=0,ye,choice;
    while(1)
    {
        printf("\n****************CALENDER*****************\n");
        printf("\n 1. To see Month Calender");
        printf("\n 2. To see what Day was on that Date");
        printf("\n 3. Exit");
        printf("\n Enter your choice : ");
        scanf("%d",&choice);

        if(choice==1)
        {
            printf("\nThe Calender of given month(Format mmyyyy)\n");
            printf("Please enter the month(mmyyyy)");
            scanf("%d",&date);
            month=(date/10000);
            year=date%10000;
            if(year%4==0 && year%100!=0 || year%400==0)
            {
                monthdays[2]=29;
            }
            else
            {
                monthdays[2]=28;
            }
            totmonthday=0;
            for(i=1;i<month;i++)
            {
                days=monthdays[i];
                totmonthday=totmonthday+days;
            }
            ye=year-1;
            month_date=(((year+(ye/4)-(ye/100)+(ye/400))+totmonthday-1)%7);
            printf("\n-----------------------------");
            printf("\n MON TUE WED THU FRI SAT SUN\n");
            printf("-----------------------------\n");
            i=0;
            while(i<(month_date))
            {
                printf("    ");
                i++;
            }
            for(i=1;i<(monthdays[month]+1);i++)
            {
                printf(" %d",i);
                if((month_date+i)%7==0)
                {
                    printf("\n");
                }
                else if(i>9)
                {
                    printf(" ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
        else if(choice==2)
        {
            printf("The day you want to search for the Date(Format ddmmyyyy)\n");
            printf("Please enter the Date(ddmmyyyy)");
            scanf("%d",&date);
            d1=date/1000000;
            month=(date/10000)-(d1*100);
            year=date%10000;
            if(year%4==0 && year%100!=0 || year%400==0)
            {
                monthdays[2]=29;
            }
            else
            {
                monthdays[2]=28;
            }
            totmonthday=0;
            for(i=1;i<month;i++)
            {
                days=monthdays[i];
                totmonthday=totmonthday+days;
            }
            ye=year-1;
            day_date=(((year+(ye/4)-(ye/100)+(ye/400))+totmonthday+d1-1)%7);
            switch(day_date)
            {
                case 1:printf("Monday on that Date");
                       break;
                case 2:printf("Tuesday on that Date");
                       break;
                case 3:printf("Wednesday on that Date");
                       break;
                case 4:printf("Thursday on that Date");
                       break;
                case 5:printf("Friday on that Date");
                       break;
                case 6:printf("Saturday on that Date");
                       break;
                default:printf("Sunday on that Date");
                       break;
            }
            printf("\n");
        }
        else if(choice==3)
        {
            break;
        }
        else
        {
            printf("\nInvalid Response.Try Again.");
        }
    }
    return 0;
}
