#pragma once
#include "Test.hpp"


int main()
{
	//sf::RenderWindow window(sf::VideoMode(500, 500), "SFML works!");

	Test test;
	//test.testPush();
	//test.testPop();
	//test.testDrawCard();
	//test.testPlayCard();
	test.testShuffle();
	
	/*while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.display();
	}*/

	return 0;
}