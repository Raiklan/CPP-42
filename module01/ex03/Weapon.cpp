#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type){
	std::cout << "Weapon " << this->_type << " has been created" << std::endl;
}

Weapon::~Weapon(void){
	std::cout << "Weapon " << this->_type << " has been destroyed" << std::endl;
}

const std::string &Weapon::getType(void){
	if (_type.empty()){
		std::cout << "bare hands" << std::endl;
	}
	return _type;
}

void Weapon::setType(std::string newType){
	this->_type = newType;
	return ;
}
