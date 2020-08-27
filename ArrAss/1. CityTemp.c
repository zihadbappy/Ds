#include<stdio.h>
#include<string.h>
const int CITY = 2;
const int DAY = 7;
int main()
{
    char City[2][12]={"Chittagong", "Dhaka"};
    int temp[CITY][DAY];
    char Week[7][10]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

    printf("ENTER TEMPERATURE INPUTS FOR----\n");
    for(int i=0;i<CITY;i++)
    {
        for(int j=0;j<DAY;j++)
        {
            printf("%s, %s: ", City[i], Week[j]);
            scanf("%d", &temp[i][j]);
        }
    }

    printf("\n\nDISPLAYING TEMPARETURES-----------\n\n");
    for(int i=0;i<CITY;i++)
    {
        for(int j=0;j<DAY;j++)
        {
            
            printf("%11s  - %9s : %d\n",City[i],Week[j], temp[i][j]);
        }
        
    printf("\n");
    }
    
    return 0;
}