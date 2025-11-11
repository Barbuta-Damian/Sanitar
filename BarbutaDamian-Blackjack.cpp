// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
int main()
{ 
    std::cout << "In this blackjack simulation, the ace will ALWAYS be 1.\n";
    int dealcard1 = 1 + (rand() % 11);
	int dealcard2 = 1 + (rand() % 11);  
	int dealtotal = dealcard1 + dealcard2;
	// cartile de sus sunt ale dealerului
	int playcard1 = 1 + (rand() % 11);	
	int playcard2 = 1 + (rand() % 11);
	int playtotal = playcard1 + playcard2;
	// cartile de sus sunt ale jucatorului
	std::cout << "your total is" << "\n";
	//cartile jucatorului de la inceput
	std::cout << playtotal << "\n";
	std::cout << "do you want to draw a card? (y/n)" << "\n";
	char draw;
	std::cin >> draw;
	//optiunea de a trage o carte
	if (draw == 'y') {
		int playcard3 = 1 + (rand() % 11);
		playtotal = playtotal + playcard3;
		std::cout << "your total is" << "\n";
		std::cout << playtotal << "\n";
	}
	else if (draw == 'n') {
		std::cout << "your total is" << "\n";
		std::cout << playtotal << "\n";
	}
	if (playtotal > 21){
		std::cout << "You went over 21, you lose." << "\n";
	// verificare daca jucatorul a depasit 21
	}
	if (dealtotal <= 15) {
		int dealcard3 = 1 + (rand() % 11);
		dealtotal = dealtotal + dealcard3;
	else if (dealtotal > 15) {
		std::cout << "The dealer decided not to draw a card." << "\n";
		//decizia dealerului de a trage o carte	
	}
	if (dealtotal > 21) {
		std::cout << "Dealer went over 21, you win!" << "\n";
	}
	else if (dealtotal > playtotal) {
		std::cout << "Dealer wins with a total of " << dealtotal << "\n";
	}
	else if (playtotal > dealtotal) {
		std::cout << "You win with a total of " << playtotal << "\n";
	}
	else if (playtotal == dealtotal) {
		std::cout << "It's a tie with a total of " << playtotal << "\n";
	}

	}


