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
	sort( A , A+n ) ;                // 以x座標做排序 
	vector <int> d ;
	for ( int i = 0 ; i < n ; i++ )
	{
		int y = A[i].second ;        // 取得y座標 
		int find_min = upper_bound( d.begin() , d.end() , y ) - d.begin() ;// 於子數列中找尋排序有無比y值更大的數值 
		if ( find_min >= d.size() )
			d.push_back(y) ;		// 如果沒有 則直接放入 
		else
			d[find_min] = y ;		// 如果有 更新為比較小的y值以利後續判斷 
	}
	cout << d.size() << endl;		// 子數列大小即為所求 
 }
