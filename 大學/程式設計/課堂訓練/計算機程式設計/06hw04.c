#include <stdio.h>
int main ()
{
	int score , count = 3 ;
	do 
	{
		printf( "Enter score : " ) ;
		scanf( "%d" , &score ) ;
		switch ( score )
		{
			case 90 ... 100 :
				printf( "�o A\n" ) ;
				break ;
			case 80 ... 89 :
				printf( "�o B\n" ) ;
				break ;
			case 70 ... 79 :
				printf( "�o C\n" ) ;
				break ;
			case 60 ... 69 :
				printf( "�o D\n" ) ;
				break ;
			default :
				printf( "�o F\n" ) ;
				break ;
		}
		count-- ;
	}while ( count > 0 ) ;
}
