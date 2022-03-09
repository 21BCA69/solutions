/* Write a program to create 3X3 Matrix and print sum of Matrix
Date:18/02/2022 */
#include<stdio.h>
#include<conio.h>
void main()
{
     int m1[3][3],m2[3][3],sum[3][3],i,j;
     clrscr();
     for(i=0;i<3;i++)
     {
       for(j=0;j<3;j++)
       {
	printf("\n Enter Value for a[%d][%d]:",i,j);
	scanf("%d",&m1[i][j]);
       }
       }
       clrscr();
       for(i=0;i<3;i++)
       {
       for(j=0;j<3;j++)
       printf("%d\t",m1[i][j]);
       printf("\n");
       }
       for(i=0;i<3;i++)
      {
       for(j=0;j<3;j++)
       {
	printf("\n Enter Value for a[%d][%d]:",i,j);
	scanf("%d",&m2[i][j]);
       }
      }
       for(i=0;i<3;i++)
       {
       for(j=0;j<3;j++)
       printf("%d\t",m2[i][j]);
       printf("\n");
       }
       clrscr();
       printf("\n Sum of Two Matrix");
       printf("\n-*-*-*-*-*-*-*-*-*-\n");
       for(i=0;i<3;i++)
       {
	for(j=0;j<3;j++)
	{
	 sum[i][j]=m1[i][j]+m2[i][j];
	 printf("%d\t",sum[i][j]);
	}
	printf("\n");
       }
     getch();
}