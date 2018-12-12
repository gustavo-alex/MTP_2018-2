//P5.c
//Gustavo Alexander P. dos S. Sousa 
// 11711EEL005 

# include  < stdio.h >
# define  N  50

typedef
   sem assinatura  longa  longa  int
Bytes8;

typedef
   struct LCG {
      Bytes8 a, c, m, rand_max, atual; 
   }
LCG;

vazio  semente (LCG * r, semente Bytes8) {
   // constantes do POSIX [de] rand48, glibc [de] rand48 [_r]
   // ULL transforma uma constante 'int' em 'sem assinatura long long int'
   r-> a = 0x5DEECE66DULL ;
   r-> c = 11ULL ;
   r-> m = ( 1ULL << 48 );
   r-> rand_max = r-> m - 1 ;
   r-> atual = semente;
}

Bytes8 lcg_rand (LCG * r) {
   r-> atual = (r-> a * r-> atual + r-> c )% r-> m ;
   retorno r-> atual ;
}

double  lcg_rand_01 (LCG * r) {
   return (( double ) lcg_rand (r)) / (r-> rand_max );
}

void  gera_numeros_printa ( flutuante *, int , flutuante , flutuante , LCG *);

float  somatorio ( float *, float *);
float  produtio ( float *, float *);

int  main () {
   LCG aleatório ;
   semente (& aleatória , 123456 );
   
   vetor flutuante [N]; // porque não pode deixar * vetor?
   char opcao;
   printf ( " \ n \ n \ t " );
   gera_numeros_printa (& vetor [ 0 ], N, 0.5 , 1.5 , & aleatório );
   printf ( " \ n \ n \ t 1 - Somatorio \ n \ t 2 - Produtorio \ n \ n \ t " );
   scanf ( " % c " e opcao);
   switch (opcao) {
     case  ' 1 ' :
     printf ( " \ n \ t \" % c \ " resulta em \" % g \ "\ n \ n " , opcao, somatorio (& vetor [ 0 ] e vetor [ 0 ] + N- 1 ));
     pausa ;
     
     caso  ' 2 ' :
     printf ( " \ n \ t \" % c \ " resulta em \" % g \ "\ n \ n " , opcao, produtor (& vetor [ 0 ] e vetor [ 0 ] + N- 1 ));
     pausa ;
     
     padrão :
     	printf ( " \ n \ n \ t Opcao invalida \ n \ n " );
   }
   return  0 ;
}

void  gera_numeros_printa ( float * vetor, int tam, float min, flutuante max, LCG * r) {
   int i;
   para (i = 0 ; i <tam; i ++) {
      vetor [i] = (max-min) * lcg_rand_01 (r) + min;
      printf ( " % f   " , vetor [i]);
      if ((i + 1 )% 10 == 0 ) printf ( " \ n \ t " );
   }
}

float  somatorio ( float * inicio_vetor, float * fim_vetor) {
   return (inicio_vetor == fim_vetor + 1 )? 0 : * inicio_vetor + somatorio (inicio_vetor + 1 , fim_vetor);
}

float  produtor ( float * inicio_vetor, float * fim_vetor) {
   return (inicio_vetor == fim_vetor + 1 )? 1 : * inicio_vetor * produtor (inicio_vetor + 1 , fim_vetor);
}
