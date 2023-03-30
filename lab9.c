//  S-->cAd
//  A-->ab/a
#include<stdio.h>
#include<string.h>
int S(),A();
char *cp;
char string[50];
int S(){
    printf("%20s\t S->cAd  \n",cp);
    if(*cp=='c'){
        cp++;
        if(A()){
            if(*cp=='d'){
                cp++;
                return 1;
            }
            else{
                return 0;
            }
        }
        else{
            return 0;
        }
    }
    else{
        return 0;
    }
}
int A(){
    if(*cp=='a'){
        cp++;
        if(*cp=='b'){
            cp++;
            printf("%20s\t  A-->ab \n",cp);
        }
        else{
            printf("%20s\t  A-->a \n",cp);
            return 0;
        }
    }
    else{
        return 0;
    }
}
int main(){
    printf("Enter the string\n");
    scanf("%s",string);
    cp=string;
    printf("\n\t\tInput\tAction\n---------------------------------\n");
    if(S()){
        printf("\n String is successfully parsed\n");
    }
    else{
        printf("Error in parsing String\n");
    }
}