#include<stdio.h>
void Matrix(int A[][2][2],int b[][2])
{
    int sum=0,i,j,k;
    for(i=0;i!=2;i++)
    {
        for(j=0;j!=2;j++)
        {
            sum=0;
            for(k=0;k!=2;k++)
            {
                sum+=(*(*(*(A)+i)+k))*(*(*(*(A+1)+k)+j));
            }
            *(*(b+i)+j)=sum;
        }
    }
}
int main()
{
    int row,col,i,j,k;
    printf("Enter Rows and Columns Number:");
    scanf("%i %i",&row,&col);  // This is not Working..........
    if(row==col)
    {
        int A[2][2][2],B[2][2]={0};// Only for Square Matrix//
        printf("Enter Matrix A's Elements:\n");
        for(k=0;k!=2;k++)
        {
            if(k==1)
            printf("Enter Matrix B's Elements:\n");
            for(i=0;i!=row;i++)
            {
                for(j=0;j!=col;j++)
                {
                    scanf("%i",&A[k][i][j]);
                }
            }
        }
        printf("________Before Multiplication of Matrix _____\n");
        printf("Matrix A:\n");
        for(k=0;k!=2;k++)
        {
            if(k==1)
            printf("Matrix B:\n");
            for(i=0;i!=row;i++)
            {
                for(j=0;j!=col;j++)
                {
                    printf("%i ",A[k][i][j]);
                }
                printf("\n");
            }
            printf("\n");
        }
        Matrix(A,B);
        printf("___________After Multiplication Of Matrix___________\n");
        for(i=0;i!=2;i++)
        {
            for(j=0;j!=2;j++)
            {
                printf("%i ",B[i][j]);
            }
            printf("\n");
        }
    }
}
