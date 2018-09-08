// WAP to find the transpose of any given matrix.

#include<stdio.h>
#include<conio.h>
void main()
{
	int mat[3][3],i,j;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("mat[%d][%d]: ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	printf("Matrix_ _ _ _ _ _\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d ",mat[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of matrix will be_ _ _ _ _\n");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%4d",mat[j][i]);
		}
	}
	getch();
}