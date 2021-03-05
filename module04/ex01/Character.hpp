#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{

	public:

		Character( std::string const & name );
		Character( Character const & src );
		~Character();

		Character &			operator=( Character const & rhs );

		void				recoveryAP( void );
		void				equip( AWeapon * weapon );
		void				attack( Enemy * enemy );

		std::string const & getName( void ) const;
		int					getAP( void ) const;
		AWeapon *			getWeapon( void ) const;

	private:
	
		Character();

		std::string			_name;
		int					_AP;
		AWeapon	*			_weapon;

};

std::ostream &			operator<<( std::ostream & o, Character const & i );

#endif /* ******************************************************* CHARACTER_H */