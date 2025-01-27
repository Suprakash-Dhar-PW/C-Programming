#include<stdio.h>
int main(){
    float a = 3.1415926535897932384626433827950288f;
    double b = 3.1415926535897932384626433827950288;
    long double c = 3.1415926535897932384626433827950288L;

    //printf("Float : %.21f\n",a); format specifier used is %f for double data type
    //printf("Double : %.21f\n",b); format specifier used is %f for double data type
    //printf("Long Double : %.21Lf\n",c); format specifier used is %Lf for double data type

    printf("Float : %.21f\n",a); //format specifier used is %f for double data type
    printf("Double : %.21lf\n",b); //format specifier used is %lf for double data type
    printf("Long Double : %lf",c); //format specifier used is %Lf for double data type
    return 0;
}