#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    int c, s;    
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        int k; 
        scanf("%d %d",&n,&k);
        int a[n];
        c = 0;
        s = 0;
        for(int a_i = 0; a_i < n; a_i++){
           scanf("%d",&a[a_i]);
           if(a[a_i] <= 0)
               c += 1;
           else  
               s += 1;            
        }
        if(c >= k)
            printf("NO\n");
        else
            printf("YES\n");
        
    }
    return 0;
}


