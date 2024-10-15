#include <stdio.h>

int main(){
    int c, n=0;
    FILE * ptr;
    char archivo[20]="datitos.txt";
    if((ptr=fopen(archivo, "rt"))==NULL){
        printf("Lo sentimos el archivo no se abre por alguan razon\n");
        return 1;
    }
    while((c=fgetc(ptr))!=EOF){
        if(c=='\n'){
            n++;
            printf("\n");
        }else{
            putchar(c);
        }
    }
    printf("\n El archivo es de tipo \'%s\' y tiene %d lineas",archivo,n);
    fclose(ptr);
    return 0;

}
