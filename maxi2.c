#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*
max is 6
*/
    int max_of_four(int e,int f,int g,int h);

int main() {
    int a, b, c, d;
    
     
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    printf("%d",max_of_four(a, b, c, d));
    
    

}
 int max_of_four(int e,int f,int g,int h){
 int max=0;

if(e>max)
max=e;
else 
max=max;

 if(max<f)
max=f;
else
max=max;

 if(max>g)
max=max;
else
max=g;

if(max>h)
max=max;
else
max=h; 

int ans=max;
return ans;

}














