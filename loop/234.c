#include <stdio.h>
    int main(){
        int a,b,c;
        int d,e,f;
        int i,x;
        int p[3];
        int j=0;
        scanf("%d%d%d",&a,&b,&c); //x3 + ax2 +bx +c
        for(i=-100000; i<=100000;i++)    { 
            x = (-1)*(i*i*i) +(a*i*i) + (-1)*(b*i) +c;
            if (x == 0){
                p[j]=i;
                j++;
            }
        }
        d=p[0];
        e=p[1];
        f=p[2];
        printf("%d %d %d",d,e,f);
        return 0;
    }
    //wrong 30

    /*
    234這題的概念
可以跟你講
如何降低複雜度
還有避免超出2147483647~-2147483648
你先用c來找出第一個根
然後用第一個根把三次式降成二次式
然後用D找
三個根一定都會是C的因數
因為c=def
    */