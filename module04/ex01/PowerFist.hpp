#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{

	public:

		PowerFist();
		PowerFist( PowerFist const & src );
		~PowerFist();

		PowerFist &		operator=( PowerFist const & rhs );
		
		virtual void		attack( void ) const;			

	private:

};


#endif /* ***************************************************** POWERFIST_H */