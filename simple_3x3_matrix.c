// WAP to enter the matrix of 3X3 and print it

#include <stdio.h>
#include <conio.h>
void main()
{
	int mat[3][3],i,j;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the number: ");
			scanf("%d",&mat[i][j]);
		}
	}
	printf("Matrix_ _ _ _ _ _\n");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%4d",mat[i][j]);
		}
	}
	getch();
	clrscr();
}