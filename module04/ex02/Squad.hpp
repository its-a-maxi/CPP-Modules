#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class Squad : public ISquad
{

	public:

		Squad( void );
		Squad( Squad const & src );
		virtual ~Squad( void );

		Squad &		operator=( Squad const & rhs );

        virtual int 			getCount( void ) const;
        virtual ISpaceMarine* 	getUnit( int pos ) const;

        virtual int				push( ISpaceMarine * );

	private:

		ISpaceMarine **			_squad;
		int						_count;

};

#endif /* *********************************************************** SQUAD_H */