int main()
{
    int i;
    char s[10],count=0;
    printf("enter a string");
    scanf("%s",&s);
    for(i=0;i<=s[i];i++)
    {
        if(!((s[i]>='a'&& s[i]<='z')||(s[i]>='A'&& s[i]<='Z')||(s[i]>='0' && s[i]<='9')))
        count++;

    }
    printf("%d",count);

}
