#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name){
	_weaponPTR = NULL;
	std::cout << "HumanB was created: " << this->_name << std::endl;
}

HumanB::~HumanB(void){
	std::cout << "HumanB " << this->_name << " has left the building." << std::endl;
}

void HumanB::attack(void) const{
	if (this->_weaponPTR){
		std::cout << this->_name << " attacks with their " << this->_weaponPTR->getType() << std::endl;
	}
	else{
		std::cout << this->_name << " attacks with their bear hands, cause they have no weapon yet. Good luck with that." << std::endl;
	}
}

void HumanB::setWeapon(Weapon &weapon){
	this->_weaponPTR = &weapon;
}
