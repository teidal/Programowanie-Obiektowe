// projekt_gra_karciana.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Player.h"
#include <ctime>

Card choose_card(Player& player)
{
	int decision;
	std::cout << "choose your card" << std::endl;
	player.display_hand();
	std::cin >> decision;
	switch(decision)
	{
	case 1:
		std::cout << std::string( 100, '\n' );
		return player.remove_from_hand(1);
	case 2:
		std::cout << std::string( 100, '\n' );
		return player.remove_from_hand(2);
	case 3:
		std::cout << std::string( 100, '\n' );
		return player.remove_from_hand(3);
	case 4:
		std::cout << std::string( 100, '\n' );
		return player.remove_from_hand(4);
	case 5:
		std::cout << std::string( 100, '\n' );
		return player.remove_from_hand(5);
	default:
		std::cout << "I choose for you";
		std::cout << std::string( 100, '\n' );
		return player.remove_from_hand(2);
	}
	
}

int _tmain(int argc, _TCHAR* argv[])
{
	std::srand(std::time(0));

	Player player1, player2;
	Card active1, active2;

	player1.set_points(0);
	player2.set_points(0);

	while(player1.get_points() != 5 && player2.get_points() != 5)
	{
		std::cout << "Player 1 ";
		active1 = choose_card(player1);
		player1.add_to_hand();
		std::cout << "Player 2 ";
		active2 = choose_card(player2);
		player2.add_to_hand();

		std::cout << "Player 1 card: ";
		active1.display_card();
		std::cout << std::endl << "Player 2 card: ";
		active2.display_card();
		std::cout << "\n\n\n\n";

		if(active1.get_power() >= active2.get_health()) 
		{
			player1.increase_points();
			std::cout << "Player 1 kills Player 2! \n\n";
		}
		if(active2.get_power() >= active1.get_health())
		{
			player2.increase_points();
			std::cout << "Player 2 kills Player 1! \n\n";
		}

		std::cout << "Player 1 points: " << player1.get_points() << std::endl <<
			"Player 2 points: " << player2.get_points();

		std::cout << std::endl;
		system("pause");
		std::cout << std::string( 100, '\n' );

	}

	if(player1.get_points() == 5) std::cout << "Player 1 wins!";
	else std::cout << "Player 2 wins! ";


	system("pause");
	return 0;
}

