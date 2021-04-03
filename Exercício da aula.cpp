/*F�rmula de Bhaskara
Entrada: A, B, C
Sa�da: X' e X''
Processamento: Calculo
SEQUENCIAL
Deciss�o ou Condicional
*/

#include<stdio.h> // Biblioteca para entrada e saida do comando scanf e printf.
#include<stdlib.h> //Biblioteca para a entrada do comando system pause
#include<math.h> // Biblioteca para entrada e saida de formular matematicas mais elaboradas.
int main(){  //Inicio do algoritmo.
	double A,B,C, x1, x2, delta; // Declarei as vari�veis como real double %lf, e escrevi o nome delas.
	printf("Digite o valor de A:\n"); //Pedi para que se escreva na tela a frase.
	scanf("%lf", &A); // Codigo de formata��o - endere�o - variavel.
	printf("Digite o valor de B:\n");
	scanf("%lf", &B);
	printf("Digite o valor de C:\n");
	scanf("%lf", &C);
	
	
//Condi��o: N�O POSSO DIVIDIR POR ZERO
// SE (A == 0) ENT�P
// ESCREVA("IMPOSS�VEL CALCULAR")
//SEN�O
//CALCULE
// SE DELTA <0 IMPOSS�VEL CALCULAR
   
   delta = pow(B,2) - 4*A*C;
  
  // e - and &&
  // ou - or ||
  
  if(A == 0 or delta < 0) //== (IGUAL) != (DIFERENTE) < (MENOR) > (MAIOR) <= (MENOR IGUAL) >= (MAIOR IGUAL)
	{
	printf("Impossivel calcular!\n");
    }
	else //sen�o
	{
	x1 = (-(B) + sqrt(delta))/ (2*A); //Formula de bhaskara.sqrt(): comando para tirar a raiz quadrada de algo.
	x2 = (-(B) - sqrt(delta))/ (2*A); //pow(): comando para tirar potencia de um numero. 		
	printf("X1= %.2lf\tX2= %.2lf\n", x1, x2); // %lf � colocado onde eu quero que o valor se encotre na frase.
	}
	
	
	//Operadores l�gicos: e ou n�o
	
	
/*
/t - tab
/n - enter
*/
	
	
	return 0; // Retorno da fun��o.
	system("pause");
} // Final do algoritmo.

