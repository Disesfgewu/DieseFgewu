#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
	long long int a , b , c ;
	while ( cin >> a >> b >> c )
	{
		//long long int count = 0 ;
		long long int A = a / 10 ;
		long long int C = c / 2 ;
		b += min( A , C ) ;
		 cout << a << " �ӻ氮�A" << b << " �����J�O�A" << c << " �ӳJ�|�C" << endl;
	}
	return 0 ;
}
