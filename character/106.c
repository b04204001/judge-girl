#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void initialize(char input[1000]){
    for(int i=0;i<1000;i++){
        input[i] = '\0';
    }
    return;
}
int count_size(char input[]){
    int size=0;
    while( input[size] != '\0'){ 
        size++;
    }
    return size;
}
int main(){
    char input[1000];
    int input_size;
    int diff;
    char two,three,five,eleven;
    while( scanf("%s",&input) != EOF ){
        int sum =0;
        int esum=0,osum=0;
        if( !strcmp(input,"-1")){  //strcmp相同return 0
            break;
        }
        input_size =count_size(input);
        //printf("input_size = %d\n",input_size);
        for (int i=0; i<input_size;i++){
            sum += (int) input[i] - '0';
            if(i%2 ==0)
                esum += (int) input[i]- '0';
            else
                osum += (int) input[i]- '0';
        }
        //printf("sum =%d  esum= %d osum= %d\n",sum,esum,osum);
        //2倍數
        //printf("last =%c\n",input[input_size-1]);
        if(input[input_size-1] %2 ==0){
            printf("yes ");
        }
        else{
            printf("no ");
        }
        //3倍數
        if( sum%3 ==0){
            printf("yes ");
        }
        else{
            printf("no ");
        }
        //5倍數
        if(  input[input_size-1] == '0' ||  input[input_size-1] == '5' ){
            printf("yes ");
        }
        else{
            printf("no ");
        }
        //11倍數
        diff = abs(esum-osum);
        //printf("%d",diff);
        if( diff %11 ==0){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
        initialize(input);
    }
    return 0;
}

//AC