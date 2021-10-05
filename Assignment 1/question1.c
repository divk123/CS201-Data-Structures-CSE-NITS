
#include <stdio.h>
#include<string.h>
#include <stdbool.h>
bool dot(char s[], int n){
    for(int i=0;i<n-2;i++){
        if(s[i]=='.'){
            return 1;
        }
        else return -1;
    }
}

int main()
{
    char s[100];
    scanf("%s",s);
    int n=strlen(s);
    if(dot(s,n)){
        printf("Valid floating number");
        
    }
    else printf("Invalid floating number");
    

    return 0;
}
