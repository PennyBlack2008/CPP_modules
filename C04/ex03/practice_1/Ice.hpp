#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class	Ice : public Materia
{
	public:
		Ice(void);
		~Ice(void);
		AMateria*	clone() const;
		void		use(ICharacter& target);
};

#endif;