// https://www.hackerrank.com/contests/assignment-02-a-introduction-to-c-programming-a-batch-05/challenges/sum-sum-2

#include <stdio.h>
int main ()
{
    int i, n;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int pos=0, neg=0;
    for(i=0; i<n; i++){
        if(a[i]>0){
            pos=pos+a[i];
        }
        else{
            neg=neg+a[i];
        }
    }
    printf("%d %d", pos, neg);
    return 0;
}