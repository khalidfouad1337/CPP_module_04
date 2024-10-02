#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public :
		Ice();
		Ice(std::string const & type);
		Ice(const Ice&);
		Ice& operator= (const Ice&);
		Ice* clone() const;
		void use(ICharacter& target);
		~Ice();
};

#endif