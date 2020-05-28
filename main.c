#include<stdio.h>
main()
{
    int perc;
    printf("Enter percentage:(in decimal)");
    scanf("%d",&perc);
    if (perc>80)
    {
        printf("Grade A");

    }
    else
    {
        if (perc<80 && perc>=70)
            printf("Grade B");
        else
        {
            if (perc<70 && perc>=60)
                printf("Grade C");
            else{
                if (perc<60 && perc>=45)
                    printf("Grade D");
                else{
                        printf("FAIL");

                }
            }
        }
    }
    return 0;
}
