struct abc
{
    int a;
    char b;
}v2;
int main()
{
    struct abc v;
    struct abc *ptr=&v;
     scanf("%d\n%c",&(*ptr).a,&ptr->b);
    printf("%d\n%c",(*ptr).a,ptr->b);

}
