#include<stdio.h>
int main()
{
    long long int n = 10000000000,i,j,count=0;
    for(i=1 ; i<=n ; i++){
        if(i%2 == 0 || i%3 == 0 || i%5 == 0)
            count++;
        if(count == 1499){
            printf("The 1500'th ugly number is %lld.\n",i);
        break;
        }
    }
    return 0;
}
