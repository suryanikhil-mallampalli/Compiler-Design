//a string consisting of "ab" as substring
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
              k=1;
              printf("Current state is Q1 \n");
          }
          else if (k==2)
          {
              k=2;
              printf("Current state is Q2 \n");
          }
          
      }
      else if (a[i]=='b')
      {
          if(k==0)
          {
              k=0;
              printf("Current state is Q0 \n");
          }
          else if (k==1)
          {
              k=2;
              printf("Current state is Q2\n");
          }
          else if (k==2)
          {
              k=2;
              printf("Current state is Q2\n");
          }
          
      }
  }
  if(k==2){
    printf("String was Accepted");
  }
  else{
    printf("String was not Accepted");
  }
}