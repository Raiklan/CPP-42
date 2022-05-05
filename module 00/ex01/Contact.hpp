/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:42:13 by saich             #+#    #+#             */
/*   Updated: 2022/05/05 20:55:27 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickName;
	std::string _phoneNumber;
	std::string _darkestSecret;
public:
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	std::string getphoneNumber() const;
	std::string getdarkestSecret() const;

	void		setLastName(std::string arg);
	void		setNickname(std::string arg);
	void		setDarkestSecret(std::string arg);
	void		setPhonenumber(std::string arg);
	void		setFirstName(std::string arg);

	void		printContact();
};

#endif
