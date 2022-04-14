#include<stdio.h>

long long int countd=0;
long long int temp[500000+1];
void merge(long long int arr[], int left, int mid, int right)
{
    int i=left, j=mid, k=left;
    while(i<mid && j<=right)
    {
        if(arr[i]>arr[j])
        {
            temp[k]=arr[j];
            countd+=(mid-i);
            j++;
        }
        else
        {
            temp[k]=arr[i];
            i++;
        }
        k++;
    }

    while(i<mid)
    {
        temp[k]=arr[i];
        k++;
        i++;
    }
    while(j<=right)
    {
        temp[k]=arr[j];
        k++;
        j++;
    }

    for(int i=left; i<=right; i++)
    {
        arr[i]=temp[i];
    }

}

void merge_sort(long long int arr[], int left, int right)
{

    if(left<right)
    {
        int mid=(left+right)/2;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid+1, right);
        merge(arr, left, mid+1, right);
    }
}

int main()
{

    long long int n;
    while(scanf("%lld", &n))
    {
        if(n==0)
            break;
        long long int arr[n];
        for(int i=0; i<n; i++)
        {
            scanf("%lld", &arr[i]);
        }
        merge_sort(arr, 0, n-1);
        if(countd%2==0)
            printf("Carlos\n");
        else{
            printf("Marcelo\n");}
        countd = 0;
    }

}
