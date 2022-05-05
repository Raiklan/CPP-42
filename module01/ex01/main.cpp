/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 21:30:08 by saich             #+#    #+#             */
/*   Updated: 2022/05/05 21:31:50 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	{
		Zombie	*hordeMario;
		hordeMario = zombieHorde(20, "Mario");
		for(int i = 0; i < 20; i++){
			hordeMario[i].announce();
		}
		delete [] hordeMario;
	}
	{
		Zombie	*hordeLuigi;
		hordeLuigi = zombieHorde(15, "Luigi");
		for(int i = 0; i < 15; i++){
			hordeLuigi[i].announce();
		}
		delete [] hordeLuigi;
	}
}
