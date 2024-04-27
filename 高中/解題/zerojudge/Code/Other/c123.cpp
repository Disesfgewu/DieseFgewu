#include <iostream>
#include <stack>
using namespace std ;
stack <int> s ;
int n ;
bool ch ( int a[] , int b[] , int n )
{
	int i = 0 , j = 0 ;
	while ( j < n )
	{
		if ( !s.empty() && b[j] != s.top() && i == n )
			return false ;
		if ( !s.empty() && b[j] == s.top() )
		{
			s.pop() ;
			j++ ;
		}
		else
		{
			s.push( a[i] ) ;
			i++ ;
		}
	}
	if ( j == n )
		return true ;
	else
		return false ;
}
void clear ( void )
{
	while ( !s.empty() )
		s.pop() ;
}
int main ()
{
//	int n ;
	while ( cin >> n )
	{
		int a[n] = {0} , b[n] = {0} ;
		stack <int> s ;
		for ( int i = 0 ; i < n ; i++ )
			a[i] = i+1 ;
		while ( cin >> b[0] )
		{
			clear();
			int c[n] = {0} ;
			if ( b[0] == 0 )
				break ;
			for ( int i = 1 ; i < n ; i++ )
				cin >> b[i] ;
			if ( ch ( a , b , n ) )
				cout << "Yes\n" ;
			else
				cout << "No\n" ;
		}
		cout << endl ;
	}
}
