struct abc
{

     char str[20];
      int a;
     float c;
};
int main()
{
    struct abc emp1={"srusti",20220840,85};

    struct abc emp2={"anu",20220842,80};
    printf("%s\n%d\n%f\n",emp1.str,emp1.a,emp1.c);
      printf("\n%s\n%d\n%f\n",emp2.str,emp2.a,emp2.c);



}
