/*
Leia quatro n�meros (N1, N2, N3, N4) e o nome do aluno e o sexo, correspondente �s 
quatro notas de um aluno. Calcule a m�dia simples. Para cada uma destas notas, 
mostre esta m�dia acompanhada pela mensagem "Media: ". Se esta m�dia for maior 
ou igual a 7.0, imprima a mensagem "'nome do aluno', 'sexo, aprovado.". 
Se a m�dia calculada for inferior, imprima a mensagem "'nome do aluno'
 reprovado.".
A impress�o da m�dia deve ser feita com apenas 1 cada decimal. 
*/
#include<stdio.h> //comandos de entrada e sa�da (print e scanf)
int main(){
    
        double n1, n2, n3, n4, media, frequencia; //%lf    double = long float  
        char sexo; //%c
        char nomeAluno[20]; //%s

          
        printf("Digite o sexo: ");
        scanf("%c", &sexo);
        
        printf("Digite as quatro notas: ");
        scanf("%lf%lf%lf%lf", &n1, &n2, &n3, &n4); //configura��o de casas decimais n�o funcionam em scanf
        
        printf("Digite o nome: ");
        scanf("%s", &nomeAluno);
        
        printf("Digite a frequencia: ");
        scanf("%lf", &frequencia);
        
        media = (n1+n2+n3+n4)/4;
        
        printf("Media: %.1lf\n", media); //1 casa decimal para printf
        
        /*
        if (condi��o)
            codigo da condi��o verdadeira;
            else codigo da condi��o falsa
        
        */
        //"'nome do aluno', 'sexo, aprovado."
        if (frequencia >= 75 && media >= 7)
            printf("%s, %c, aprovado com media %.1lf\n", nomeAluno, sexo, media);
            else printf("%s, %c, REprovado com media %.1lf\n", nomeAluno, sexo, media);
            
        
       
        
        
    // fgets(nome, tam, stdin); = Para que seja poss�vel escrever o nome e sobrenome.
    // fflush(stdin);
    return 0;
}
