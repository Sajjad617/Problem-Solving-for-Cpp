#include <stdio.h>
int main ()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int matrix[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i=n-1; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%d ", matrix[i][j]);
        }
    }
    printf("\n");
    for(int i=0; i<n; i++){
        for(int j=m-1; j<m; j++){
            printf("%d ", matrix[i][j]);
        }
    }    
    return 0;
}