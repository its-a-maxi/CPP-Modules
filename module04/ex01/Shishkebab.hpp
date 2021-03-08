#ifndef SHISHKEBAB_HPP
# define SHISHKEBAB_HPP

# include "AWeapon.hpp"

class Shishkebab : public AWeapon
{

	public:

		Shishkebab();
		Shishkebab( Shishkebab const & src );
		~Shishkebab();

		Shishkebab &		operator=( Shishkebab const & rhs );
		
		virtual void		attack( void ) const;			

	private:

};


#endif /* ***************************************************** SHISHKEBAB_H */