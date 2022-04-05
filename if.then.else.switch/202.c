#include <stdio.h>
    int gcd(int a, int b){
        int t;
        t = a%b;
        if(t == 0){
            return b;}
        else{
            return gcd(b,t);
        }

    }
    int lcm(int a,int b){
        int c;
        c =(a*b)/gcd(a,b);
        return c;
    }
    int main(){
        int a,b,c,d,e,f,g;
        int m,n,o;
        int h,i,j;
        int x,y;
        int k;
        scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
        //printf("%d %d ",lcm(c,g),gcd(o,n));
        if(a>=0){
            x = a*c + b;}
        else{
            x = a*c - b;}
        if(e>=0){
            y = e*g +f;}
        else{
            y = e*g -f;}
        //printf("%d %d ",x,y);
        switch(d){
            case 0: //+
            o = lcm(c,g);
            n = x *(o/c) + y*(o/g);
            break;
            case 1: //-
            o = lcm(c,g);
            n = x *(o/c) - y*(o/g);
            break;
            case 2: //*
            o = c*g;
            n = x*y;
            break;
            case 3: // /
            o = y*c;
            n = x*g;
            break;
        }
        //printf("%d %d ",o,n);
        
        k = gcd(o,n);
        if(k != 1){
            o = o/k;
            n = n/k;
        }
        //printf("%d %d ",o,n);
        h = n/o;
        i = n%o;
        j = o;
        if(h<0){
            i = abs(i);
            j = abs(j);
        }
        if(i ==0)
            j=1;
        printf("%d\n%d\n%d",h,i,j);
        return 0;
    }

