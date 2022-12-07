//6. Write a program to print the first 10 even natural numbers
 #include<stdio.h>
    int main()
  {
    int i,j,s;
    for(i=1,j=1;i<=10;i++,j++)
    {
        s=i+j;
        printf("%d ",s);
    }
    return 0;
  }