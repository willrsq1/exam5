#include "SpellBook.hpp"


SpellBook::SpellBook()
{
	
	for (size_t i = 0; i < 5; i++)
	{
		spells_name[i] = "";
		spells_tab[i] = NULL;
	}
	
}

SpellBook::~SpellBook()
{
}

SpellBook::SpellBook(SpellBook const & rhs)
{
	this->spells_name[0] = rhs.spells_name[0];
}

SpellBook & SpellBook::operator=(SpellBook const & rhs)
{

	this->spells_name[0] = rhs.spells_name[0];
	return (*this);
}

void	 SpellBook::learnSpell(ASpell * s)
{
	for (size_t i = 0; i < 5; i++)
	{
		if (spells_name[i] == s->getName())
			return ;
	}
	for( size_t i = 0; i < 5; i++)
	{
		if (spells_name[i] == "")
		{
			spells_name[i] = s->getName();
			spells_tab[i] = s->clone();
			return ;
		}
	}
	
}

void	 SpellBook::forgetSpell(std::string const n)
{
	for (int i = 0; i < 5; i++)
	{
		if (n == spells_name[i])
		{
			spells_name[i] = "";
			spells_tab[i] = NULL;
			return ;
		}
	}
}

ASpell * SpellBook::createSpell(std::string const & n) const
{
	
	for (int i = 0; i < 5; i++)
	{
		if (n == spells_name[i])
		{
			return spells_tab[i]->clone();
		}
	}
	return (NULL);
}
