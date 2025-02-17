// #include<stdio.h>
// int main(){
//     int i,j;
//     char elem = 'A';
//     for(i=1;i<=5;i++){
//         for(j=1;j<=5-i+1;j++){
//             printf("%c",elem);
//         }
//         elem++;
//         printf("\n");
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int i,j;
    char elem = 64;
    for(i=1;i<=5;i++){
        for(j=1;j<=5-i+1;j++){
            printf("%c",elem+i);
        }
        printf("\n");
    }
    return 0;
}