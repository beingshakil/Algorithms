#include<stdio.h>
int main()
{
    int t, n, temp;
    scanf("%d", &t);
    for(int i=0; i<t; i++)
    {
        scanf("%d",&n);
        int ar[n], count=0;;
        for(int i=0; i<n; i++)
        {
            scanf("%d", &ar[i]);
        }
        for (int i=0; i<n-1; i++)
            for (int j=0; j<n-i-1; j++)
            {
                if (ar[j] > ar[j+1])
                {
                    temp = ar[j];
                    ar[j]=ar[j+1];
                    ar[j+1]=temp;
                    count++;
                }
            }

        printf("Optimal train swapping takes %d swaps.\n", count);

    }

    return 0;
}
