#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int d2=0, d3=0;
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            d2=d2+1;
        }
        else if(a[i]%3==0){
            d3=d3+1;
        }
    }
    printf("%d %d", d2, d3);
    return 0;
}