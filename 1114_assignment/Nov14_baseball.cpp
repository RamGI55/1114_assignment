#include <iostream>

using namespace std; 
// ============ 광역 변수 영역 ============= // 


void InputplayCom(int& inputPlayer, int& inputComputer);



int main()
{
	// ====== variation 영역 ========= // 
	int pBet = 0;
	int pFund = 0;
	int minFund = 500; 
	int maxGame = 10;
	int winMulti = 2;
	int game = 0;

	int number[10] = { 0, 1, 2, 3 , 4, 5, 6, 7, 8, 9 };
	int player[3] ={};
	int computer[3] ={}; 

	int ball = 0;
	int strike = 0; 

	// console 
	cout << "소지금을 입력해 주세요 : " << endl;
	cin >> pFund;
	cout << endl;
	
	// minFund 보다 낮을시. 

	while (minFund > pFund)
		if (minFund > pFund)
		{
			cout << "소지금이 부족합니다. (최소 500) " << endl;
			cout << "소지금을 입력해 주세요: " << endl;
			cin >> pFund; 
			cout << endl; 
		}

		cout << " 배팅 금액을 입력해주세요  " << endl;
		cin >> pBet; 

		while (minFund > pBet)
			if (minFund > pBet)
			{
				cout << "최소 배팅금액은 " << minFund << " 입니다. " << endl; 
				cout << " 배팅 금액을 입력해주세요:  " << endl;
				cin >> pBet; 
				cout << endl;
				
		

			}
		while (pBet > pFund)
			if (pBet > pFund)
			{
				cout << "소지금이 부족합니다. "<< endl;
				cout << " 배팅 금액을 입력해주세요:  " << endl;
				cin >> pBet;
				cout << endl;
			}
	// ==== Making the player function ======= // 
	pFund =pFund - pBet; 
	while (game <= maxGame)
	{	
		for (int i = 0; i < 3; i++)
		{
			 cout << i + 1<< " 번째 숫자를 입력해 주세요. : "; 
			 cin >> player [i]; 
			
			 if (0 > player[i] || player[i] > 10)
			 {
				cout << "잘못된 번호 입니다. 다시 입력해주세요. : ";
				i--;
				continue;
			 }
			 computer[i] = rand()% 10;

			cout << "당신의" << i +1 << " 번째 숫자는" << player[i] << endl; 
			cout << "컴퓨터의" << i +1 << " 번째 숫자는" << computer[i] << endl; 
			for (int j = 0; j < 3 ; j++)
			{
				// TODO :: Ball counts double when the player put duplicated number, e.g. 3, 3, 5 > counts 2 balls. 
				if (player[i] == computer [j])
				{
					ball++; 

				}
				if (player[i] == computer[i])
				{
						strike ++;
						ball--;

				}
			}

			
		}
		
		// result 
		cout << ball << endl; 
		cout << strike << endl; 
		cout << pFund << endl;
		game ++;
	}
	pFund = pFund + (pBet * (ball + strike) * winMulti);
} 

	
	 // ==== 함수 구역 ====== //



		//int computerRand()
//{
//	
//	int dest, sour, temp;
//	for (int i = 0; i < 256; i++)
//	{
//		srand(time(0));
//		dest = rand() % 10;
//		sour = rand() % 10;
//		// should I have to make dummy values? 
//		temp = computer[dest];
//		computer[dest] = computer[sour];
//		computer[sour] = temp;
//
//	}
		// 함수 2 - 점수 비교해서 결과 도출 

		// 함수 3 -