#include <stdio.h>
int B[10000], S[10000];
int n, m, count, y_age;

int main()
{
    while(1)
    {
        scanf("%d %d", &n, &m);
        if (n==0 && m==0)
            break;

        y_age=61;
        for (int i=0; i<n; i++)
        {
            scanf("%d", &B[i]);
            if(y_age > B[i])
                y_age = B[i];
            else
                y_age = y_age;
        }

        for (int i=0; i<m; i++)
        {
            scanf("%d", &S[i]);
        }

        if(n<=m)
            printf("Case %d: 0\n", ++count);
        else
            printf("Case %d: %d %d\n", ++count, n-m, y_age);
    }
}
