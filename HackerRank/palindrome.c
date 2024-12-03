#include <stdio.h>
#include <string.h>
int is_palindrome(char s[]){
    char c[1001];
    int k=0;
    int len = strlen(s);
    for(int i=len-1; i>=0; i--){
        c[k]=s[i];
        k++;
    }

    int pln=0;
    for(int i=0; i<len; i++){
        if(c[i] != s[i]){
            pln=1;
            break;
        }
   }
   return pln;

} 

int main ()
{
    char s[1001];
    scanf("%s", &s);

    int result = is_palindrome(s);

    if(result!=1){
        printf("Palindrome\n");
   }
    else{
        printf("Not Palindrome\n");
   }
   
    return 0;
}