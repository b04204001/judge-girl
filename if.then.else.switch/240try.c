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
        p = (a*d) - (b*c);
        return p;
    }
    int main(){
        int n;
        int x[4],y[4];
        int a,b,c,d;
        int a1,a2,b1,b2,c1,c2,d1,d2;
        int p,q;
        int s,t;
        scanf("%d",&n);
        for (int i=n;i>0;i--){
            scanf("%d%d%d%d%d%d%d%d",&x[0],&y[0],&x[1],&y[1],&x[2],&y[2],&x[3],&y[3]);
            if(y[1] < y[0]){
                swap(y[1],y[0]);
                swap(x[1],x[0]);
            }
            if(y[2] < y[0]){
                swap(y[2],y[0]);
                swap(x[2],x[0]);
            }
            if(y[3] < y[0]){
                swap(y[3],y[0]);
                swap(x[3],x[0]);
            }
            if(x[2]> x[1]){
                swap(y[2],y[1]);
                swap(x[2],x[1]);
            }
            if(x[3]> x[1]){
                swap(y[3],y[1]);
                swap(x[3],x[1]);
            }
            if(x[3] > x[2]){
                swap(y[3],y[2]);
                swap(x[3],x[2]);   
            }
            //printf("%d %d %d %d %d %d %d %d ",x[0],y[0],x[1],y[1],x[2],y[2],x[3],y[3]);
            a = distance(x[0],y[0],x[1],y[1]);
            b = distance(x[1],y[1],x[2],y[2]);
            c = distance(x[2],y[2],x[3],y[3]);
            d = distance(x[3],y[3],x[0],y[0]);
            //printf("%d %d %d %d ",a,b,c,d);
            a1 = x[1] - x[0];
            a2 = y[1] - y[0];
            b1 = x[2] - x[1];
            b2 = y[2] - y[1];
            c1 = x[3] - x[2];
            c2 = y[3] - y[2];
            d1 = x[0] - x[3];
            d2 = y[0] - y[3];
            p = (product(a1,a2,b1,b2) ==0) && (product(b1,b2,c1,c2)==0) && (product(c1,c2,d1,d2)==0) && (product(d1,d2,a1,a2)==0);
            q = (a==b) && (b==c) && (c==d) && (d==a);
            //printf("%d %d ",p,q);
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