#ifndef RAIDER_HPP
# define RAIDER_HPP

# include "Enemy.hpp"

class Raider : public Enemy
{

	public:

		Raider();
		Raider( Raider const & src );
		virtual ~Raider();

		Raider &		operator=( Raider const & rhs );

	private:

};

#endif /* ***************************************************** RAIDER_H */