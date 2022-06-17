#include <stdio.h>

int main() 
{
    int A,B,t,n;
    scanf("%d",&t);
    
    for(int i=1;i<=t;i++)
    {
        scanf("%d%d",&A,&B);
        
        if(A<=B)
        printf("%d\n",A);
        else
        printf("%d\n",B);
        
    }
    
	return 0;
}

