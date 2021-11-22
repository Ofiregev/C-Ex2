#include <stdio.h>
#include "my_mat.h"
#define n 10
#define maxint 1000
int matrix[n][n];
void findShortest()
{
    int i, j, k;
    for (k = 0; k < n; k++)
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                if(matrix[i][j]==0){
                     matrix[i][j]=maxint;
                }
                matrix[i][j] = min(matrix[i][j], matrix[i][k] + matrix[k][j]);
            }
        }
    }
}

int min(int a, int b)
{

    return (a > b) ? b : a;
}

void input()
{

    int e, r;
    for (e = 0; e < n; e++)
    {
        for (r = 0; r < n; r++)
        {
            scanf("%d", &matrix[e][r]);
            // for(e = 0; e < n; e++){
            //     for(r = e+1; r <n;r++){

            //     printf("Please enter element (%d, %d): ", e, r);

            //     scanf("%d", &input);
            //     matrix[e][r] = input;
            //     matrix[r][e]=input;
        }
    }
    findShortest();

    // int p;
    // int q;
    // for (p = 0; p < n; p++)
    // {
    //     for (q = 0; q < n; ++q)
    //     {
    //         printf("%d, ", matrix[p][q]);
    //     }
    //     printf("\n");
    // }
}

void hasPath(int i, int j)
{

    if (matrix[i][j] != 1000)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}
void shortestPath(int i, int j)
{
    if (matrix[i][j] != 1000)
    {
        printf("%d\n", matrix[i][j]);
    }
    else
    {
        printf("-1\n");
    }
}
