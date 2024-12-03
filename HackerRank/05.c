// https://www.hackerrank.com/contests/assignment-02-a-introduction-to-c-programming-a-batch-05/challenges/update-and-print

#include <stdio.h>
int main ()
{
    int i, n;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int f,v;
    scanf("%d %d", &f, &v);
    a[f]=v;

    for(i=n-1; i>=0; i--){
        printf("%d ", a[i]);
    }
    return 0;
}