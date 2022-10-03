int main()
{
    int a=5;
    float b=7.7;
    char c='c';
    void *vp;
    vp=&a;
    printf("\n%d",&vp);
    vp=&b;
    printf("\n%f",&vp);
    printf("\n%x",&vp);
}
