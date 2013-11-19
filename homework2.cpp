/*
 * homework2.cpp
 *
 *  Created on: Sep 9, 2013
 *      Author: Sohom Bhattacharya
 *      Date Completed: 9/19/2013
 */


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main()
{
	string play;

	cout << "Are you ready to begin?" << endl;
	cin >> play;

	while (play == "yes")

	{

	srand(time(NULL));


int card1 =  2 + rand() % 9;			// value of the player's first card
int card2 =  2 + rand() % 9;			// value of the player's second card

int dealer_card_1 = 2 + rand() % 9;		// value of the dealer's first card
int dealer_card_2 = 2 + rand() % 9;		// value of the dealer's hidden card

int dealer_sum = dealer_card_1 + dealer_card_2;		// sum of the dealer's cards
int sum = card1 + card2;							// sum of the player's cards
string decision1;									// string value of the decision to hit or stand

cout << "Let's play a game of Lackjack!" << endl;
cout << "The cards are now set" << endl;


cout << "Your cards are " << card1 << " and " << card2 << endl;
cout << "The dealer has shown only a " <<dealer_card_1 << endl;

cout << "What would you like to do, stand or hit?" << endl;
cin >> decision1;

if (decision1 == "hit")
{
	string decision2;
	int x = 2 + rand() % 9;

	sum = sum + x;
	cout << "The card turned out to be " << x << endl;

	if (sum > 21)
	{cout << "Sorry you busted! You lost!" << endl;
	 cout << "Would you like to play again?" << endl;
	 cin >> play;
	}
	if (sum == 21)
	{cout << "You have blackjack!" << endl;

	}
	if (sum < 21)
	{cout <<"Now your sum is " << sum << endl;

	cout << "Would you like to hit again? " << endl;
	cin >> decision2;
	}
	while (decision2 == "yes")
	{
		int y = 2 + rand() % 9;

		sum = sum + y;
		cout << "Your sum is now " << sum << endl;

		if (sum > 21)
		{cout << "Sorry you busted! You lost!" << endl;
		 cout << "Would you like to play again?" << endl;
		 cin >> play;
		}

		if (sum == 21)
		{cout << "You have blackjack!" << endl;
		cout << "Type proceed to see what the dealer has" << endl;
		cin >> decision1;
		}
		if (sum < 21)
		{
			cout << "Would you like to hit again?" << endl;
				cin >> decision2;
		}
	}
}

	if (decision1 == "stand" || decision1 == "proceed")
	{

	cout << "You are now standing on " << sum << endl;

	}
	cout << "Lets see what the dealer does now" << endl;
	cout << "The dealer reveals his hidden card to be " << dealer_card_2 << endl;
	cout << "The dealer has a sum of " << dealer_sum << endl;

	while (dealer_sum < 17)

	{
		int z = 2 + rand() % 9;

		cout << "The dealer picks up a " << z << endl;
		dealer_sum = dealer_sum + z;
		cout << "The dealer now has a sum of " << dealer_sum << endl;


	}


	if (dealer_sum >= 17)
			cout << "The dealer now stands on " << dealer_sum << endl;

	if (dealer_sum > 21)
		cout << "The dealer busted! You won!" << endl;

	if ((dealer_sum == 21) && (sum < 21))
		cout << "The dealer has blackjack! You lost" << endl;

	if ((dealer_sum == 21) && (sum == 21))
		cout << "Looks like you tied the dealer" << endl;

	if (dealer_sum < 21 && dealer_sum == sum)
		cout << "Looks like you tied the dealer" << endl;
	if (dealer_sum < 21 && dealer_sum > sum)
		cout << "Looks like you lost this one" << endl;
	if (dealer_sum < 21 && dealer_sum < sum)
		cout << "Congratulations! You beat the dealer!" << endl;


	cout << "Would you like to play again?" << endl;
	cin >> play;

	if (play == "no")
		cout << "Thank you for playing" << endl;

	}




return 0;
}
