#include <Windows.h>
#include <iostream>
#include <string>
#include <algorithm>

int game()
{
	std::string name{};

	std::printf("WELCOME TO THE WINNIE GAME V1.5 WITH THE NEW DLC UPDATE\n");
	std::printf("this update gives various prompts\n");

	std::printf("Please type your name.\n");

	std::printf("Name: ");
	std::getline(std::cin, name);

	std::transform(name.begin(), name.end(), name.begin(), tolower);
	if (name != "winnie")
	{
		std::printf("This application is only for winnie, please give it to winnie.\n");
		return 0;
	}

	std::printf("Yo winnie, what's good it's me the programmer would you like to play a game?\n");
	std::printf("input: ");
	std::string input{};

	while (std::getline(std::cin, input))
	{
		std::transform(input.begin(), input.end(), input.begin(), tolower);

		if (input[0] != 'y' && input[0] != 'n' && input[0] != 's' && input[0] != 'p')
		{
			std::printf("Please type yes or no.\n");
			std::printf("input: ");
		}
		else if (input[0] == 'n')
		{
			std::printf("Well okay I'm not trying to be rude but WTF WINNIE.\n");
			return 0;
		}
		else if (input == "sure")
		{
			std::printf("welcome to the DLC pack! can you guess how many anime girls I hide in my closet?\n");
			std::string pa{};
			std::getline(std::cin, pa);

			if (std::stoi(pa) == 5)
			{
				std::printf("You guessed correctly! Here's a cookie :cookie:\n");
			}
			else
			{
				std::printf("You're wrong.\n");
			}
			break;
		}
		else if (input == "perhaps")
		{
			std::printf("Welcome to the second DLC pack, can you guess how many hours I have left?\n");
			std::string pa{};
			std::getline(std::cin, pa);

			if (std::stoi(pa) == 69)
			{
				std::printf("You guessed correctly! Here's a cookie :cookie:\n");
			}
			else
			{
				std::printf("You're wrong try again.\n");
			}
			break;
		}
		else
			break;
	}

	std::printf("Okay let's play a game, crack the password and type it here.\n");
	std::printf("Password: ");
	std::string password{};
	std::getline(std::cin, password);
	std::transform(name.begin(), name.end(), name.begin(), tolower);


	// the password is "|Z⌂<}\<d]<{W?}JaL}v_[.?a" btw

	int key = 15;
	std::string pwd{};

	for (int i = 0; i < password.length(); ++i)
	{
		pwd.push_back(password[i] ^ key);
	}

	if (pwd == "sUp3rS3kR3tX0rEnCryPT!0n")
	{
		std::printf("You are a winner!\n");
	}
	else
	{
		std::printf("You have got the password wrong :(\n");
	}

	return 0;
}

int main()
{
	SetConsoleTitleA("Winnie Machine v1.5");
	int ret_code = game();
	std::cin.get();
	
	return ret_code;
}