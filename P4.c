/ * P4.c * /
/ * Gustavo Alexander P. dos S. Sousa * /
/ * 11711EEL005 * /

/ * Funcao de Ackermann * /
# include  < stdio.h >

 Ackermann duplo ( duplo , duplo );
int  main () {
   m duplo , n;
   scanf ( " % lf% lf " , & m, & n);
   printf ( " \" % g \ " + \" % g \ " resulta em \" % g \ "\ n " , m, n, Ackermann (m, n));
   return  0 ;
}

 Ackermann duplo ( double m, double n) {
   if (m == 0 ) retorna n + 1 ;
   else  if (m> 0 && n == 0 ) Ackermann (m - 1 , 1 );
   else  if (m> 0 && n> 0 ) Ackermann (m - 1 , Ackermann (m, n - 1 ));
}
