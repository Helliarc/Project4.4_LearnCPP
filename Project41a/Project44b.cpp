#include <string>
#include <iostream>


void clearStream()
{
	std::cin.ignore(32767, '\n');
}

std::string getName()
{
	std::cout << "Enter your name: ";
	std::string name;
	std::getline(std::cin, name);

	return name;
}

int getAge()
{
	std::cout << "Enter your age: ";
	int age{0}; 
	std::cin >> age;
	
	return age;
}

int main()
{
	int age(getAge());
	clearStream();
	std::string name(getName());

	std::cout << name << " is " << age << " years old..." << std::endl;

	return 0;
}