#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int m=n;
    int a=1;
    int c=1;


    for(int i=1; i<=n; i++){
        int x=c;
        for(int j=1; j<m; j++){
            printf(" ");
        }
        m--;

        for(int k=1; k<=a; k++){
            printf("%d", x);  
            x--; 
        }
        c++; 
        a++;
        printf("\n");
    }
    return 0;
}