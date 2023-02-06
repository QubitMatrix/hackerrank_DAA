#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s1[10000];
    char s2[10000];
    char res[10000];
    scanf("%s",s1);
    scanf("%s",s2);
    int i;
    for (i=0;i<strlen(s1);i++)
    {
        if(s1[i]==s2[i])
            res[i]='0';
        else 
            res[i]='1';
    }
    res[i]='\0';
    printf("%s",res);
    return 0;
}
