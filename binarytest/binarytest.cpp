#include <iostream>
#include <vector>
#include <string>
#include <bitset>


class encoder
{
private:
	std::vector<char> user_text;
	std::vector<char> user_key;
	std::vector<char> secret_key{ 'g', '9', 'V', 'q', '%', '1', ')', 'l' };



public:

	char coder()
	{
		for (size_t i = 0; i < user_text.size(); i++)
		{
			int j = 0;
			if (j == 8) { j == 0; };
			user_text[i] = user_text[i] ^ secret_key[j];
			j++;
			
		}
	}

	char set_text(std::vector<char >& user_text)
	{
		this->user_text = user_text;
	}

	char set_key(std::vector<char >& user_key)
	{
		this->user_key = user_key;
	}

};



int main()
{
	setlocale(LC_ALL, "RU");

	encoder user;
	char request[12];
	std::string user_text;

	std::cout << "Шифрование / Дешифрование " << std::endl;
	std::cin >> request;
	if (request == "Шифрование")
	{
		//вызывать фунцию шифрования
		std::cout << "Введите текст" << std::endl;
		std::cin >> user_text;
		user.set_text(user_text);
	}
	else if (request == "Дешифрование")
	{
		//вызывать фунцию дешифрования
	}
	else
	{
		std::cout << "Нету такого варианта" << std::endl;
	}


	return 0;
}
