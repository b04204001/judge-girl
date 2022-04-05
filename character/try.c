#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char a[1000];
    while(scanf("%s", &a) != EOF){
        if(strcmp(a,"-1 ") ){
            printf("WOW");
        }
        printf("%s\n",a);
    }
    
    return 0;
}