
// �D�� : Zerojudge a453: TOI2010 �Ĥ@�D�G�@���G����{�� 
// AC (6ms, 340KB) 
#include <iostream>
#include <cmath>
using namespace std;

float N , a , b , c ; // �ŧi�����ܼ� ���A�� float  

int main ()
{
	cin >> N ;
	while ( N-- )
	{
		cin >> a >> b >> c ;
		float p = pow(b,2) - 4*a*c ;
		int sq = sqrt(p);           // �Q�� int �I���}�ڸ���p���I������ 
		if ( sq * sq == p )         // if �I���ᥭ�� == ��l�}�ڸ����e 
			cout << "Yes" << endl;  // ��ܽT�ꬰ���z�� 
		else
			cout << "No" << endl;
	}
	return 0 ;
}
