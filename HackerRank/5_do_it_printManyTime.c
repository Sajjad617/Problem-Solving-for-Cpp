#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int a;
    scanf("%d", &a);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=a; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}