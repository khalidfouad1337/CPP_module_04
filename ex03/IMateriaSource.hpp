#ifndef _IMATERIASOURCE_HPP
#define _IMATERIASOURCE_HPP

#include "ICharacter.hpp"


class IMateriaSource
{
	public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif