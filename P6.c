/ * P6.c * /
/ * Gustavo Alexander P. dos S. Sousa * /
/ * 11711EEL005* /
# include  < stdio.h >
# include  < stdlib.h >
# include  < math.h >
# define  pi  3.14159265359
# define  r  1

typedef  struct {
  float x, y;
} Ponto;

int  main () {
   int N, i; // empilhar memória
   Ponto * xy;
   scanf ( " % i " , & N); getchar ();
   xy = (Ponto *) malloc (N * tamanho de (Ponto)); // memória heap
   printf ( " % i volta \"  " , N);
   para (i = 0 ; i <N; i ++) {
     xy-> x = r * cos (i * 2 * pi / (N));
     xy-> y = r * sin (i * 2 * pi / N);
     printf ( " ( % .3f , % .3f ) " , xy-> x , xy-> y );
   }
   printf ( " \"  " );
   livre (xy);
   return  0 ;
}
