/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 21:29:43 by saich             #+#    #+#             */
/*   Updated: 2022/05/05 21:29:59 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
	Zombie	*newHorde = new Zombie[N];
	for (int i = 0; i < N; ++i){
		newHorde[i].setName(name);
	}
	return (newHorde);
}
