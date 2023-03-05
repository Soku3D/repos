/*
[03] 다음 코드들의 출력 결과는 무엇입니까? 
01. char ch = 98 ;
    printf( " %d ", ch ); = 98
02. unsigned char ch = 256 ;
    printf( " %d ", ch ); =0
03. char ch = 'A' ;
    printf( " %d ", ch ); = 65
04. char ch = 1000 ;
    printf( " %c ", ch );
05. unsigned int N = -1 ;
    printf( " %u, %d ", N, N );
06. int N = -1 ;
    printf( " %u, %d ", N, N );
07. long nBig = 1000000;
    short nSmall = nBig;
    printf( " %d, %d ", nBig, nSmall );
08. int N = 2109876543 ;
    printf( " %d ", N );
09. float fReal = 123.123456789123456789;
    printf( " %f, %.10f ", fReal, fReal );
10. double fReal = 123.123456789123456789 ;
    printf( " %f, %.10f ", fReal, fReal );

*/
#include <stdio.h>

int main(void)
{
	char ch = 98 ;
    printf( " %d ", ch );
    printf( "\n");

	unsigned char ch = 256 ;
    printf( " %d ", ch );
    printf( "\n");

	char ch = 'A' ;
    printf( " %d ", ch );
    printf( "\n");

	char ch = 1000 ;
    printf( " %c ", ch );
    printf( "\n");

	unsigned int N = -1 ;
    printf( " %u, %d ", N, N );
    printf( "\n");

	int N = -1 ;
    printf( " %u, %d ", N, N );
    printf( "\n");

	long nBig = 1000000;
    short nSmall = nBig;
    printf( " %d, %d ", nBig, nSmall );
    printf( "\n");

	int N = 2109876543 ;
    printf( " %d ", N );
    printf( "\n");

	float fReal = 123.123456789123456789;
    printf( " %f, %.10f ", fReal, fReal );
    printf( "\n");

	double fReal = 123.123456789123456789 ;
    printf( " %f, %.10f ", fReal, fReal );
    printf( "\n");

}