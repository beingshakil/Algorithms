#include <stdio.h>
#include <stdlib.h>

int n, even[2000], odd[2000], sum=0, sum_even=0, sum_odd=0, ans=0, e=0, o=0;;
void bubble_sort(int arr[], int n)
{
    int i, j, temp;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void print_value()
{
    int i;
    int size = abs(e-o);

    if(size==0 || size==1)
    {
        sum_even+=sum_odd;
        ans=sum-sum_even;
        printf("%d\n", ans);
    }
    else
    {
        if(e>o)
        {
            for(i=0; i<size-1; i++)
                ans+=even[i];
        }
        else
        {
            for(i=0; i<size-1; i++)
            {
                ans+=odd[i];
            }
        }
        printf("%d\n", ans);
    }
}

int main()
{
    int i;
    scanf("%d", &n);
    int arr[n];
    while(n--)
    {
        scanf("%d", &arr[i]);
        sum+=arr[i];

        if(arr[i]%2==0 )
        {
            even[e] = arr[i];
            sum_even+=arr[i];
            e++;
        }
        else
        {
            odd[o] = arr[i];
            sum_odd+=odd[o];
            o++;
        }
    }

    bubble_sort(even, e);
    bubble_sort(odd, o);
    print_value();

}