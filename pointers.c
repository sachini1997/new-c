#include <stdio.h>

void update(int *a,int *b) {
   int a1 = *a + *b;
   int b1 = abs(*a - *b);

    printf("%d\n%d",a1,b1);
 

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d\n%d", &a, &b);
    update(&a,&b);
   
    return 0;
}
