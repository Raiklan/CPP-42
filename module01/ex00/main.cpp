/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 21:15:07 by saich             #+#    #+#             */
/*   Updated: 2022/05/05 21:15:37 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	// Pointer to heap
	Zombie	*ZombiePtr;
	// Creating zombie on Heap
	ZombiePtr = newZombie("Juan");
	// Creating and deleting zombie on stack
	randomChump("Mmmm-ARiioooo");
	// Zombie on heap is still alive
	ZombiePtr->announce();
	// Deleting zombie on Heap
	delete ZombiePtr;
}
