#include<stdio.h>
    int main(){
        int l,m,n;
        int surA,vol;
        scanf("%d%d%d",&l,&m,&n);
        surA = 2*(l*m + m*n + n*l );
        vol = l * m * n ;
        printf("%d\n",surA);
        printf("%d",vol);
    }