#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
class AMateria;
# include "ICharacter.hpp"

class AMateria
{

	public:

		AMateria( void );
		AMateria( std::string const & type );
		AMateria( AMateria const & src );
		virtual ~AMateria();

		AMateria &		operator=( AMateria const & rhs );

		std::string const &	getType( void ) const;
		unsigned int		getXP( void ) const;

		virtual AMateria *	clone( void ) const = 0;
		virtual void		use( ICharacter & target );

	private:

		std::string			_type;
		unsigned int		_xp;

};

#endif /* ******************************************************** AMATERIA_H */