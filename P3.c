/ * P2.c * /
/ * Gustavo Alexander P. dos S. Sousa * /
/ * 11711EEL005 * /
# include < stdio.h >

int  main () {
   int dec, i = 0 ;
   bits de char [ 256 ];
   scanf ( " % s " , bits);
   para (; bits [i]; i ++) {
     if (bits [i]> = ' 0 ' && bits [i] <= ' 9 ' ) {
       dec = dec * 10 + (bits [i] - ' 0 ' );
     }
   }
   printf ( " \" % s \ " retorna \" % i \ "\ n " , bits, dec);
   return  0 ;
}
