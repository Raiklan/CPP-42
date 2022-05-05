/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 21:16:11 by saich             #+#    #+#             */
/*   Updated: 2022/05/05 21:16:13 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie
{
	private:
		std::string _name;
		
	public:
		Zombie(std::string Name);
		~Zombie();

		void	announce(void) const;
};

void	randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif
