#include <stdio.h>
int gcd(int a, int b){
    int t;
    while( a%b != 0)
        if(a >b){
        t = a;
        a =b;
        b = t%b;
        }
        else{
        t = a;
        a = b;
        b = t;
        }
    return b;
}
int lcm(int a, int b){
    int m = gcd(a,b);
    int r;
    r = a*b/m;
    return r;
}
    int main(){
        int a;
        int alcm =0;
        while( scanf("%d",&a) != EOF){
            if(alcm ==0)
                alcm =a;
            else 
                alcm = lcm(a,alcm);
        }
        printf("%d",alcm);
    }

