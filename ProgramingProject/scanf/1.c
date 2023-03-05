/* [02] scanf 함수를 사용한 입력 코드입니다. 잘못된 부분을 찾으세요.
01. int N1, N2 ;
    scanf( " %d %d ", N1, N2 );
02. char ch;
    scanf( " %c \n ", &ch );
03. char ch1, ch2 ;
    scanf( "%c %c %c ", ch1, ch2 );
04. int N;
    scanf( " 정수 : %f ", &N );
05. char ch, N ;
    scanf( " %c, %d ", &ch, &N );
06. scanf( " %d ", 10 );
07. scanf( " 문자 : %c ", 'A' );
08. double db1 ;
    scanf( " %f ", &db1 );
*/
#include <stdio.h>

int main(void)
{
    int N1, N2 ;
    scanf( " %d %d ", &N1, &N2 );
    
    char ch4;
    scanf( " %c \n ", &ch4 );
    
    char ch1, ch2 ;
    scanf( "%c %c  ", &ch1, &ch2 );
    
    int N;
    scanf( " 정수 : %d ", &N );
    
    char ch, N3 ;
    scanf( " %c, %c ", &ch, &N3 );
    
    int L;
    scanf( " %d ", &L );
    
    char ch3;
    scanf( " 문자 : %c ", &ch3 );
    
    double db1 ;
    scanf( " %lf ", &db1 );
    
}