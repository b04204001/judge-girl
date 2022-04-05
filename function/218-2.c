#include <stdio.h>
int C(int n,int i){  //C(n,i)
    int a,b,c;
    a=1;
    b=1;
    for(int j=n;j>n-i;j--){
        a*=j; //n..n-i+1
    }
    for(int k=1;k<=i;k++){
        b*=k;   //i!
    }

    c= a/b;
    return c;
}
    int main(){
        int n,m;
        int sum=0;
        scanf("%d %d",&n,&m);
        for(int i=0;i<=m;i++){
            sum = sum +C(n,i);
            //printf("%d\n",sum);
        }
        printf("%d",sum);
        return 0;
    }


