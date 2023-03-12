//[01] 잘못된 부분을 찾아서 고쳐 보세요.
/*
01. printf( " %d, %d ", 5, 10, 20 );
02. printf( " %c, %s \n", 32767, 'A'  );
03. printf( " %d, %d, %d 은 %d 의 약수 ", 1, 2, 3, 6 );
04. printf( " %d, %f", 127, 1.05 );
05. printf( " printf()", printf  );
06. printf( " %d \n ", 77 );
07. printf( " %s ", 256은 “2의 8승”입니다. );
08. printf( ‘ %5d ’, 127 );
09. printf( " %s ", '127' );
10. printf( " 나의 이름은 “김 학주”입니다."  );
11. printf( " %s %s %s ", "A", "B", "C" );
12. printf( " %c, %c, %c ", '김‘, ’학‘, ’주‘ );
13. printf( " %s 가 가장 좋아하는 숫자는 %d 입니다. ", “김학주”, 3 );
14. printf( " \100 원짜리 동전에는 누가 있을까요?“  );
15. printf( ‘ Hello, World ! ' );
*/“김학주” “”
#include <stdio.h>

int main(void)
{
	printf( " %d, %d, %d ", 5, 10, 20 );
	printf( " %d, %c \n", 32767, 'A'  );
	printf( " %d, %d, %d 은 %d 의 약수 ", 1, 2, 3, 6 );
	printf( " %d, %f", 127, 1.05 );
	printf( " printf()");
	printf( " %d \n ", 77 );
	printf( " %s ", "256은 “2의 8승”입니다." );;
	printf( " %15d ", 127 );
	printf( " %s ", "127" );
	printf( " 나의 이름은 “김 학주”입니다."  );
	printf( " %s %s %s ", "A", "B", "C" );
	printf( " %c, %c, %c ", '김', '학', '주' );
	printf( " %s 가 가장 좋아하는 숫자는 %d 입니다. ", "김학주", 3 );
	printf( " \\100 원짜리 동전에는 누가 있을까요?"  );
	printf( " Hello, World ! " );
}