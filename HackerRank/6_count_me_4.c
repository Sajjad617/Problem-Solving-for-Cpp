#include <stdio.h>
#include <string.h>
int main ()
{
    char a[10001];
    scanf("%s", &a);
    int len = strlen(a);
    int count[27]={0};
    for(int i=0; i<len; i++){
        int value = a[i]-97;
        count[value]++;
    }
    for(int i=0; i<26; i++){
        if(count[i] != 0){
            printf("%c - %d\n",i+97, count[i]);
        }
        
    }
    
    
    return 0;
}
