//101 should not be a substring
#include <stdio.h>
#include <string.h>
int main()
{
  char a[1000];
  int k=1;
  printf("Enter the string : ");
  scanf("%s",a);
  printf("Current state is Q1 \n");
  int l=strlen(a);
  for(int i=0;i<l;i++)
  {
      if (a[i]=='0')
      {
          if(k==1 )
          {
              k=1;
          }
          else if (k==2)
          {
              k=3;
          }
          else if (k==3)
          {
              k=1;
          }
          else if (k==4)
          {
              k=4;
          }
        }
      else if (a[i]=='1')
      {
          if(k==1)
          {
              k=2;
          }
          else if (k==2)
          {
              k=2;
          }
          else if (k==3)
          {
              k=4;
          }
          else if (k==4)
          {
              k=4;
          }
      }
      else
      {
          printf("%s string is rejected..",a);
          return 0;
      }
  }
  if (k==1 || k==2 ||k==3)
  {
      printf("%s is string accepted",a);
  }
  else
  {
      printf("%s string is rejected",a);
  }
}