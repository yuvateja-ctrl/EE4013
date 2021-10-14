#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    char S[] = "1";
    char E[] = "10000001";
    char M[] = "11110000000000000000000";

    int e = sizeof(E)/sizeof(E[0]);
    int m = sizeof(M)/sizeof(M[0]);

    printf("%d .. %d\n",e,m);

    int exponent = 0;
    for(int i = 0;i<e-1;i++)
    {
        if(E[i] == '1')
        {
            exponent = exponent*2 + 1;
        }
        else
        {
            exponent = exponent*2 + 0;
        }
        printf("%d\n",exponent);
    }
    
    double fraction = 0;
    for(int i = 0;i<m-1;i++)
    {
        if(M[i] == '1')
        {
            fraction += 1*(pow(2,-i-1));
        }
    }
    int s = (S[0] == '1')?-1:1;
    printf("%lf\n",fraction);
    double ans = s*(1+fraction)*(pow(2,exponent-127));
    printf("The decimal value corresponding to above representation is %lf \n",ans);
    

    return 0;
}
