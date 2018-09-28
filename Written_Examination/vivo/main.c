#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<memory.h>

int main()
{
  	int n=10000000;
  	int *nums;
  	nums=(int*)malloc(sizeof(int)*n);
  	memset(nums,0,n);
    int L=0;
    char ch;
    do
    {
        scanf("%d",&nums[L]);
        L++;
    }while((ch=getchar())!='\n');   //判断是否输入了回车符
    realloc(nums,L);

  	int i=0,j=1,k=0,flag=0,temp=0;
  	int ss=L;
    while(--ss)
    {
      if(flag==0)
     {
        for(i=k;i<L-j;i++)
       {
          if(nums[i]>nums[i+1])
          {
            temp=nums[i+1];
            nums[i+1]=nums[i];
            nums[i]=temp;
          }

        }
        j++;
        flag=1;
      }
       else if(flag==1)
      {
         for(i=L-j;i>k;i--)
         {
            if(nums[i]<nums[i-1])
            {
              temp=nums[i-1];
              nums[i-1]=nums[i];
              nums[i]=temp;
            }
          }
          k++;
          flag=0;
      }
    }
  	for(i=0;i<L;i++)
    {
        printf("%d ",nums[i]);
    }
    free(nums);
 	return 0;
}


