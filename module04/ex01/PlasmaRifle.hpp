#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{

	public:

		PlasmaRifle();
		PlasmaRifle( PlasmaRifle const & src );
		~PlasmaRifle();

		PlasmaRifle &		operator=( PlasmaRifle const & rhs );

		virtual void 		attack( void ) const;		

	private:

};


#endif /* ***************************************************** PLASMARIFLE_H */