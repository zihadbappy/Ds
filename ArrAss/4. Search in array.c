#include<stdio.h>
int main()
{
    int r, c;
printf("\nEneter the no. of rows:\n"); 
scanf("%d", &r);
printf("\nEneter the no. of columns:\n");
scanf("%d", &c);

float a[r][c], x;
int i,j,loc=-1,loc1=-1, times=0;

for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
    printf("Enter element a%d%d: ", i + 1, j + 1);
    scanf("%f",&a[i][j]);
    }
}
    printf("\nEnter element to search:");
    scanf("%f", &x);

 for (i=0; i<r; ++i)
 {
    for(j=0 ; j<c; ++j)
    {
    if(x==a[i][j])
        {
            loc=i;
            loc1=j;
            times++;
            printf("Element found at index: Row %d and Column %d\n",loc+1,loc1+1);
        }
    }
}
    if(times==0) printf("\nElement not found\n");
    else printf("\nTherefore The element occurs %d times in the matrix\n\n", times);

    return 0;
}