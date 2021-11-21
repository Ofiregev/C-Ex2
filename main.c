#include <stdio.h>
#include "my_mat.h"
#include <math.h>

int main(){
    int i, j;
    double matrix[10][10]={{0,29,1,41,26,40,42,30,49,24},{29,0,18,12,45,4,33,25,16,31},{1,18,0,46,9,5,44,20,40,49},{41,12,46,0,23,24,40,18,24,28},{26,45,9,23,0,35,30},{27,22,2,40,4,5,24,35,0,46},{2,36,25,42,33,44,40,30,46,0},{8,28,28,30,25,20,18,27,2,8}};
    char in;
    scanf("%c",&in);
    while (in!='D')
    {
        if(in=='A'){
            input(matrix);
        }
        else if(in=='B'){
            scanf("%d %d",&i,&j);
            hasPath(matrix,i,j);
        }else if(in=='C'){
            scanf("%d %d",&i,&j);
            shortestPath(matrix,i,j);
        }
        scanf("%c",&in);
    }
    

}