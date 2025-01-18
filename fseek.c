#include<stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("xyz.txt","r");
    if(!fp)
    {
        printf("Error: File cannot be opened\n");
        return 0;
    }
    //Move forward 6 bytes, thus we won't be seeing the first 6 bytes if we print till the end.
    fseek(fp, 6, 0);
    char ch;
    while(fread(&ch,sizeof(ch),1,fp)==1)
    {
        //Here, we traverse the entire file and print its contents until we reach its end.
        printf("%c",ch);
    }
    
    fclose(fp);
    return 0;
}
