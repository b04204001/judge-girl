#include <stdio.h>
int main(){
    int n;
    double A[16][16]; //ij
    double X[16];
    double Y[16];
    scanf("%d",&n);
    //printf("%d",n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%lf",&A[i][j]);
            //printf("%f",A[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        scanf("%lf",&Y[i]);
    }
    X[n-1]=Y[n-1]/A[n-1][n-1];
    for(int i=n-2;i>=0;i--){
        int temp=0;
        for(int j=i+1;j<n;j++){
            temp += A[i][j] * X[j];
        }
        X[i]= (Y[i] -temp ) / A[i][i];
    }
    for(int i=0;i<n;i++){
        printf("%f\n",X[i]);
    }



    return 0;
}

//wrong 20
