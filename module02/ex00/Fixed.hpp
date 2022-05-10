/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:24:50 by saich             #+#    #+#             */
/*   Updated: 2022/05/10 17:24:52 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed{
	private:
		int	_fixed;
		static const int _fract = 8;

	public:
		Fixed(void);
		Fixed(const Fixed &inst);
		~Fixed(void);
		Fixed & operator =(Fixed const &inst);
		int getRawBits(void) const;
		void setRawBits( int const raw );
};

#endif
