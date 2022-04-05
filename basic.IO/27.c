#include <stdio.h>
    int main(){
        int a,b,c,d,e;
        int surA,vol;
        scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
        surA = 2*(a*b + b*c + c*a) + 8*((a-2*e)*d + (b-2*e)*d + (c-2*e)*d);
        vol = (a*b*c) - 2*((a-2*e)*(b-2*e)+(b-2*e)*(c-2*e)+(c-2*e)*(a-2*e))*d;
        printf("%d\n%d",surA,vol);
    }