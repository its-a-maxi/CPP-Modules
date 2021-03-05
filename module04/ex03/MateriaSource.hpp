#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource
{

	public:

		MateriaSource();
		MateriaSource( MateriaSource const & src );
		~MateriaSource();

		MateriaSource &		operator=( MateriaSource const & rhs );

		virtual void		learnMateria( AMateria * m );
		virtual AMateria *	createMateria( std::string const & type );

	private:
		
		AMateria **			_inventory;

};

#endif /* *************************************************** MATERIASOURCE_H */