#include <stdio.h>
#include <string.h>
int main ()
{
    char s[100];
    int temp;
    scanf("%s", s);
    int length = strlen(s);
    for(int i=0; i<length; i+=2)
    {
        for(int j=0; j<length-1; j+=2)
        {
            if (s[j]>s[j+2])    //+ er jnno ekta count besi
            {
                temp = s[j];
                s[j] = s[j+2];
                s[j+2] = temp;
            }
        }
    }
    printf("%s", s);
    return 0;
}
