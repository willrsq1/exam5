


#include "SpellBook.hpp"


SpellBook::SpellBook()
{
	Fwoosh_count = 0;
	Polymorph_count = 0;
	Fireball_count = 0;
}

SpellBook::~SpellBook()
{
}

SpellBook::SpellBook(SpellBook const & rhs)
{
	(void)rhs;
}

SpellBook & SpellBook::operator=(SpellBook const & rhs)
{

	(void)rhs;
	return (*this);
}

void	 SpellBook::learnSpell(ASpell * s)
{
	if (s)
	{
		if (s->getName() == "Fwoosh")
		{
			Fwoosh_count = 1;
		}
		if (s->getName() == "Fireball")
		{
			Fireball_count = 1;
		}
		if (s->getName() == "Polymorph")
		{
			Polymorph_count = 1;
		}
	}
}

void	 SpellBook::forgetSpell(std::string const n)
{
		if (n == "Fwoosh")
		{
			Fwoosh_count = 0;
		}
		if (n == "Fireball")
		{
			Fireball_count = 0;
		}
		if (n == "Polymorph")
		{
			Polymorph_count = 0;
		}
}

ASpell * SpellBook::createSpell(std::string const & n) const
{
		if (n == "Fwoosh" && Fwoosh_count == 1)
		{
			return new Fwoosh;
		}
		if (n == "Fireball" && Fireball_count == 1)
		{
			return new Fireball;
		}
		if (n == "Polymorph" && Polymorph_count == 1)
		{
			return new Polymorph;
		}
	return NULL;
}
