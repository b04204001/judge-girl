#include <stdio.h>
    int M;
    int a,b,c;
    int max(a,b,c){
        M =a;
        if (b>M)
            M = b;
        if(c>M)
            M = c;
        return M;
    }
    int main(){
        int i;
        int n;
        int x1,x2,x3,y1,y2,y3;
        scanf("%d",&n);
        for(i = n; i>0 ; i--){
            scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
            a = (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1);
            b = (x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2);
            c = (x1 - x3)* (x1 - x3) + (y1 - y3)*(y1 - y3);
            M = max(a,b,c);
            if(a == b || b==c || c ==a)
                printf("isosceles\n");
            else{
                if(M==a){
                    if(b+c >a)
                        printf("acute");
                    else if( b+c == a)
                            printf("right");
                        else
                            printf("obtuse");
                }
                else if(M==b) {
                    if(a+c >b)
                        printf("acute"); 
                    else if( a+c == b)
                            printf("right");
                        else
                            printf("obtuse");
                }
                    else {
                        if(a+b >c)
                            printf("acute");
                        else if( a+b == c)
                                printf("right");
                            else    
                                printf("obtuse");
                }   
			    printf("\n");
            }
        }    

        return 0;
    }