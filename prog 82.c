#include<stdbool.h>
bool primecheck(int num)
{
    int n,count=0,i;
    for(i=1;i<=num;i++)
        if( num%i==0)
    {
        count++;
    }

     if(count==2)
        return true;
     else
        return false;

}

int main()
{
    int i;
    for(i=0;i<=10;i++)
       if(primecheck(i))
            printf("%d",i);
    }
