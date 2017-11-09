#include <stdio.h>
#include <string.h>


int main()
{
    char a[100], b[100];
    printf("digite o texto\n");
    gets(a);
    printf("digite o subtexto\n");
    gets(b);
    match(a,b);

    return 0;
}

void match(char *a, char *b){
    int sizea = strlen(a);
    int sizeb = strlen(b);
    int j =0;

    //loop para conferir cada caracter do texto
    for(int i = 0; i < sizea-sizeb; i++){
        //compara sucessivamente cada caractere do subtexto na posição atual
        for(j=0; j<sizeb; j++){

            if(a[i+j] != b[j])
                break;
        }
        if(j == sizeb)
            printf("encontrado na posião %d", i);
    }
}


