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
	int maxGame = 9;
	int winMulti = 2;
	int game = 0;

	int number[10] = { 0, 1, 2, 3 , 4, 5, 6, 7, 8, 9 };
	int player[3] ={};
	int computer[3] ={}; 

	int ball = 0;
	int strike = 0; 

	// console 
	cout << "Please enter your funds you have: " << endl;
	cin >> pFund;
	cout << endl;
	
	// minFund 보다 낮을시. 

	while (minFund > pFund)
		if (minFund > pFund)
		{
			cout << "Insufficient funds. (Min. 500) " << endl;
			cout << "Please enter your funds you have: " << endl;
			cin >> pFund; 
			cout << endl; 
		}

		cout << "Please enter your bet amount: " << endl;
		cin >> pBet; 

		while (minFund > pBet)
			if (minFund > pBet)
			{
				cout << "Min bet amount is " << minFund << endl; 
				cout << "Please enter your bet amount: " << endl;
				cin >> pBet; 
				cout << endl;

			}
		while (pBet > pFund)
			if (pBet > pFund)
			{
				cout << "Insufficient funds."<< endl;
				cout << "Please enter your bet amount: " << endl;
				cin >> pBet;
				cout << endl;
			}
	// ==== Making the player function ======= // 
	pFund = pFund - pBet; 
	while (game <= maxGame)
	{	
		for (int i = 0; i < 3; i++)
		{
			 cout << "Enter your # " << i + 1 << " (0-9) : ";
			 cin >> player [i]; 
			
			 if (0 > player[i] || player[i] > 10)
			 {
				cout << "Incorrect number. Please enter again : ";
				i--;
				continue;
			 }
			 computer[i] = rand()% 10;


			}

			for (int i = 0; i < 3 ; i ++)
			{
				for (int j = 0; j < 3 ; j++)
				{
					// TODO :: Ball counts double when the player put duplicated number, e.g. 3, 3, 5 > counts 2 balls. 
					// Ball counter goes negative value. 
					if (player[i] == computer[i])
					{
						strike ++;
						break;
						
					}
					else if (player[i] == computer [j])
					{
						ball++; 
						break;
					}
			
				}

			
			}
		// result
		cout << "Your First draw was " << player[0] << endl; 
		cout << "Your Second draw was " << player[1] << endl; 
		cout << "Your Third draw was " << player[2] << endl; 
		cout << "House's First draw was " << computer[0] << endl; 
		cout << "House's Second draw was " << computer[1] << endl; 
		cout << "House's Third draw was " << computer[2] << endl; 
		pFund = pFund + (pBet * ((ball + strike) * winMulti)); 
		game ++;
	}

	cout << endl;
	cout << "Final Result"<< endl; 
	cout << endl;
	cout << "Total # of Balls : "<<  ball << endl; 
	cout << "Total # of Strikes : " << strike << endl; 
	cout << "Total your funds so far : "<< pFund << endl;
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