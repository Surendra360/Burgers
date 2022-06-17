#include <stdio.h>

int main() 
{
    int A,B,T;
    scanf("%d",&T);
    
    for(int i=1;i<=T;i++)
    {
        scanf("%d%d",&A,&B);
        
        if(A<=B)
        printf("%d\n",A);
        else
        printf("%d\n",B);
        
    }
    
	return 0;
}

