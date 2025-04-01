#include <stdio.h>
#include <string.h>
#include <locale.h>

void copiarString(char *copiarDaqui, char *colarAqui){
    while(*copiarDaqui != '\0'){
        *colarAqui = *copiarDaqui;
        ++colarAqui;
        ++copiarDaqui;
    }
    *colarAqui = '\0';
}

int main(void){
    setlocale(LC_ALL, "Portuguese");

    void copiarString(char *copiarDaqui, char *colarAqui);

    char string1[] = "Pão com Mortadela.";
    char string2[20];

    copiarString(string1, string2);
    printf("%s\n", string2);

    getchar();
}