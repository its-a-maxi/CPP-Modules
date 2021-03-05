#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{

	public:

		AWeapon( AWeapon const & src );
		AWeapon( std::string const & name, int apcost, int damage );
		~AWeapon( void );

		AWeapon &			operator=( AWeapon const & rhs );

		virtual void 		attack( void ) const = 0;

		std::string const & getName( void ) const;
		int					getAPCost( void ) const;
		int					getDamage( void ) const;
		void				setName( std::string const & name );
		void				setAPCost( int apcost );
		void				setDamage( int damage );	

	private:

		AWeapon( void );

		std::string			_name;
		int					_APCost;
		int					_damage;

};

#endif /* ********************************************************* AWEAPON_H */