    #include <stdio.h>
    int main ()
    {
        int n;
        scanf("%d", &n);
        int m=n;
        int x=1;
        int l=1;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<m; j++){
                printf(" ");
            }
            m--;
            for(int k=1; k<=x; k++){
                // printf("*");
                if(l%2==0){
                    printf("-");
                }
                else{
                    printf("#");
                }
            }
            l++;
            x+=2;
            printf("\n");
        }
        int a=1;
        int b=(2*n)-3;
        int c=1;
        for(int i=1; i<n; i++){
            for(int j=1; j<=a; j++){
                printf(" ");
            }
            a++;
            if(n%2!=0){
                for(int k=1; k<=b; k++){
                    if(c%2==0){
                        printf("#");
                    }
                    else{
                        printf("-");
                    }
                }
            }
            else{
                for(int k=1; k<=b; k++){
                    if(c%2==0){
                        printf("-");
                    }
                    else{
                        printf("#");
                    }
                }

            }
            c++;
            b-=2;
            printf("\n");
        }
        return 0;
    }