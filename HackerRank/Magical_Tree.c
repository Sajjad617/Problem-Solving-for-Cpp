#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int sum = 10+n;
    int cal = sum/2;
    int c = cal;
    int a=1;
    for(int i=0; i<=cal; i++){
        for(int j=0; j<c; j++){
            printf(" ");
        }
        c--;
        for(int j=1; j<=a; j++){
            printf("*");
        }
        a+=2;
        printf("\n");
    }
    int b = 5;
    for(int i=0; i<b; i++){
        for(int j=0; j<b; j++){
            printf(" ");
        }
        for(int j=0; j<n; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}