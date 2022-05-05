/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:50:47 by saich             #+#    #+#             */
/*   Updated: 2022/05/05 20:14:16 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

int main() 
{
	Phonebook	phonebook;
	std::string	input;
	int			i;

	i = 0;
	while (1)
	{
		std::cout << "> ";
		if (!std::getline(std::cin, input))
			return 1;
		if (input == "EXIT")
			return 0;
		else if (input == "SEARCH")
			phonebook.search();
		else if (input == "ADD") {
			phonebook.add(i);
			i++;
			if (i == 8)
				i = 0;
		}
	}
	return 0;
}
