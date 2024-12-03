#include <stdio.h>
int main ()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int a;
        scanf("%d", &a);
        int array[a];
        for(int j=0; j<a; j++){
            scanf("%d", &array[j]);
        }
        int b[a];
        int x = 0;
        for(int j=a-1; j>=0; j--){
            b[j]=array[x];
            x++;
        }
        for(int j=0; j<a-1; j++){
            for(int k=j+1; k<a; k++){
                if(b[j]>b[k]){
                    int temp=b[j];
                    b[j]=b[k];
                    b[k]=temp;
                }

            }
        }

        
        int c[a];
        for(int j=0; j<a; j++){
            c[j] = array[j]-b[j];
            if(c[j]<0){
                c[j]=c[j]*(-1);
            }
        }
        for(int j=0; j<a; j++){
            printf("%d ", c[j]);
        }
        printf("\n");
    }
    return 0;
}