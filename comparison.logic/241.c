#include <stdio.h>
    int main(){
        int a,b,c,d,e,f,g,h;
        int r;
        scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h);
        r = ((a*d - b*c)>0) && ((c*f - d*e)>0) && ((e*h - f*g)>0 ) && ((g*b- a*h)>0);
        printf("%d",r);
    
        return 0;
    }