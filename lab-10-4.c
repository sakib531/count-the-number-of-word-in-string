#include<stdio.h>
#include<string.h>

int main()
{
    char s[50]; int count=0; char ch=' ';

    printf("Enter the sentence:\n");
    gets(s);

    for(int i=0; s[i]!=0; i++)
    {
        if(s[i]==ch && s[i+1]!=ch)
        {
            count++;
        }
    }
    printf("Total words:\n%i",count+1);

return 0;
}
