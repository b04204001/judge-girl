#include <stdio.h>
int main(){
    double Pi = 3.1415926;
    double a,b,c;
    double area;
    double temp;
    scanf("%lf %lf %lf",&a,&b,&c);
    if (c > a && c > b){
        area = (c*c*Pi*3.0/4.0) + ( (c-a)*(c-a)*Pi/4.0 ) + ( (c-b)*(c-b)*Pi/4.0 );
        }
    if (c > a && c < b){
        area = (c*c*Pi*3.0/4.0) + ( (c-a)*(c-a)*Pi/4.0 );
        }
    if (c < a && c > b){
        area = (c*c*Pi*3.0/4.0) + ( (c-b)*(c-b)*Pi/4.0 );
        }
    if (c < a && c < b){
        area = (c*c*Pi*3.0/4.0) ;
        }
    printf("%f",area);
    return 0;
}
/*倍精度用 double
scanf要用%lf
輸出沒差
*/
