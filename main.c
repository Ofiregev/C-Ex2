#include <stdio.h>
#include "my_mat.h"
#include <math.h>

int main(){
    int i, j;
    int matrix[10][10];
    char in;
    scanf("%c",&in);
    while (in!='D')
    {
        if(in=='A'){
            input();
        }
        else if(in=='B'){
            scanf("%d %d",&i,&j);
            hasPath(i,j);
        }else if(in=='C'){
            scanf("%d %d",&i,&j);
            shortestPath(i,j);
        }
        scanf("%c",&in);
    }
    

}
