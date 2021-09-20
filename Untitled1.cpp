#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>

int main()
{
    int t,n,i;
    int arr[1000],j;
//    scanf("%d",&t);    
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if((i+j)%2==0)
            printf("%d\t",j);
            continue;
        }
    }
    return 0;
}

