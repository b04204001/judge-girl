#include <stdio.h>
    int main(){
        int x,i;
        int power = 1;
        scanf("%d%d",&x,&i);
        for(int j=i;j>0;j--)
            power *= x;
        printf("%d",power);
        return 0;
    }