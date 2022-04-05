#include<stdio.h>
    int main(){
        int x;
        int m,n,o;
        scanf("%d",&x);
        m=x/100;
        n=(x%100)/10;
        o=x%10;
        printf("%d\n",m);
        printf("%d\n",n);
        printf("%d",o);

        return 0;
    }