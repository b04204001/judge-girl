#include <stdio.h>
    int main(){
        int a,b,c;
        int max;
        scanf("%d%d%d",&a,&b,&c);
        if(a+b <= c || a+c <= b || b+c <=a )
            printf("0");
        else
            printf("1");
    }