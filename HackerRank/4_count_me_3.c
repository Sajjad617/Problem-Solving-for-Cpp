#include <stdio.h>
#include <string.h>
int main ()
{
    int n;
    scanf("%d", &n);
    char a[10001];
    for(int i=0; i<n; i++){
        scanf("%s", &a);
        int upper=0, lower=0, digit=0;
        int len = strlen(a);
        for(int i=0; i<len; i++){
            if(a[i]>='A' && a[i]<='Z'){
                upper += 1;
            }
            else if(a[i]>='a' && a[i]<='z'){
                lower += 1;
            }
            else if(a[i]>='0' && a[i]<='9'){
                digit += 1;
            }
            
        }
        printf("%d %d %d\n", upper, lower, digit);
    }
    return 0;
}