#include<stdio.h>
#include<conio.h>

int main(){
    FILE *fp;
    int i=0;

    fp=fopen("deneme.txt","w");
    for(i=65; i<=90; i++){
        fputc(i, fp);
    }
    fclose(fp);

    fp=fopen("deneme.txt","r");
    for(i=0; i<=25; i++){
        printf("%c\t",fgetc(fp));
    }

    getch();

}