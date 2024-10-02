#ifndef _CURE_HPP
#define _CURE_HPP

#include "Ice.hpp"

class Cure : public AMateria
{
	public :
		Cure();
		Cure(std::string const & type);
		Cure(const Cure&);
		Cure& operator= (const Cure&);
		Cure* clone() const;
		void use(ICharacter& target);
		~Cure();

};

#endif