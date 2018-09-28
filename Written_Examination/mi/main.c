#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int delete_num(int *a,int n);

int main()
{
    char *str;
    int n=10000000;
    int L,k;
    str = (char*) malloc(sizeof(char)*n);
    scanf("%s",str);
    scanf("%d",&k);
    L=strlen(str);
    if ((n-L) > 10)
    {
        realloc(str,sizeof(char)*(L+1));
        n = L+1;
    }
    int i=0;
    int *nums1,*nums;
    nums = (int*) malloc(sizeof(int)*L);
    nums1 = (int*) malloc(sizeof(int)*L);
    for(i=0;i<L;i++)
    {
        nums1[i]=(int)str[i]-48;
    }
    for(i=0;i<L;i++)
    {
        nums[i]=nums1[L-i-1];
    }
    int j=0;
    int flag[10000];
    for(i=0;i<k;i++)
    {
        flag[i]=delete_num(nums,L);
        for(j=flag[i];j<L-1;j++)
        {
            nums[j]=nums[j+1];
        }
        L--;
    }

    for(i=L-1;i>=0;i--)
    {
        printf("%d",nums[i]);
    }
    printf("\n");


    free(nums);
    free(nums1);
    free(str);
    return 0;
}

int delete_num(int *a,int n)
{
    int i,j;
    for(i=n-1,j=i-1;i>0;i--)
    {
        if(a[i]<a[j])
        {
            return i;
        }
        else
        {
            j--;
        }
    }
    return i;
}


