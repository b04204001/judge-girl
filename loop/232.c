#include <stdio.h>
    int Is_Leap(int y){
        if((y%4 ==0 && y%100 != 0) || (y%100==0 && y%400 ==0))
            return 1;
        else 
            return 0;
    }
    int main(){
        int year,f_day;  //sunday = 0
        int n;
        int month[10],day[10];
        int F[13];
        int m[13];
        int p[10];
        int i;
        scanf("%d%d%d",&year,&f_day,&n);
        for(i=0;i<n;i++)
            scanf("%d %d",&month[i],&day[i]);
        if(Is_Leap(year) == 0 ){
            F[1] = f_day; //1月
            F[2] = (f_day+31)%7;
            F[3] = (f_day+31+28)%7;
            F[4] = (f_day+31+28+31)%7;
            F[5] = (f_day+31+28+31+30)%7;
            F[6] = (f_day+31+28+31+30+31)%7;
            F[7] = (f_day+31+28+31+30+31+30)%7;
            F[8] = (f_day+31+28+31+30+31+30+31)%7;
            F[9] = (f_day+31+28+31+30+31+30+31+31)%7;
            F[10] = (f_day+31+28+31+30+31+30+31+31+30)%7;
            F[11] = (f_day+31+28+31+30+31+30+31+31+30+31)%7;
            F[12] = (f_day+31+28+31+30+31+30+31+31+30+31+30)%7;
            m[1] = 31; //1月
            m[2] = 28;
            m[3] = 31;
            m[4] = 30;
            m[5] = 31;
            m[6] = 30;
            m[7] = 31;
            m[8] = 31;
            m[9] = 30;
            m[10] = 31;
            m[11] = 30;
            m[12] = 31;
        }
        else{
            F[1] = f_day; //1月
            F[2] = (f_day+31)%7;
            F[3] = (f_day+31+29)%7;
            F[4] = (f_day+31+29+31)%7;
            F[5] = (f_day+31+29+31+30)%7;
            F[6] = (f_day+31+29+31+30+31)%7;
            F[7] = (f_day+31+29+31+30+31+30)%7;
            F[8] = (f_day+31+29+31+30+31+30+31)%7;
            F[9] = (f_day+31+29+31+30+31+30+31+31)%7;
            F[10] = (f_day+31+29+31+30+31+30+31+31+30)%7;
            F[11] = (f_day+31+29+31+30+31+30+31+31+30+31)%7;
            F[12] = (f_day+31+29+31+30+31+30+31+31+30+31+30)%7;
            m[1] = 31; //1月
            m[2] = 29;
            m[3] = 31;
            m[4] = 30;
            m[5] = 31;
            m[6] = 30;
            m[7] = 31;
            m[8] = 31;
            m[9] = 30;
            m[10] = 31;
            m[11] = 30;
            m[12] = 31;
        }
        for(i=0;i<n;i++){
            switch(month[i]){
                case 1:
                p[i]= (F[1] + day[i]-1)%7;
                break;
                case 2:
                p[i]= (F[2] + day[i]-1)%7;
                break;
                case 3:
                p[i]= (F[3] + day[i]-1)%7;
                break;
                case 4:
                p[i]= (F[4] + day[i]-1)%7;
                break;
                case 5:
                p[i]= (F[5] + day[i]-1)%7;
                break;
                case 6:
                p[i]= (F[6] + day[i]-1)%7;
                break;
                case 7:
                p[i]= (F[7] + day[i]-1)%7;
                break;
                case 8:
                p[i]= (F[8] + day[i]-1)%7;
                break;
                case 9:
                p[i]= (F[9] + day[i]-1)%7;
                break;
                case 10:
                p[i]= (F[10] + day[i]-1)%7;
                break;
                case 11:
                p[i]= (F[11] + day[i]-1)%7;
                break;
                case 12:
                p[i]= (F[12] + day[i]-1)%7;
                break;
                default:
                    p[i] = -1;
            }
            if(day[i] >m[month[i]] && month[i] >0 && month[i] <13)
                p[i] = -2;
            printf("%d\n",p[i]);
        }               
        return 0;
    }
    //wrong
    