#include<stdio.h>
int main() {

  char numero [256];
   int i = 0, cum = 0;
   printf ("Digite o numero desejado:");
  scanf ("%s", numero);
  getchar ();
  while(numero[i] != '\0'){
if (numero[i] == '0' || numero[i] == '1' || numero[i] == '2' || numero[i] == '3' || numero[i] == '4'
|| numero[i] == '5'|| numero[i] == '6'|| numero[i] == '7' || numero[i] == '8'|| numero[i] == '9' ){
cum = cum*10 + numero[i] - '0';
}
 i++;

}
  printf("Caracter digitado corresponde a: %d", cum);
  return 0;
  }