/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:53:55 by saich             #+#    #+#             */
/*   Updated: 2022/05/10 16:54:00 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Harl_HPP
# define Harl_HPP
# include <iostream>
# include <string>

class Harl{

	private:
		void _debug (void) const;
		void _info (void) const;
		void _warning (void) const;
		void _error (void) const;

	public:
		Harl(void);
		~Harl(void);

		void complain(std::string level);
};

typedef	void(Harl::*whatNow)(void) const;

#endif
