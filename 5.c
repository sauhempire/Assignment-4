//5. Write a program to print the first 10 odd natural numbers in reverse order.
 #include<stdio.h>
    int main()
  {
    int i,j,s;
    for(i=10,j=9;i>=1;i--,j--)
    {
        s=i+j;
        printf("%d ",s);
         
    }
    return 0;
  }