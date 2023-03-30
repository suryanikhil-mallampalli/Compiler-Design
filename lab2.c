#include <stdio.h>
#include <string.h>
int main()
{
  char a[1000];
  int k=0;
  printf("Enter the string : ");
  scanf("%s",a);
  printf("Current state is Q0 \n");
  int l=strlen(a);
  if(l%2)
  {
      printf("String rejected");
      return 0;
      
  }
  for(int i=0;i<l;i++)
  {
      if (a[i]=='a')
      {
          if(k==0 )
          {
              k=1;
              printf("Current state is Q1 \n");
          }
          else if (k==1)
          {
              k=0;
              printf("Current state is Q0 \n");
          }
          else if (k==2)
          {
              k=3;
              printf("Current state is Q3 \n");
          }
          else if (k==3)
          {
              k=2;
              printf("Current state is Q2 \n");
          }
      }
      else if (a[i]=='b')
      {
          if(k==0)
          {
              k=3;
              printf("Current state is Q3 \n");
          }
          else if (k==1)
          {
              k=2;
              printf("Current state is Q2\n");
          }
          else if (k==2)
          {
              k=1;
              printf("Current state is Q1\n");
          }
          else if (k==3)
          {
              k=0;
              printf("Current state is Q0\n");
          }
      }
      else
      {
          printf("%s is not accepted",a);
          break;
      }
  }
  if (k==0)
  {
      printf("%s is string not accepted",a);
  }
  else
  {
      printf("%s is accepted",a);
  }
}