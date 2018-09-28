#include <stdio.h>
#include <stdlib.h>

int urgly_number_factor[3]={2,3,5};

int main()
{
    int i=0,L=0;
    L=sizeof(urgly_number_factor)/sizeof(int);
    scanf("%d",&i);
    int n;
    if(i<1)
    {
        return 0;
    }
    int k=0,j=0,num=1,temp=0;

    while(j<i)
    {
        temp=num;
        for(k=0;k<L;k++)
        {
            while(temp%urgly_number_factor[k]==0)
            {
                temp/=urgly_number_factor[k];
            }
            if(temp==1)
            {
                j++;
                n=num;
                break;
            }
            else
            {
                continue;
            }

        }
//            if(num%2==0||num%3==0||num%5==0||num%6==0||num%10==0||num%15==0||num%30==0)
//            {
//                j++;
//                n=num;
//            }
        num++;
    }

    printf("%d\n",n);
    return 0;
}
