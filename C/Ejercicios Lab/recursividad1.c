#include<stdio.h>
#include<string.h>

char buscador(char texto[], char letra);

int main(){

    int i;
    char texto[100];
    char letra;

    fflush(stdin);
    gets(texto);
    fflush(stdin);
    scanf("%c", &letra);

    for(i = 0 ; i < 100 ; i++){
        printf("%d", buscador(texto[i], letra));
    }

    // Desarrolle un programa que cuente cuantas repeticiones de una determinada letra se



}

char buscador(char texto[], char letra){

    int i;

    if(texto[i] == letra){
        return (1 + buscador(texto[i], letra));
    } else if (texto[i] != letra){
        return buscador(texto[i], letra);
    }

    

}