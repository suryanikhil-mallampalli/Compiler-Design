#include<stdio.h>
#include<stdlib.h>
int iskeyword(char temp[40]){
    char key[3][]={"int","char","float"};
    int i;
    for(i=0;i<3;i++){
        if(strcmp(key[i],temp)==0){
            return 1;
        }
    }
    return 0;
}
int main(){
    FILE *fp;
    char ch, temp[40], arthmetic_operator[]="=+*/-";
    int count, x=0,opflag=0;
    fp= fopen("transactions3.txt","r");
    if (fp == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
    while((ch=fgetc(fp))!=EOF)
    {
        for(int i=0;i<6;i++){
            int j=0;
            if(ch==arthmetic_operator[i]){
                printf("Operator is %c",ch);
                break;
            }
            if (i==6)
            {
                
                for(j;j<5;j++){
                    if(ch==delim[j]){
                        break;
                    }
                    if(j==5){
                        temp[x++]=ch;
                    }
                }
            }
            if((i<6 || j<4)&&x>0){
                    temp[x]='\0';
                    if
            }
        }  

    }
    fclose(fp);
    return 0;
}