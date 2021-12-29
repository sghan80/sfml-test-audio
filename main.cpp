#include <iostream>
#include <SFML/Audio.hpp>
#include <SFML/Window/Keyboard.hpp>
 
int main()
{
    sf::Music mp;
    
    if (!mp.openFromFile("next_level_aespa.ogg")) 
    	return -1;
	
	while (1)
	{

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::P))
		{
			if (mp.getStatus() != sf::Music::Playing)
				mp.play();
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			if (mp.getStatus() != sf::Music::Paused)
				mp.pause();
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
		{
			return EXIT_SUCCESS;
		}
	}
}