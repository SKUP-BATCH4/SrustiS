struct std
{
    char d[20];
    float time;
    char s[20];
};
int main()
 {
     int n;
    printf("enter number of people");
     scanf("\n%d",&n);
     struct std s[n];
     printf("enter a date, time, bookname\n");
     for(int i=0;i<n;i++)
     {
        scanf("\n%c\n%f\n%s",&s[i].d,&s[i].time,&s[i].s);
        printf("\n%c\n%f\n%s",s[i].d,s[i].time,s[i].s);
     }
 }
