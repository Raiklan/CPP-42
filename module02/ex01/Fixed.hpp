#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed{
	private:
		int	_fixed;
		static const int _fract = 8;

	public:
		Fixed(void);
		Fixed(int const n);
		Fixed(const float fp);
		Fixed(const Fixed &inst);
		~Fixed(void);
		Fixed & operator =(Fixed const &inst);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream &	operator<<(std::ostream &o, Fixed const &rhs);

#endif
