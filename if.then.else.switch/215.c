#include <stdio.h>
    int main(){
        int s,f,t;
        int ch,ra,cr;
        scanf("%d%d%d",&s,&f,&t);
        cr = s -t;
        ra = (6*t +f - 8*s )/2; 
        ch =  t - ra ;
        if( ch,ra,cr >=0 && (ch+ra+cr == s && (2*ch +4*ra +8*cr == f && ch + ra ==t)))
            printf("%d\n%d\n%d",ch,ra,cr);
        else   
            printf("0");
    }

