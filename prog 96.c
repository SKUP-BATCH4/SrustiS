int main()
{
    int a[5],sum=0,i,n,avg;
    printf("enter n");
    scanf("%d",&n);
    printf(" enter an array");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    avg=sum/n;

    printf("%d",avg);
}
