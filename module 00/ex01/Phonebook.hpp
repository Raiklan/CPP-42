/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:48:46 by saich             #+#    #+#             */
/*   Updated: 2022/05/03 19:11:12 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook
{
private:
	Contact	_contacts[8];
public:
	Phonebook();
	~Phonebook();

	void	add(int i);
	void	search();
	void	display();
};

#endif
