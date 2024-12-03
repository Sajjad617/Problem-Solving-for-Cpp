#include <stdio.h>
int main ()
{
    int test;
    scanf("%d", &test);
    for(int i=0; i<test; i++)
    {
        int n;
        scanf("%d", &n);
        char strng[n];
        scanf("%s", &strng);
        int P=0;
        int T=0;
        for(int j=0; j<n; j++){
            if(strng[j]=='T'){
                T++;
            }
            else{
                P++;
            }
        }
        if(T==P){
            printf("Draw\n");
        }
        else if(T>P){
            printf("Tiger\n");
        }
        else{
            printf("Pathaan\n");
        }

    }

    return 0;
}