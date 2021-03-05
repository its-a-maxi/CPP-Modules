#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{

	public:

		AssaultTerminator( void );
		AssaultTerminator( AssaultTerminator const & src );
		virtual ~AssaultTerminator( void );

		virtual ISpaceMarine *	clone( void ) const;
		virtual void			battleCry( void ) const;
		virtual void			rangedAttack( void ) const;
		virtual void			meleeAttack( void ) const;

		AssaultTerminator &		operator=( AssaultTerminator const & rhs );

	private:
		

};

#endif /* ***************************************************** ASSAULTTERMINATOR_H */