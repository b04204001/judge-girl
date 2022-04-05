#include <stdio.h>
    int main(){
        int n,m,o;
        int i;
        int x=0;
        int y=0;
        int z=0;
        scanf("%d",&n);
        for(i=n;i>0;i--){
            scanf("%d",&m);
            o=m%3;
            if(o == 0)
                x++;
            else if(o == 1)
                y++;
                else
                    z++;
        }
        printf("%d %d %d",x,y,z);
        
        return 0;
    }