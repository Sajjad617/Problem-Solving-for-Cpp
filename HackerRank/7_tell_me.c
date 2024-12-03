#include <stdio.h>
#include <string.h>
int main ()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        int num;
        scanf("%d", &num);
        int a[num];
        for(int j=0; j<num; j++){
            scanf("%d", &a[j]);
        }
        int find;
        scanf("%d", &find);
        int count=0;
        for(int k=0; k<num; k++){
            if(find==a[k]){
                count++;
                break;
            }

        }
        if(count==0){
            printf("NO");
        }
        else{
            printf("YES");
        }
    }
    return 0;
}