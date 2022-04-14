#include <stdio.h>
int main()
{
    int n,temp, arr[1000], count;
    while(scanf("%d", &n)!=EOF)
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d", &arr[i]);
        }

        count=0;
        for (int i=0; i<n-1; i++)
        for (int j=0; j<n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                count++;
            }
        }
        printf("Minimum exchange operations : %d\n", count);
    }
    return 0;
}
