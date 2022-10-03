#include<stdbool.h>
bool evenlyspaced(int a,int b,int c)
{
   if(a-b==b-c)
   {
       return true;
   }
   else if(c-b==a-c)
   {
       return true;
   }
   else if(b-a==a-c)
   {
       return true;
   }

   else
    {
        return false;
   }
}
int main()
{
    int a,b,c;
    printf("enter a a,b,c\n");
    scanf("%d\n%d\n%d",&a,&b,&c);
    printf("%d",evenlyspaced(a, b, c));
}
