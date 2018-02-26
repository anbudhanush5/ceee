#include <stdio.h>
#include<conio.h>
void main()
{
   int x=0,y=1,z,i,n;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       printf("%d ",x);
       z=x+y;
      x=y;
      y=z;
   }
   
    getch();
}
