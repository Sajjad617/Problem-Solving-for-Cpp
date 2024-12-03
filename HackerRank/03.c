// https://www.hackerrank.com/contests/assignment-02-a-introduction-to-c-programming-a-batch-05/challenges/reverse-and-odd
#include <stdio.h>
int main ()
{
    int i, n;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(i=n-1; i>0; i--){
        if(i%2 != 0){
            printf("%d ", a[i]);
        }

    }
    return 0;
}