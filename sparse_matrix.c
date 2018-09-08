// WAP to find whether a matrix is sparse or not.

#include <stdio.h>
#include <conio.h>
void main()
{
	int mat[100][100],i,j,m,n,flag=0;
	clrscr();
	printf("Enter dimensions os matrix:");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("mat[%d][%d]: ",i,j);
			scanf("%d",&mat[i][j]);
		}
	}
	printf("Matrix_ _ _ _ _ _\n");
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%4d",mat[i][j]);
		}
	}
	if(mat[i][j]==0)
		++flag;
	if(flag>((m*n)/2))
		printf("\nThe given matrix is not a sparse matrix");
	else
		printf("\nThe given matrix is a sparse matrix");

	getch();
}