/ * P1.c * /
/ * Gustavo Alexande P. dos S. Sousa * /
/ * 11711EEL005 * /
# include < stdio.h >

int  main () {
	int est = 0 , i;
	bits de char [ 256 ];
	scanf ( " % s " , bits);
	para (i = 0 ; bits [i]; i ++) {
		if (est == 0 && bits [i] == ' 1 ' ) est = 1 ;
		else  if (est == 1 ) {
			est = (bits [i] == ' 0 ' )? 2 : 0 ;
		}
		else  if (est == 2 && bits [i] == ' 0 ' ) est = 1 ;
	}
	printf ( " \" % s \ "  % s " , bits, est == 0 ? " e multiplo de 3 \ n " : " nao e \ n " );
	return  0 ;
}
