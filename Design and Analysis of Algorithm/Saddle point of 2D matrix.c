#include<stdio.h>
void findsaddle (int*matrix, int rows, int cols)
{
	int i, j,k, saddlefound=0;
	for(i=0;i<rows;i++)
	{
		int *minRowvalue=(matrix+i*cols);
		int colIndex=0;
		for(j=1; j<cols;j++)
		{
			if(*(matrix+i*cols+j)<minRowvalue)
			{
				minRowvalue=(matrix+i*cols+j);
				colIndex=j;
			}
		}
		int issaddlepoint=1;
		for(k=0; k<rows;k++)
		{
			if(*(matrix+k*cols+colIndex)>*minRowvalue)
			{
				issaddlepoint=0;
				break;
			}
		}
		if(issaddlepoint)
		{
			printf("Saddle point found:%d at row %d column %d\n",*minRowvalue, i ,colIndex);
			saddlefound=1;

		}
	}
	if(!saddlefound)
	{
		printf("No saddle point found\n");
	}
}
int main(){
	int rows,cols, i,j;
	printf("Enter the number of rows and columns: ");
	scanf("%d %d", &rows, &cols);
	int matrix[rows][cols];
	printf("Enter the elements of the matrix: \n ");
	for(i=0;i<rows; i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&matrix[i][j]);
		}
	}
	findsaddle(&matrix[0][0], rows,cols);
}
