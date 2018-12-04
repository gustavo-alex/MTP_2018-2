/ * P2.c * /
/ * Gustavo Alexander P. dos S. Sousa * /
/ * 11711EEL005 * /
# include < stdio.h >
# define  maxBits  20

int  length ( caractere str []) {
  int i;
  para (i = 0 ; str [i]; i ++);
  return i;
}

void  removeZeros ( char bits []) {
  int i = 0 , sinalizador = 0 , índice = 0 ;
  para (; i <= maxBits; i ++) {
    if (bits [i]! = ' 0 ' ) sinalizador = 1 ;
    if (flag == 1 ) {
      bits [ index ] = bits [i];
      index ++;
    }
  }
  bits [ índice ] = 0 ;
}

int  toDecimal ( int base, char bin []) {
   int i, dec = 0 , potencia = 1 , b;
   para (i = comprimento (bin) - 1 ; i> = 0 ; i -) {
      if (bin [i] <= ' 9 ' ) b = bin [i] - ' 0 ' ;
      else b = bin [i] - ' A ' + 10 ;
     
     dec + = b * potencia;
     potencia * = base;
   }
   return dec;
}

void  fromDecimal ( int base, int dec, char bits []) {
  int i, flag = 0 ;
  para (i = maxBits; i> = 0 ; i -) {
    bits [i] = dec% base + ' 0 ' ;
    dec / = base;
    if (bits [i]> ' 9 ' ) bits [i] = ' A ' - 1 + (bits [i] - ' 9 ' );
  }
  removeZeros (bits);
}

int  main () {
   int opcao, dec;
   bits de char [ 256 ];
   printf ( " 1. Binario para Decimal \ n " );
   printf ( " 2. Binario para Hexadecimal \ n " );
   printf ( " 3. Hexadecimal para Decimal \ n " );
   printf ( " 4. Hexadecimal para Binario \ n " );
   printf ( " 5. Decimal para Binario \ n " );
   printf ( " 6. Decimal para hexadecimal \ n " );
   printf ( " 7. Octal para decimal \ n " );
   printf ( " 8. Decimal para Octal \ n \ n " );
   scanf ( " % i " , & opcao); getchar ();
   if (opcao == 1 || opcao == 2 || opcao == 3 || opcao == 4 || opcao == 7 )
     scanf ( " % s " , bits);
     
   switch (opcao) {
     caso  1 :
     printf ( " \" % i \ " + \" % s \ " retorna \" % i \ "\ n " , opcao, bits, toDecimal ( 2 , bits));
     pausa ;
     
     caso  2 :
     printf ( " \" % i \ " + \" % s \ " retorna " , opcao, bits);
     fromDecimal ( 16 , toDecimal ( 2 , bits), bits);
     printf ( " \" % s \ "\ n " , bits);
     pausa ;
     
     caso  3 :
     printf ( " \" % i \ " + \" % s \ " retorna \" % i \ "\ n " , opcao, bits, toDecimal ( 16 , bits));
     pausa ;
     
     caso  4 :
     printf ( " \" % i \ " + \" % s \ " retorna " , opcao, bits);
     fromDecimal ( 2 , toDecimal ( 16 , bits), bits);
     printf ( " \" % s \ "\ n " , bits);
     pausa ;
     
     caso  5 :
     scanf ( " % i " , & dec);
     fromDecimal ( 2 , dec, bits);
     printf ( " \" % i \ " + \" % i \ " retorna \" % s \ "\ n " , opcao, dec, bits);
     pausa ;
     
     caso  6 :
     scanf ( " % i " , & dec);
     fromDecimal ( 16 , dec, bits);
     printf ( " \" % i \ " + \" % i \ " retorna \" % s \ "\ n " , opcao, dec, bits);
     pausa ;
     
     caso  7 :
     printf ( " \" % i \ " + % s retorna \" % i \ "\ n " , opcao, bits, toDecimal ( 8 , bits));
     pausa ;
     
     caso  8 :
     scanf ( " % i " , & dec);
     fromDecimal ( 8 , dec, bits);
     printf ( " \" % i \ " + \" % i \ " retorna \" % s \ "\ n " , opcao, dec, bits);
     pausa ;

   }
   return  0 ;
}
