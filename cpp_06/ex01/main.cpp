#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

void *serialize(void)
{
	srand(time(NULL));
	std::string const str = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
	Data *data = new Data();
	data->s1 = "";
	data->s2 = "";

	for (int i = 0; i < 8; i++)
	{
		data->s1 += str[rand() % 62];
		system("sleep 1");
	}
	data->n = rand() % 10;
	for (int i = 0; i < 8; i++)
	{
		data->s2 += str[rand() % 62];
		system("sleep 1");
	}
	// std::cout << data->s1 << " " << data->n << " " << data->s2 << std::endl;
	return (reinterpret_cast<void*>(data));
}

Data *deserialize(void *raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main()
{
	void *serialized = serialize();
	std::cout << "Serialized data: " << serialized << std::endl;

	Data *deserialized = deserialize(serialized);
	std::cout << "Deserialized data: " << deserialized->s1 << " " << deserialized->n << " " << deserialized->s2 << std::endl;
	delete(deserialized);
}
