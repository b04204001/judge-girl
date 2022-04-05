#include <stdio.h>
    int main(){
        int s,f,t;
        int ch,ra,cr;
        scanf("%d%d%d",&s,&f,&t);
        cr = s -t;
        ra = (f - 2*s - 6*cr)/2; 
        ch =  t - ra ;
        printf("%d\n%d\n%d",ch,ra,cr);

    
    
    }