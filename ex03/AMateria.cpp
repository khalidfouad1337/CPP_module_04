#include "AMateria.hpp"


AMateria ::AMateria()
{

}

AMateria :: AMateria(std::string const & type):_type(type)
{

}


AMateria :: AMateria(const AMateria& _cpyAMateria)
{
	*this = _cpyAMateria;
}

AMateria& AMateria :: operator= (const AMateria &_cpyAMateria)
{
	if (this != &_cpyAMateria)
		this->_type = _cpyAMateria._type;
	return *this;
}


std::string const & AMateria :: getType() const
{
	return(this->_type);
}


void	AMateria :: use(ICharacter& target)
{
	std :: cout << "ABSTRACT CLASS AMateria Call Function USE Type =>" <<  target.getName() << std :: endl;
}

AMateria ::~AMateria()
{

}