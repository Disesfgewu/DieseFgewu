#include <iostream>
using namespace std;
int main()
{
	int n;
	int m;
	int array[50][50] = { 0 };
	int x, y;
	int count;
	//n����l�}�C���
	//m���_�l��V0123���W�k�U
	while (cin >> n >> m)
	{
		count = 1;
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
				cin >> array[i][j];
		y = n / 2 + 1;
		x = n / 2 + 1;
		cout << array[y][x];
		switch (m)
		{
			//���W�k�U
		case 0:
			for (int i = 1;; i += 2)
			{
				//��x--
				for (int j = 1; j <= i; j++)
				{
					if (count == n * n)
						break;
					count++;
					x--;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
				//�Wy--
				for (int j = 1; j <= i; j++)
				{
					if (count == n * n)
						break;
					count++;
					y--;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
				//�kx++
				for (int j = 1; j <= i + 1; j++)
				{
					if (count == n * n)
						break;
					count++;
					x++;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
				//�Uy++
				for (int j = 1; j <= i + 1; j++)
				{
					if (count == n * n)
						break;
					count++;
					y++;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
			}
			break;
			//�W�k�U��
		case 1:
			for (int i = 1;; i += 2)
			{
				//�Wy--
				for (int j = 1; j <= i; j++)
				{
					if (count == n * n)
						break;
					count++;
					y--;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
				//�kx++
				for (int j = 1; j <= i; j++)
				{
					if (count == n * n)
						break;
					count++;
					x++;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
				//�Uy++
				for (int j = 1; j <= i + 1; j++)
				{
					if (count == n * n)
						break;
					count++;
					y++;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
				//��x--
				for (int j = 1; j <= i + 1; j++)
				{
					if (count == n * n)
						break;
					count++;
					x--;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
			}
			break;
			//�k�U���W
		case 2:
			for (int i = 1;; i += 2)
			{
				//�kx++
				for (int j = 1; j <= i; j++)
				{
					if (count == n * n)
						break;
					count++;
					x++;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
				//�Uy++
				for (int j = 1; j <= i; j++)
				{
					if (count == n * n)
						break;
					count++;
					y++;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
				//��x--
				for (int j = 1; j <= i + 1; j++)
				{
					if (count == n * n)
						break;
					count++;
					x--;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
				//�Wy--
				for (int j = 1; j <= i + 1; j++)
				{
					if (count == n * n)
						break;
					count++;
					y--;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
			}
			break;
		case 3:
			//�U���W�k
			for (int i = 1;; i += 2)
			{
				//�Uy++
				for (int j = 1; j <= i; j++)
				{
					if (count == n * n)
						break;
					count++;
					y++;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
				//��x--
				for (int j = 1; j <= i; j++)
				{
					if (count == n * n)
						break;
					count++;
					x--;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
				//�Wy--
				for (int j = 1; j <= i + 1; j++)
				{
					if (count == n * n)
						break;
					count++;
					y--;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
				//�kx++
				for (int j = 1; j <= i + 1; j++)
				{
					if (count == n * n)
						break;
					count++;
					x++;
					cout << array[y][x];
				}
				if (count == n * n)
					break;
			}
			break;
		}
	}
	return 0;
}
