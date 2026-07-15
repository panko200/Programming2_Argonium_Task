#include <stdio.h>
#include<stdlib.h>

int fibonacci( int n );

int main( int argc , char *argv[] )
{
	if( argc!=2 ){
		fprintf( stderr,"Please Input\n" );
		fprintf( stderr,"%s n\n",argv[0] );
		exit( 0 );
	}
	
	int n = atoi( argv[1] );
	
    int ans = fibonacci( n );

    fprintf(stderr,"再帰(n=%d) 答え: %d\n", n, ans);

    return 0;
}