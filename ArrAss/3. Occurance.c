#include<stdio.h>

int main()
{
    int a[20],i,x,n,occurance=0;
    printf("Enter number of elements:\n");
    scanf("%d",&n);

    printf("Enter %d integers:\n", n);
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);

    printf("Enter element to search:");
    scanf("%d",&x);

    for(i=0;i<n;++i)
    {

        if(a[i]==x)

occurance++;
if (a[i]==x)
      printf("Element found at index %d\n",i+1);
}

    if(occurance==0)
         printf("Element not found");
      else

       printf("Therefore its occurence is :%d \n",occurance);

    return 0;
}