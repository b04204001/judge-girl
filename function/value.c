#include "value.h"
int value(int type, int width, int height, int length){
    int min,price;
    int cash=0;
    min= width;
    if(min > height){
        min= height;
    }
    if(min > length){
        min =length;
    }
    switch(type){
        case 79:
        price = 30;
        break;
        case 47:
        price = 10;
        break;
        case 29:
        price = 4;
        break;
        case 82:
        price = 5;
        break;
        case 26:
        price = 3;
        break;
        case 22:
        price = 9;
        break;
    }
    for(int i=1;i<min;i++){
        if(  i*i*price*(width/i)*(height/i)*(length/i)  > cash ){
            cash =  ( i*i*price*(width/i)*(height/i)*(length/i)  );
        }
    }

}


/*
gold, silver, copper, lead, iron, and titanium.
30,10,4,5,3,9 單價
79,47,29,82,26,22 tpye
cubes

*/