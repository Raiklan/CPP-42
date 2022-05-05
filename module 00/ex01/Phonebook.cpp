/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:59:49 by saich             #+#    #+#             */
/*   Updated: 2022/05/05 20:56:26 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	std::cout << "PHONEBOOK" << std::endl;
	std::cout << "- ADD - add a new contact" << std::endl;
	std::cout << "- SEARCH - open phonebook" << std::endl;
	std::cout << "- EXIT - what do you think ?" << std::endl;
}

Phonebook::~Phonebook(void){}

void	Phonebook::display()
{
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << std::endl;
	for (int i = 0; i < 8; i++) {
		std::cout << std::setw(10) << i << "|";
		(_contacts[i].getFirstName().length() > 10) ? std::cout << std::setw(10) << _contacts[i].getFirstName().substr(0, 9) + "." << "|" : std::cout << std::setw(10) << _contacts[i].getFirstName() << "|";
		(_contacts[i].getLastName().length() > 10) ? std::cout << std::setw(10) << _contacts[i].getLastName().substr(0, 9) + "." << "|" : std::cout << std::setw(10) << _contacts[i].getLastName() << "|";
		(_contacts[i].getNickName().length() > 10) ? std::cout << std::setw(10) << _contacts[i].getNickName().substr(0, 9) + "." << std::endl : std::cout << std::setw(10) << _contacts[i].getNickName() << std::endl;
	}
}

void	Phonebook::search()
{
	std::string index;

	display();
	while (1) {
		std::cout << "index: ";
		std::cin >> index;
		if (index.length() == 1 && index[0] >= '0' && index[0] <= '7') {
			break ;
		}
		else {
			std::cout << "Error: Wrong index" << std::endl;
		}
	}
	_contacts[index[0] - 48].printContact();
}

int check_digit(std::string input)
{
	for (unsigned long i = 0; i < input.length(); i++)
	{
		if (isdigit(input[i]) == false)
			return 1;
	}
	return 0;
}

void	Phonebook::add(int i)
{
	std::string	input;

	std::cout << "First name: ";
	if (!std::getline(std::cin, input))
		return ;
	while (input.empty())
	{
		std::cout << "Input can't be empty please enter another input: ";
		if (!std::getline(std::cin, input))
		return ;
	}
	_contacts[i].setFirstName(input);
	std::cout << "Last name: ";
	if (!std::getline(std::cin, input))
		return ;
	while (input.empty())
	{
		std::cout << "Input can't be empty please enter another input: ";
		if (!std::getline(std::cin, input))
		return ;
	}
	_contacts[i].setLastName(input);
	std::cout << "Nickname: ";
	if (!std::getline(std::cin, input))
		return ;
	while (input.empty())
	{
		std::cout << "Input can't be empty please enter another input: ";
		if (!std::getline(std::cin, input))
		return ;
	}
	_contacts[i].setNickname(input);
	std::cout << "Darkest secret: ";
	if (!std::getline(std::cin, input))
		return ;
	while (input.empty())
	{
		std::cout << "Input can't be empty please enter another input: ";
		if (!std::getline(std::cin, input))
		return ;
	}
	_contacts[i].setDarkestSecret(input);
	std::cout << "Phonenumber: ";
	if (!std::getline(std::cin, input))
		return ;
	while (input.empty() || check_digit(input) == 1)
	{
		std::cout << "Input can't be empty or non number please enter another input: ";
		if (!std::getline(std::cin, input))
		return ;
	}
	_contacts[i].setPhonenumber(input);
}
