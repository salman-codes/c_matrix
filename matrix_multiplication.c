// WAP to find the multiplication of two matrices.

#include <stdio.h>
#include <conio.h>
void main()
{
	int i,j,k,mat1[3][3],mat2[3][3],mat3[3][3];
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("mat1[%d][%d]: ",i,j);
			scanf("%d",&mat1[i][j]);
		}
	}

	printf("Matrix 1 _ _ _ _ _ _\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%4d",mat1[i][j]);
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("mat2[%d][%d]: ",i,j);
			scanf("%d",&mat2[i][j]);
		}
	}
	printf("Matrix 2 _ _ _ _ _ _\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%4d",mat2[i][j]);
		printf("\n");
	}
	printf("Multiplication of Matrices is _ _ _ _ _ _ _\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			mat3[i][j]=0;
			for(k=0;k<3;k++)
				mat3[i][j]+=mat1[i][k]*mat2[k][j];
			printf("%4d",mat3[i][j]);
		}
		printf("\n");

	}
	getche();
}