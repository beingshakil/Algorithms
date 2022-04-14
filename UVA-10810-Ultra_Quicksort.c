#include<stdio.h>

int arr[500000], temp[500000];
long long int count=0;
void merge(int left, int mid, int right)
{
    int i=left, j=mid, k=0;
    while(i<mid && j<right)
    {
        if(arr[i]>arr[j])
        {
            temp[k]=arr[j];
            count+=mid-i;
            k++;
            j++;
        }
        else
        {
            temp[k]=arr[i];
            k++;
            i++;
        }
    }
    while(i<mid)
    {
        temp[k]=arr[i];
        k++;
        i++;
    }

    while(j<right)
    {
        temp[k]=arr[j];
        k++;
        j++;
    }

    for(i=left; i<right; i++)
        arr[i]=temp[i-left];
}
void merge_sort(int left, int right)
{
    if (left+1>=right)
        return;

    int mid=(left+right)/2;

    merge_sort(left, mid);
    merge_sort(mid, right);
    merge(left, mid, right);
}

int main()
{
    int n;
    while(scanf("%d",&n) &&n)
    {
        count=0;
        for(int i=0; i<n; i++)
            scanf("%d", &arr[i]);

        merge_sort(0, n);
        printf("%lld\n", count);
    }
    return 0;
}
