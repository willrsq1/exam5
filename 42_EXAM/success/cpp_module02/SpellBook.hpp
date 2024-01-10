#pragma once

#include <string>
#include <iostream>

#include "ASpell.hpp"

class SpellBook
{
	private:
	SpellBook & operator=(SpellBook const &);
	SpellBook(SpellBook const &);

	
	std::string		spells_name[5];
	ASpell *		spells_tab[5];
	protected:

	public:
	SpellBook();
	~SpellBook();
void	 learnSpell(ASpell * s);
	ASpell * createSpell(std::string const & n) const;
	void	forgetSpell(std::string const n);

};