//7. Write a program to print the first 10 even natural numbers in reverse order
 #include<stdio.h>
    int main()
  {
    int i,j,s;
    for(i=10,j=10;i>=1;i--,j--)
    {
        s=i+j;
        printf("%d ",s);

    }
    return 0;
  }