#include<stdio.h>
/*
programmer:Amril H.S
*/
int main(){
    int x;
    int y;
    int k;
    int l;

  for(x=1;x<10;x++){
        printf("\n");
        for(y=0;y<x;y++){
            printf("*");
        }
    }


    for(k=10;k>=1;k--){
        printf("\n");
        for(l=1;l<k;l++){
            printf("*");
        }
    }

return 0;
}
