#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int m1, m2, d, ans=0, cal=0;
    for(int i=0; i<n; i++){
        scanf("%d %d %d", &m1, &m2, &d);
        ans=(m1*d)/(m1+m2);
        cal = d-ans;
        printf("%d\n", cal);
    }

    return 0;
}