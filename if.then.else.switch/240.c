#include <stdio.h>
#include <math.h>
    int swap(int a,int b){
        int temp;
        temp = a;
        a = b;
        b = temp;
    }
    int distance(int a,int b,int c,int d){
        int e;
        e = ((a-c)*(a-c) + (b - d)*(b - d) );
        return e;
    }
    int product(int a,int b, int c, int d){
        int p;
        p = a*d - b*c;
        return p;
    }
    int main(){
        int n;
        int x1,x2,x3,x4,y1,y2,y3,y4;
        int a,b,c,d;
        int a1,a2,b1,b2,c1,c2,d1,d2;
        int p,q;
        scanf("%d",&n);
        for (int i=n;i>0;i--){
            scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
            if(y2 < y1)
                swap(y2,y1);
                swap(x2,x1);
            if(y3 < y1)
                swap(y3,y1);
                swap(x3,x1);
            if(y4 < y1)
                swap(y4,y1);
                swap(x4,x1);
            if(x3> x2)
                swap(y3,y2);
                swap(x3,x2);
            if(x4> x2)
                swap(y4,y2);
                swap(x4,x2);
            if(x4 > x3)
                swap(y4,y3);
                swap(x4,x3);   
            //printf("%d %d %d %d %d %d %d %d ",x1,y1,x2,y2,x3,y3,x4,y4);
            a = distance(x1,y1,x2,y2);
            b = distance(x2,y2,x3,y3);
            c = distance(x3,y3,x4,y4);
            d = distance(x4,y4,x1,y1);
            a1 = x2 - x1;
            a2 = y2 - y1;
            b1 = x3 - x2;
            b2 = y3 - y2;
            c1 = x4 - x3;
            c2 = y4 - y3;
            d1 = x1 - x4;
            d2 = y1 - y4;
            p = product(a1,a2,b1,b2) ==0 && product(b1,b2,c1,c2)==0 && product(c1,c2,d1,d2)==0 && product(d1,d2,a1,a2)==0;
            q = a==b && b==c && c==d && d==a;
            if (p ==1 && q ==1)
                printf("square\n");
            if(p ==1 && q==0)
                printf("rectangle\n");
            if(p ==0 && q ==1)
                printf("diamond\n");
            if(p ==0 && q ==0)
                printf("other\n");
        }
        return 0;
    }

    //wrong
    