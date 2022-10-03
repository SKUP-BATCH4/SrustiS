int main()
{
    int a[]={1,5,3,-1,2},s;
    int *p=&a[2];
    int *q=&a[5];
    p=p--;
    q=q++;
    printf("\n%d\n%d",*p,*q);
     printf("\n%d\n%d",p,q);


}
