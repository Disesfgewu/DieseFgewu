#include <iostream>

using namespace std ;
const int nmax = 10000 ;
int Binary[nmax] ;   // �x�s��}�C 
int n ;             // �x�s���Ʀr�ƶq 

bool Binary_search( int tmp )  // tmp �O �M��� 
{
	int max = n-1 , min = 0 ;
	while ( max > min ) 
	{
		int mid = ( max + min ) / 2 ;
		if ( Binary[ mid ] < tmp ) //���ߪ���m<tmp�N��tmp�b�}�C���k�� 
			min += mid + 1 ;  
		else if ( Binary[ mid ] > tmp ) // �Ϥ� �h�N��b ���䪺�}�C 
			max = mid ; 
		else 			// �N�� ( Binary[mid] == tmp ) ���F �^��true  
			return true ;
	}
	return false ;      // �N��tmp���b�}�C���� �^��false 
}

int main ()
{	
	cin >> n ;
	for ( int i = 0 ; i < n ; i++ )
	{
		cin >> Binary[i] ;   // ��J�}�C���� 
	}
	int find_point ;
	cin >> find_point ;      // ��J�n�M�䪺�Ʀr�]�����^ 
	if ( Binary_search( find_point ) ) cout << "Yes\n" ;
	else	cout << "No\n" ; 
	return 0 ;
} 
