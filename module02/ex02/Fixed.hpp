/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:28:53 by saich             #+#    #+#             */
/*   Updated: 2022/05/10 17:28:54 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed{
	private:
		int	_fixed;
		static const int _fract = 8;

	public:
		Fixed(void);
		Fixed(const int n);
		Fixed(const float fp);
		Fixed(const Fixed &inst);
		~Fixed(void);
		Fixed & operator =(Fixed const & inst);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		bool operator <(Fixed const & rhs);
		bool operator >(Fixed const & rhs);
		bool operator >=(Fixed const & rhs);
		bool operator <=(Fixed const & rhs);
		bool operator !=(Fixed const & rhs);
		bool operator ==(Fixed const & rhs);
		Fixed operator -(Fixed const & rhs);
		Fixed operator +(Fixed const & rhs) const;
		Fixed operator *(Fixed const & rhs) const;
		Fixed operator /(Fixed const & rhs);
		Fixed & operator ++(void);
		Fixed operator ++(int n);
		Fixed & operator --(void);
		Fixed operator --(int n);
		static Fixed & min(Fixed &one, Fixed &two);
		static Fixed min(Fixed const &one, Fixed const &two);
		static Fixed & max(Fixed &one, Fixed &two);
		static Fixed max(Fixed const &one, Fixed const &two);
};

std::ostream &	operator<<(std::ostream &o, Fixed const &rhs);

#endif
