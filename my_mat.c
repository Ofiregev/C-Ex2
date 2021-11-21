#include<stdio.h>
#include "my_mat.h"
#define n 10
 int findShortest(double matrix [n][n])
 
 {
     int i,j,k;
for(k = 1; k < n; k++){
    for(i = 1; i < n; i++){
        for(j = 1; j < n; ++j){
            matrix[i][j]=min(matrix[i][j],matrix[i][k]+matrix[k][j]);
 }
 }
}
return 0;
 }

double min(double a, double b){
    
     return (a>b) ? b:a;
}
int input(double matrix[n][n])
{
int input;
int e,r;
for(e = 1; e < n; e++){
        for(r = 1; r < n; ++r){
             scanf("%d", &input);
// for(e = 0; e < n; e++){
//     for(r = e+1; r <n;r++){
  
//     printf("Please enter element (%d, %d): ", e, r);
    
//     scanf("%d", &input);
//     matrix[e][r] = input;
//     matrix[r][e]=input;
    
}
}
findShortest(matrix);
int p;
int q;
for(p = 0; p < n; p++){
    for(q = 0; q < n; ++q){
    printf("%f, ",matrix[p][q]); 
}
printf("\n");
}

return 0;
}

int hasPath(double matrix[n][n],int i,int j){

    if(matrix[i][j]!=0){
        printf("True\n");
    }else
    {
        printf("False\n");
    }
    return 0;
}
int shortestPath(double matrix[n][n],int i,int j)
{
    if(matrix[i][j]!=0){
        printf("%f",matrix[i][j]);
    }else
    {
        printf("-1");
    }
    return 0;
}


