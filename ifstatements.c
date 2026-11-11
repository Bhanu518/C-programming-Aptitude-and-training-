#include <stdio.h>

int main()
 {
    int target = 10;
    int count = 0;
    printf("Enter the number of days :");
    int s, m, t,w;

    scanf("%d%d%d%d", &s, &m, &t ,&w);

    
    if (s >= target)
    { 
        count = count + 1; 
    } 
    
    
    if (m >= target)
     { 
        count = count + 1; 
    } 
    
    if (t >= target) 
    { 
        count = count + 1; 
    }
    if (w>= target)
    {
        count = count + 1;
    }

    printf("%d", count);
    printf(" the number of days:\n");
    return 0;
}
