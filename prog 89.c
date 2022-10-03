int main()
{
    int *p[5],p1[5],i,j;
    printf("enter an array");
    for(int i=0;i<5;i++)
    {
       scanf("%d",&p1[i]);
    }
    for(int j=0;j<5;j++)
    {
        p[j]=&p1[i];


    printf("%d\n",*p[j]);
    }

}
