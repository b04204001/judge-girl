#include <stdio.h>
    int min_three(int a,int b,int c){
        int min;
        min=a;
        if (b<min){
            min =b;
        }
        if(c<min){
            min =c;
        }
        return min;
    }

    int min_two(int a,int b){
        int min;
        min=a;
        if (b<min){
            min =b;
        }
        return min;
    }

    int max_three(int a,int b,int c){
        int max;
        max=a;
        if (b>max){
            max =b;
        }
        if(c>max){
            max =c;
        }
        return max;
    }

        int max_two(int a,int b){
        int max;
        max=a;
        if (b>max){
            max =b;
        }
        return max;
    }
    int main(){
        int R[3][4]={};
        int area=0;
        int A,B,C,D,E,F,G;
        for(int i=0;i<3;i++){
            for(int j=0;j<4;j++){
                scanf("%d",&R[i][j]);
            }
        }
        //0 1 2 3  l,b,r,t    
        A = (R[0][2] -R[0][0])*(R[0][3] -R[0][1]);
        B = (R[1][2] -R[1][0])*(R[1][3] -R[1][1]);
        C = (R[2][2] -R[2][0])*(R[2][3] -R[2][1]);
         //右上點min 
        
        D= ( min_two(R[0][2],R[1][2]) - max_two(R[0][0],R[1][0]) )*(min_two(R[0][3],R[1][3])-  max_two(R[0][1],R[1][1]) );
        if ( (min_two(R[0][2],R[1][2]) <= max_two(R[0][0],R[1][0]) ) || ( min_two(R[0][3],R[1][3]) <= max_two(R[0][1],R[1][1]) ) ){
            D=0;}
        E= (min_two(R[1][2],R[2][2]) - max_two(R[1][0],R[2][0]) )*(min_two(R[1][3],R[2][3])-  max_two(R[1][1],R[2][1]) );
        if ( (min_two(R[1][2],R[2][2]) <= max_two(R[1][0],R[2][0]) ) || ( min_two(R[1][3],R[2][3]) <= max_two(R[1][1],R[2][1]) ) ){
            E =0;}
        F= ( min_two(R[2][2],R[0][2]) - max_two(R[2][0],R[0][0]) )*(min_two(R[2][3],R[0][3])-  max_two(R[2][1],R[0][1]) );
        if ( (min_two(R[2][2],R[0][2]) <= max_two(R[2][0],R[0][0]) ) || ( min_two(R[2][3],R[0][3]) <= max_two(R[2][1],R[0][1]) ) ){
            F=0;}
        G= ((min_three(R[0][2],R[1][2],R[2][2]) - max_three(R[0][0],R[1][0],R[2][0]) )*(min_three(R[0][3],R[1][3],R[2][3])-  max_three(R[0][1],R[1][1],R[2][1])));
        if ( ( min_three(R[0][2],R[1][2],R[2][2]) <= max_three(R[0][0],R[1][0],R[2][0]) ) || (min_three(R[0][3],R[1][3],R[2][3]) <= max_three(R[0][1],R[1][1],R[2][1]) ) ){
            G=0;}
        area = A+B+C-D-E-F+G;
        //printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n",A,B,C,D,E,F,G);
        printf("%d",area);
        return 0;
    }

//AC
