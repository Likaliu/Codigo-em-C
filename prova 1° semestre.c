//Aluna: Liane Barbosa Nascimento dos Santos
/*
1) (5.0) DESAFIO DOS VETORES: Você foi contratado para desvendar os três desafios do VETOR. 
O Primeiro desafio: 
1- Dado dois arrays de números inteiros com 10 elementos imprima os números do primeiro array que não estão 
presentes no segundo array. Lembrando que os números não podem ser repetidos no vetor 1 e vetor 2.

O Segundo desafio:
2- Após resolver a etapa um você deve realizar a soma do vetor 1 e vetor 2 e imprimir os valores do Vetor 1 , Vetor2 
e o nome vetor que pode ser chamado de resultado. 

O Terceiro desafio:
3- Para finalizar, você deve informar quais são os números primos no Vetor1, Vetor2 e Vetor Resultado.
*/

#include<stdio.h> //Biblioteca para entrada e saída de dados
#include<stdlib.h>//Biblioteca para utilizar funções próprias do Sistema Operacional
#include<locale.h>//Biblioteca para utilizar acentos
#define VETOR 10  

int main(){
	setlocale(LC_ALL, "portuguese");
	
int vet1[10]={2,3,4,5,6,12,1,23,11,32},vet2[10]={2,31,4,51,16,12,1,23,111,323};
int i=0,x=0,cont=0,resultado[10],eh_primo=0;
//Comparação,primeiro desafio.
for(i=0;i<=9;i++){ // comando para verificar quais n° do primeiro array não estar contido no segundo
	for(cont=i-1;cont<=9;cont++){ 
		i++; 
		x++;
		cont++;
		
		if(vet1[i]!=vet2[x]){
			printf("[%d]\n",vet1[i]);
		}
	}	
}
//segundo desafio.
//Somando vetores e gerando outro chamado resultado.
for(i=0;i<=9;i++){	
	resultado[i]= vet1[i] + vet2[i];
	printf("resultado [%i]= %i\n",i,resultado[i]);
}
//terceiro desafio.
//verificando números primos do primeiro vetor
printf("números primos do vetor 1:");
for (i=0;i<=9;i++){
	eh_primo=0;
    for (cont=1;cont<=vet1[i];cont++){
	  if ((vet1[i]%cont)==0){
	    eh_primo++;}
		 }
		if (eh_primo==2){
	      printf("\n[%d]",vet1[i]);
		  }  
    }
//verificando números primos do segundo vetor
printf("\nnúmeros primos do vetor 2:");
for (i=0;i<=9;i++){
	eh_primo=0; 
    for (cont=1;cont<=vet2[i];cont++){
	  if ((vet2[i]%cont)==0){
	    eh_primo++;}
		 }
		if (eh_primo==2){ 
	      printf("\n[%d]",vet2[i]); 
		  }  
    }  
//verificando números primos do terceiro vetor 
 printf("\nnúmeros primos do vetor 3:");
for (i=0;i<=9;i++){
	eh_primo=0;
    for (cont=1;cont<=resultado[i];cont++){
	  if ((resultado[i]%cont)==0){
	    eh_primo++;}
		 }
		if (eh_primo==2){
	      printf("\n[%d]",resultado[i]);
		  }  
    } 
 
	return 0;
}