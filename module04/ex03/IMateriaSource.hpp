#ifndef IIMATERIASOURCE_HPP
# define IIMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{

	public:

		virtual ~IMateriaSource() {}
		virtual void		learnMateria( AMateria * ) = 0;
		virtual AMateria *	createMateria( std::string const & type ) = 0;

};

#endif /* *************************************************** IIMATERIASOURCE_H */