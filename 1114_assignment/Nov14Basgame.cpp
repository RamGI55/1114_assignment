#include <iostream>

using namespace std;
// ============ 광역 변수 영역 ============= // 
int pBet = 0;
int pFund = 0;
int minBet = 500;

int main()
{
	// TODO: 2열 어레이 만들기 // 
	int number[10] = { 0, 1, 2, 3 , 4, 5, 6, 7, 8, 9 };
	int player[3] = {};
	int computer[3] = {};

	// console 

	cout << "가지고 있는 돈을 입력하세요";
	cin >> pFund;

	if (pFund < 500)
	{
		cout << " 가지고 있는 돈이 부족합니다.";
	}
	else
	{
		cout << "배팅 하고자 하는 돈을 입력하세요";
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
			cout << i + 1 << " 번째 번호 입력." << endl;
			cin >> player[i];

		}
		cout << player << endl;

		// 입력 체계 만들기, 컴퓨터 랜덤, 플레이어 직접입력// 
	}




}