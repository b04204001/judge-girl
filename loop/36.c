#include <stdio.h>
    int main(){
        int year,month,day,start;
        int d=1;
        // 2007 9 6  Sat
        scanf("%d %d %d",&year,&month,&start);
        //printf("%d %d %d\n",year,month,start);
        switch(month){
            case 1: case 3: case 5: case 7: case 8:  case 10: case 12: {
            day =  31;
            break;
            }
            case 4: case 6: case 9: case 11: {
            day =30;
            break;
            }
            case 2: {
                if(year %400 == 0 || (year %4 == 0 && year % 100 !=0) ){
                    day =29;
                    break;
                }
                else{
                    day = 28;
                    break;
                }
            }
        
        }
        //printf("%d",day);
        if(month <1 || month >12){
            printf("invalid\n");
            return 0;
        }
        if(start > 7 || start < 0){
            printf("invalid\n");
            return 0;
        }
        printf(" Su Mo Tu We Th Fr Sa\n");
        printf("=====================\n");
        /*if(start == 7){
            start =0;
        }*/
        for (int i=0;i<start;i++){
            printf("   ");
        }
        for (int i=0;i< 7-start;i++){
            printf("%3d",d);
            d++;
        }
        printf("\n");
        //一周
        for(int i=0 ; i<7;i++){
            printf("%3d",d);
            d++;
        }
        printf("\n");
        //二周
        for(int i=0 ; i<7;i++){
            printf("%3d",d);
            d++;
        }
        printf("\n");
        //三周
        if(d <= day){
            for(int i=0 ; i<7;i++){
                if(d <= day){
                    printf("%3d",d);
                    d++;
                }
                else{
                    printf("\n");
                    printf("=====================\n");
                    return 0;
                }
            }
        }
        else{
            printf("=====================\n");
            return 0;
        }
        //四周
        if(d <= day){
            printf("\n");
            for(int i=0 ; i<7;i++){
                if(d <= day){
                    printf("%3d",d);
                    d++;
                }
                else{
                    printf("\n");
                    printf("=====================\n");
                    return 0;
                }
            }
        }
        else{
            printf("\n");
            printf("=====================\n");
            return 0;
        }
        //五周
        if(d <= day){
            printf("\n");
            for(int i=0 ; i<7;i++){
                if(d <= day){
                    printf("%3d",d);
                    d++;
                }
                else{
                    printf("\n");
                    printf("=====================\n");
                    return 0;
                }
            }
        }
        else{
            printf("\n");
            printf("=====================\n");
            return 0;
        }
        //六周
        return 0;
    }