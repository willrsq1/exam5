

#pragma once

#include <string>
#include <iostream>

#include "ASpell.hpp"

class Fwoosh;
class Polymorph;
class Fireball;


class SpellBook
{
	private:
	SpellBook & operator=(SpellBook const &);
	SpellBook(SpellBook const &);

	
	int		Fwoosh_count;
	int		Fireball_count;
	int		Polymorph_count;

	protected:

	public:
	SpellBook();
	~SpellBook();
void	 learnSpell(ASpell * s);
	ASpell * createSpell(std::string const & n) const;
	void	forgetSpell(std::string const n);

};

#include "Fwoosh.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"