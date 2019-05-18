#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    for(int c=0;c<strlen(s);c++){
        if(s[c]==' ')
            printf("\n");
        else
        printf("%c",s[c]);
    
    }
    return 0;
}

