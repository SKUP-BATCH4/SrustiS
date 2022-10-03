int sum(int a, int b)
{
    int s;
    s=a+b;
    return s;

}
int main()
{
    int a,b,s;
    int (*p)(int, int)=sum;
    printf("enter number a b");
    scanf("%d%d",&a,&b);
    printf("%d%d",a,b);
   s=(*p)(a,b);
    printf("%d",s);


}
