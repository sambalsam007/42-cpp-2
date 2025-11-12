#include "Fixed.hpp"

// default constructor
Box::Box(std::string name) : _name(name)
{

	std::cout << "Default Constructor : " << this->_name << std::endl;
}

// copy ocnstructor
// /creates a new object, same as other

Box::Box(const Box& other) : _name(other._name)
{
	std::cout << "Copy Constructor : " << this->_name <<  std::endl;

	

}

// assignemnt constructor
// assign to an existing object

Box& Box::operator=(const Box& other)
{
	std::cout << "Copy Assignment operator : " << other._name << std::endl;
	if (this != &other)
		
	{
		this->_name = other._name;
	}
	return *this;
}

Box::~Box() 
{
	std::cout << "🐴 DESTRUCTOR : " << this->_name << std::endl;
}

