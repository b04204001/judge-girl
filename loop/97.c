#include <stdio.h>
#include <math.h>
#include <limits.h>
    int distance(int a,int b,int c,int d){
        int e;
        e = abs(a-c) + abs(b-d);
        return e;
    }
    int main(){
        int i,j;
        int n;
        int x[10];
        int y[10];
        int c[10];
        int m;
        int o[100000];
        int p[100000];
        int q[100000];
        int d[100000];
        int min[100000];
        int A[10];
        int k=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d%d%d",&x[i],&y[i],&c[i]);
        scanf("%d",&m);
        for(i=0;i<m;i++)
            scanf("%d%d%d",&o[i],&p[i],&q[i]);
        for(i=0;i<m;i++)
            d[i]= 10000;
        
        for(i=0;i<m;i++)
            for(j=0;j<n;j++){
                if(distance(x[j],y[j],o[i],p[i])<d[i])
                    d[i] = distance(x[j],y[j],o[i],p[i]);
                    min[i]=i;
            }
        for(i=0;i<m;i++)
            if()

        return 0;
    }

//wrong
