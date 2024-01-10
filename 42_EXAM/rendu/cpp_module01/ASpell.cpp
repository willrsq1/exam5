# include "ASpell.hpp"




ASpell::ASpell()
{

}


ASpell::ASpell (std::string const & name, std::string const &effects) : name(name), effects(effects)
{

}



ASpell::ASpell (const ASpell & jsp)
{
	*this = jsp;
}

ASpell & ASpell::operator=(const ASpell &other)
{
	this->name = other.name;
	this->effects = other.effects;

	return (*this);
}

ASpell::~ASpell()
{

}

std::string const & ASpell::getName() const
{
	return (name);
}

std::string const & ASpell::getEffects() const
{
	return (effects);
}


void ASpell::launch (ATarget const & ref) const
{
	ref.getHitBySpell(*this);
}



