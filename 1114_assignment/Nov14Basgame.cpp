#include <iostream>

using namespace std;
// ============ ���� ���� ���� ============= // 
int pBet = 0;
int pFund = 0;
int minBet = 500;

int main()
{
	// TODO: 2�� ��� ����� // 
	int number[10] = { 0, 1, 2, 3 , 4, 5, 6, 7, 8, 9 };
	int player[3] = {};
	int computer[3] = {};

	// console 

	cout << "������ �ִ� ���� �Է��ϼ���";
	cin >> pFund;

	if (pFund < 500)
	{
		cout << " ������ �ִ� ���� �����մϴ�.";
	}
	else
	{
		cout << "���� �ϰ��� �ϴ� ���� �Է��ϼ���";
		cin >> pBet;
		




		// for computer ERROR // 

		//int dest, sour, temp;
		//for (int i = 0; i < 256; i++)
		//{
		//	srand(time(0));
		//	dest = rand() % 10; 
		//	sour = rand() % 10;
		//	// should I have to make dummy values? 
		//	temp = computer[dest];
		//	computer[dest] = computer[sour];
		//	computer[sour] = temp; 

		//}

		// for player 
		for (int i = 0; i < 3; i++)
		{
			cout << pFund << endl; // debug
			cout << i + 1 << " ��° ��ȣ �Է�." << endl;
			cin >> player[i];

		}
		cout << player << endl;

		// �Է� ü�� �����, ��ǻ�� ����, �÷��̾� �����Է�// 
	}




}