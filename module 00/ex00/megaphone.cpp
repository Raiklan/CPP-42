/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:24:29 by saich             #+#    #+#             */
/*   Updated: 2022/05/03 19:15:01 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	*ft_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = std::toupper(str[i]);
		i++;
	}
	return (str);
}

int	main(int ac, char **av)
{
	int i;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	i = 1;
	while (av[i])
	{
		av[i] = ft_toupper(av[i]);
		std::cout << av[i];
		if (av[i + 1])
			std::cout << " ";
		i++;
	}
	std::cout << std::endl;
	return 0;
}
