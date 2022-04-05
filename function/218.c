#include <stdio.h>
int C(int n,int i){  //C(n,i)
    int a,b,c;
    int d=1;
    a=1;
    b=1;
    for(int j=1;j<=n;j++){
        a*=j; //n!
    }
    for(int k=1;k<=i;k++){
        b*=k;   //i!
    }
    for (int l=n-i;l>0;l--){
        d*=l; //n-i!
    }
    c= (a/b)/d;
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

//WA90