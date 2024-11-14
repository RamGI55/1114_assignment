// Assignment 
// number baseball game 

	// variables 

// int player [3] 
// int computer [3] restains 0 to 9 
// 
// int bet 
// int funds 
// 100 <= int bet <= funds 

// gain condition - when the player get strikes, no matter how much strike player got 
// gain - bet * 2

// 10 games total 
// or 
// runs out player funds.

// if player gets too many money, print warning sign the house pissed off. 
// if earn player more than 100000 then stop the game and kill the player. 

	// 

// player vs computer 
// range restain 0 <= r <= 9
// computer - srand, rand%9 
// computer - 2, 3, 5  >> player assumes numbers what computer got in the order, order-senstive. 

// if only number is matched - ball 
// if number and orders are matched - strike 

// e,g, 
//  3, 4 ,5 - c 
//  4, 3, 3 - p 
// prints 2 balls.	

//  3 , 4 , 1
//  3 , 1, 4 
// 2b 1s - counts 2s

// 3s player wins 

// players can be

#include <iostream>

using namespace std; 
// ============ 광역 변수 영역 ============= // 
int number[10] = { 0, 1, 2, 3 , 4, 5, 6, 7, 8, 9 };
int player[3] = { 0, };
int computer[3] = { 0, };

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


int main()
{
	// ====== variation ========= // 
	int pBet = 0;
	int pFund = 0;
	int minFund = 500; 
	int maxGame = 10;

	// console 
	for (int i = 0; i < maxGame; i ++ )
	{
		cout << "가지고 있는 돈을 입력하세요 "; 
		cin >> pFund; 

		if (pFund < minFund)
			{
				cout << " 가지고 있는 돈이 부족합니다."; 
			}
		else
			{
				cout << "배팅 하고자 하는 돈을 입력하세요 ";
				cin >> pBet;
				pFund = pFund - pBet;

				int dest, sour, temp;
				for (int i = 0; i < 256; i++)
				{
					srand(time(0));
					dest = rand() % 10;
					sour = rand() % 10;
					// should I have to make dummy values? 
					temp = computer[dest];
					computer[dest] = computer[sour];
					computer[sour] = temp;

				}



				// for player 
				for (int i = 0; i < 3; i++)
				{
					cout << computer << endl; // debug 
					cout << pFund << endl; // debug
					cout << i + 1 << " 번째 번호 입력." << endl;
					cin >> player[i];
		
				}
				cout << i + 1 << "번째 게임 : "<<  player << endl;

			// 입력 체계 만들기, 컴퓨터 랜덤, 플레이어 직접입력// 
			}
	}
}