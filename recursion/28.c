#include <stdio.h>
int sum(int m){
    if(m>0)
        return sum(m-1)+m*m;
    else
        return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}
//AC
