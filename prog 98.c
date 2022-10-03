struct std
{
    int tm;
    float cgpa;
    char grade;
};




int main()
 {
     int n;

     printf("enter n");
     scanf("\n%d",&n);
     struct std s[n];
     printf("enter a tm, cgpa, grade\n");
     for(int i=0;i<n;i++)
     {
        scanf("\n%d\n%f\n%c",&s[i].tm,&s[i].cgpa,&s[i].grade);
        printf("\n%d\n%f\n%c",s[i].tm,s[i].cgpa,s[i].grade);


     }
    // for(int i=0;i<n;i++)


 }
