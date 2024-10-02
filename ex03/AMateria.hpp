#ifndef _AMATERIA_HPP
#define _AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;
class AMateria
{
	protected:
		std :: string _type;
	public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria&);
	AMateria& operator= (const AMateria&);
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
	virtual ~AMateria();
};


#endif