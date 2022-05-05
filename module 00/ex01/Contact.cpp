/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saich <saich@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 16:57:36 by saich             #+#    #+#             */
/*   Updated: 2022/05/05 20:55:54 by saich            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void		Contact::setFirstName(std::string arg) {this->_firstName = arg;}
void		Contact::setLastName(std::string arg) {this->_lastName = arg;}
void		Contact::setNickname(std::string arg) {this->_nickName = arg;}
void		Contact::setDarkestSecret(std::string arg) {this->_darkestSecret = arg;}
void		Contact::setPhonenumber(std::string arg) {this->_phoneNumber = arg;}

std::string	Contact::getFirstName() const {return (this->_firstName);}
std::string	Contact::getLastName() const {return (this->_lastName);}
std::string	Contact::getNickName() const {return (this->_nickName);}
std::string	Contact::getdarkestSecret() const {return (this->_darkestSecret);}
std::string	Contact::getphoneNumber() const {return (this->_phoneNumber);}

void		Contact::printContact()
{
	std::cout << "First name : " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickName << std::endl;
	std::cout << "Phone number: " << this->_phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->_darkestSecret << std::endl;
}
