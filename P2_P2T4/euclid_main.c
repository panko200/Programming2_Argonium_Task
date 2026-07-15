#include <stdio.h>
#include <stdlib.h>

int gcd( int num1, int num2 );

int main( int argc , char *argv[] )
{
	if( argc!=3 ){
		fprintf( stderr,"Please Input\n" );
		fprintf( stderr,"%s m n\n",argv[0] );
		exit( 0 );
	}
	
	int num1 = atoi( argv[1] );
	int num2 = atoi( argv[2] );
	
    int result = gcd(num1, num2);

    fprintf(stderr,"%d と %d の最大公約数(GCD): %d\n", num1, num2, result);

    return 0;
}