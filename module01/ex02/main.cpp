/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 21:34:20 by saich             #+#    #+#             */
/*   Updated: 2022/05/05 21:34:30 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void){
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;
	std::cout << "Memory address string is: " << &string << std::endl;
	std::cout << "Memory address stringPTR is: " << stringPTR << std::endl;
	std::cout << "Memory address stringREF is: " << &stringREF << std::endl;
	std::cout << "Value string is: " << string << std::endl;
	std::cout << "Value stringPTR is: " << *stringPTR << std::endl;
	std::cout << "Value stringREF is: " << stringREF << std::endl;
}
