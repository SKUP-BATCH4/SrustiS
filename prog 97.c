int main()
{
    char a[10]=" ",*p;
    int count=0,count1=0,i;
    printf("enter a string");
    scanf("\n%s",&a);
    p=&a;
    for(i=0;a[i]!='\0';i++)
    {

    if(*p=='a'|| *p=='e'|| *p=='i'||*p=='o'|| *p=='u')
    {
       count++;
    }
    else
    {
       count1++;
    }
    p++;
    }
 printf("vowel is %d",count);
    printf("cons is %d",count1);

}

