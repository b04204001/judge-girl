#include <stdio.h>
    int main(){
        int n;              //10000000
        int s[3];
        int p[3];
        int tprize = 0;
        int i;
        for(i=0;i<3;i++)            //special prize
            scanf("%d",&s[i]);
        for(i=0;i<3;i++)            // first prize
            scanf("%d",&p[i]);
        while(scanf("%d",&n) != EOF){
            if(n == s[0] || n ==s[1] || n == s[2])
                tprize += 2000000;
            if(n == p[0] || n ==p[1] || n == p[2])
                tprize += 200000;
            else if((n % 10000000 ) == (p[0] % 10000000 ) || (n % 10000000 ) == (p[1] % 10000000 ) || (n % 10000000 ) == (p[2] % 10000000 ))
                    tprize += 40000;
                else  if((n % 1000000 ) == (p[0] % 1000000 ) || (n % 1000000 ) == (p[1] % 1000000 ) || (n % 1000000 ) == (p[2] % 1000000 ))
                    tprize += 10000;
                    else if((n % 100000 ) == (p[0] % 100000 ) || (n % 100000 ) == (p[1] % 100000 ) || (n % 100000 ) == (p[2] % 100000 ))
                        tprize += 4000;
                        else if((n % 10000 ) == (p[0] % 10000 ) || (n % 10000 ) == (p[1] % 10000 ) || (n % 10000 ) == (p[2] % 10000 ))
                            tprize += 1000;
                            else if((n % 1000 ) == (p[0] % 1000 ) || (n % 1000 ) == (p[1] % 1000 ) || (n % 1000 ) == (p[2] % 1000 ))
                                tprize += 200;
                                else    
                                    tprize +=0;
            
            
            
            
           
            
        }

        printf("%d",tprize);
        return 0;
    }

