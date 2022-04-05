#include <stdio.h>
    int main(){
        int m;
        scanf("%d",&m);
        if(m%15==0 && m%7 != 0)
            printf("0");
        else
            printf("1");
        
    }