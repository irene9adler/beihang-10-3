//����10�������
/*�����������飨���򣬿����ظ�Ԫ�أ����ж��������������Ƿ���ȫ��ͬ���ظ�Ԫ�صĻ����ظ�����ҲҪ��ͬ��*/
//˼·�Ǵ�������ͬԪ�صĸ����������ǲ���ͬһԪ��
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
            if(arr1[i]==arr1[l])//1�Լ����Լ���
                j++;
        }

        for(m=0;m<n;m++)
        {
            if(arr1[i]==arr2[m])//1��2��
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
