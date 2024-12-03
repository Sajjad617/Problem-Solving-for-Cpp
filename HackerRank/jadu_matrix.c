#include <stdio.h>
int main ()
{
    int n, m;
    scanf("%d %d", &n, &m);
    if(n==m)
    {
        int matrix[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                scanf("%d", &matrix[i][j]);
            }
        }
        int a=1;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j){
                    if(matrix[i][j] != 1){
                        a=0;
                    }
                }
                else if((i+j)==(n-1)){
                    if(matrix[i][j] != 1){
                        a=0;
                    }
                }
                else{
                    if(matrix[i][j] != 0){
                        a=0;
                    }
                }
            }
        }
        if(a){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    else{
        printf("NO");

    }
    return 0;
}
    