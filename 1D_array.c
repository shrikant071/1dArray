#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
             int sum=0,i,n;
             int arr[1000];
             scanf("%d",&n);
             for(i=0;i<n;i++)
             scanf("%d",&arr[i]);
             for(i=0;i<n;i++)
             {
                sum=sum+arr[i];
             }
             printf("%d",sum);
    return 0;
}

