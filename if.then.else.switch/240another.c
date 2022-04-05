#include <stdio.h>
int main(){
    int n;
    int x1,x2,x3,x4,y1,y2,y3,y4;
    int a,b,c,d,e,f;
    int tmp1,tmp2;
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
        /*  (x2-x1, y2-y1)
            (x3-x2, y3-y2)
            (x4-x3, y4-y3)
            (x1-x4, y1-y4)
        */
        // (x2-x1, y2-y1)  1,2
        if( (x2-x1)*(y3-y2) - (x3-x2)*(y2-y1) <=0 ){
            tmp1 = x2;
            x2 = x3;
            x3 = tmp1;
            tmp2=y2;
            y2=y3;
            y3=tmp2;
        }
        //2,3
        if( (x3-x2)*(y4-y3) - (x4-x3)*(y3-y2) <=0 ){
            tmp1 = x3;
            x3 = x4;
            x4 = tmp1;
            tmp2=y3;
            y3=y4;
            y4=tmp2;
        }
        //3,4
        if( (x4-x3)*(y1-y4) - (x1-x4)*(y4-y3) <=0 ){
            tmp1 = x4;
            x4 = x1;
            x1 = tmp1;
            tmp2=y4;
            y4=y1;
            y1=tmp2;
        }
        a = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
        b = (x3-x2)*(x3-x2) + (y3-y2)*(y3-y2);
        c = (x4-x3)*(x4-x3) + (y4-y3)*(y4-y3);
        d = (x1-x4)*(x1-x4) + (y1-y4)*(y1-y4);
        e = (x3-x1)*(x3-x1) + (y3-y1)*(y3-y1);
        f = (x4-x2)*(x4-x2) + (y4-y2)*(y4-y2);
        if((a == b) && (b== c) && (c== d) && (d==a) && (a+b == e) && ( b+c == f ))
            printf("square\n");
        else if((a == b) && (b== c) && (c== d) && (d==a) && (a+b != e) && ( b+c != f ))
                printf("diamond\n");
                else if ((a == c) && (b== d) && (a != b) && (c != d) && (a+b == e) && ( b+c == f ))
                        printf("rectangle\n");
                    else 
                        printf("other\n");

    }
}






