#include <stdio.h>
typedef int bool;  
#define false 0  
#define true  1  

int main () {
    char input[1000000];
    int i=0,s_num =0;
    bool flag=false;
    bool sp_flag =false;
    bool ls_flag = false;
    while( scanf("%c",&input[i]) != EOF  ){
        // case DEFAULT:
        if(flag == true && input[i] != ' ' && input[i] != '\n' && input[i] != '\0'){
            flag = false;
        }
        //
        if( input[i] == '.'){
            flag = true;
        }
        //case 1:
        if(flag == true && input[i] == ' '){
            sp_flag = true;
        }
        if(flag == true && sp_flag == true && input[i] == ' ' ){
            s_num++;
            flag = false;
            sp_flag = false;
        }
        // case 2:
        if(flag == true && input[i] == '\n'){
            s_num++;
            flag = false;
        }
        //case 3:
        if(flag == true && input[i] == '\0'){
            s_num++;
            flag = false;
        }
        //case 4:
        if(flag == true && (input[i] == ' ' || input[i]== '\n')){
            ls_flag = true;
        }
        if(ls_flag == true && (input[i] != ' ' || input[i] != '\n')){
            ls_flag =false;
        }
        if(ls_flag == true && input[i] == EOF){
            s_num ++;
        }
        i++;
    }
    printf("%d",s_num);

    return 0;
}
//RE 10分