
#ifndef ASPELL_HPP

#define ASPELL_HPP

# include <iostream>

class ATarget;

class ASpell
{

	protected:

	std::string name;
	std::string effects;

	ASpell();
	ASpell (const ASpell &);
	ASpell & operator=(const ASpell &);




	public:

	ASpell (std::string const &, std::string const &);
	~ASpell();


	std::string const & getName() const;
	std::string const & getEffects() const;

	virtual ASpell * clone() const = 0;


	void launch (ATarget const &) const;






};

# include "ATarget.hpp"

#endif