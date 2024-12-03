// #include <stdio.h>
// int main ()
// {
//     int test;                                                               (not solve)
//     scanf("%d", &test);
//     for(int i=1; i<=test; i++)
//     {
//         long long int mult;
//         int a, b, c;
//         scanf("%lld", &mult);
//         scanf("%d %d %d", &a, &b, &c);
//         long long int x=0;
//         for(long long int j=1; j<=mult; j++){
//             long long int cal = a*b*c*j;
//             if(cal==mult){
//                 x=j;
//                 break;
//             }
//             else if(mult<cal){
//                 break;
//             }
//         }
//         if(mult==0){
//             printf("0\n");
//         }
//         else if(x==0){
//             printf("-1\n");
//         }
//         else{
//             printf("%lld\n", x);
//         }
//     }
//     return 0;
// }

#include <stdio.h>
int main ()
{
    int test;
    scanf("%d", &test);
    for(int i=1; i<=test; i++)
    {
        long long int mult, a, b, c;
        scanf("%lld %lld %lld %lld", &mult, &a, &b, &c);
        long long int x = mult/(a*b*c);
        long long int cal = x*a*b*c;
        if(mult==0){
            printf("0\n");
        }
        else if(cal == mult){
            printf("%lld\n", x);
            
        }
        else{
            printf("-1\n");
        }
    }
    return 0;
}