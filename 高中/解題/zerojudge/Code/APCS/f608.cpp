#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
const int nmax = 200000 ;
int n ;
pair <int , int > A[nmax] ;
int main ()
{
    cin.tie(0) ;
    cout.tie(0) ;
	cin >> n ;
	for ( int i = 0 ; i < n ; i++ )
		cin >> A[i].first >> A[i].second ;
	sort( A , A+n ) ;                // �Hx�y�а��Ƨ� 
	vector <int> d ;
	for ( int i = 0 ; i < n ; i++ )
	{
		int y = A[i].second ;        // ���oy�y�� 
		int find_min = upper_bound( d.begin() , d.end() , y ) - d.begin() ;// ��l�ƦC����M�ƧǦ��L��y�ȧ�j���ƭ� 
		if ( find_min >= d.size() )
			d.push_back(y) ;		// �p�G�S�� �h������J 
		else
			d[find_min] = y ;		// �p�G�� ��s������p��y�ȥH�Q����P�_ 
	}
	cout << d.size() << endl;		// �l�ƦC�j�p�Y���ҨD 
 }
