#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{

	public:

		Enemy( int hp, std::string const & type );
		Enemy( Enemy const & src );
		virtual ~Enemy();

		Enemy &		operator=( Enemy const & rhs );

		virtual void		takeDamage( int damage );

		std::string const & getType( void ) const;
		int					getHP( void ) const;

	private:
	
		Enemy();

		std::string			_type;
		int					_HP;

};

#endif /* *********************************************************** ENEMY_H */