//北航10年第三题
/*两个整数数组（无序，可有重复元素），判断两个整数数组是否完全相同（重复元素的话，重复次数也要相同）*/
//思路是纯计算相同元素的个数，不管是不是同一元素
#include <stdio.h>
#define M 100

int main()
{
    int arr1[M],arr2[M];
    int n;
    int flag = 0;
    scanf("%d",&n);
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&arr1[i]);

    for(i=0;i<n;i++)
        scanf("%d",&arr2[i]);

    int j,k;
    int l,m;
    for(i=0;i<n;i++)
    {
        j = k = 0;
        for(l=0;l<n;l++)
        {
            if(arr1[i]==arr1[l])//1自己跟自己比
                j++;
        }

        for(m=0;m<n;m++)
        {
            if(arr1[i]==arr2[m])//1和2比
                k++;
        }

        if(j!=k)
        {
            printf("not equal!\n");
            flag = 1;
            break;
        }

    }
    if(flag == 0) printf("equal!\n");
    return 0;
}
