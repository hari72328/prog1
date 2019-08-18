#include<stdio.h>
int main()
{

    int a,l,r;
    scanf("%d",&a);
    scanf("%d %d",&l,&r);
    if(a>=l && a<=r)
    {
        printf("yes");
    }
    else
    {

        printf("no");
    }

    return 0;
}
