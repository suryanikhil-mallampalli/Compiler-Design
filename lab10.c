// E-->TEdash
// Edash-->+ TEdash
// T-->F/Tdash
// Tdash--> * F Tdash
// F -->(E)/i
#include<stdio.h>
#include<string.h>
int E(),Edash(),T(),Tdash(),F();
char *ip;
char string[50];
int E()
{
    printf("%20s\tE->TE' \n",ip);
    if(T())
    {
        if(Edash())
        {
            return 1;
        }
        else
        return 0;
    }
    else
    return 0;
}
int Edash()
{
    if(*ip=='+')
    {
        printf("%20s\tE'->+TE' \n",ip);
        ip++;
        if(T())
        {
            if(Edash())
            {
                return 1;
            }
            else
            return 0;
        }
        else
        return 0;
    }
    else
    {
        printf("%20s\tE'->^ \n",ip);
        return 1;
    }
}
int T()
{
    printf("%20s\tT->FT' \n",ip);
    if(F())
    {
        if(Tdash())
        {
            return 1;
        }
        else
        return 0;
    }
    else
    return 0;
}
int Tdash()
{
    if(ip=='*')
    {
        printf("%20s\tT'->*FT' \n",ip);
        ip++;
        if(F())
        {
            if(Tdash())
            {
               return 1;
            }
            else
            return 0;
        }
        else
        return 0;
    }
    else
    {
        printf("%20s\tT'->^ \n",ip);
        return 1;
    }
}
int F()
{
    if(*ip=='(')
    {
        printf("%20s\tF->(E) \n",ip);
        ip++;
        if(E())
        {
            if(*ip==')')
            {
                ip++;
                return 1;
            }
            else
            return 0;
        }
        else
        return 0;
    }
    else if(*ip=='i')
    {
        ip++;
        printf("%20s\tF->id \n",ip);
        return 1;
    }
    else  
    return 0;
}
main()
{
    printf("Enter the string\n");
    scanf("%s",string);
    ip=string;
    printf("\n\t\tInput\tAction\n------\n");

    if(E()&&*ip==NULL)
    {
        printf("\n---------\n");
        printf("\n String is successfully parsed\n");
    }
    else
    {
        printf("\n-----------\n");
        printf("Error in parsing String\n");
    }
    
}